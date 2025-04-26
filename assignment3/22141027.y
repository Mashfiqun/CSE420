%{

#include "symbol_table.h"
#include <cstdlib>

#define YYSTYPE symbol_info*

extern FILE *yyin;
int yyparse(void);
int yylex(void);
extern YYSTYPE yylval;

// create your symbol table here.
// You can store the pointer to your symbol table in a global variable
// or you can create an object

int lines = 1;

ofstream outlog;

ofstream errlog;
int errors = 0;

symbol_table* sym_tbl;

std::vector<std::string> split(std::string s, std::string delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);

    return tokens;
}
// you may declare other necessary variables here to store necessary info
// such as current variable type, variable list, function name, return type, function parameter types, parameters names etc.
std::string current_variable_type, current_function_name;
std::string current_type;
std::string array_size;
vector <symbol_info*> parameters;
int param_count = 0;

void yyerror(char *s)
{
	outlog<<"At line "<<lines<<" "<<s<<endl<<endl;

    // you may need to reinitialize variables if you find an error
}

%}

%token IF ELSE FOR WHILE DO BREAK INT CHAR FLOAT DOUBLE VOID RETURN SWITCH CASE DEFAULT CONTINUE PRINTLN ADDOP MULOP INCOP DECOP RELOP ASSIGNOP LOGICOP NOT LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD COMMA SEMICOLON CONST_INT CONST_FLOAT ID

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

start : program
	{
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
		outlog<<"Symbol Table"<<endl<<endl;
		
		// Print your whole symbol table here
		sym_tbl->print_all_scopes();
	}
	;

program : program unit
	{
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<$1->get_name()+"\n"+$2->get_name()<<endl<<endl;
		
		$$ = new symbol_info($1->get_name()+"\n"+$2->get_name(),"program");
	}
	| unit
	{
		outlog<<"At line no: "<<lines<<" program : unit "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
		
		$$ = new symbol_info($1->get_name(),"program");
	}
	;

unit : var_declaration
	 {
		outlog<<"At line no: "<<lines<<" unit : var_declaration "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
		
		$$ = new symbol_info($1->get_name(),"unit");
	 }
     | func_definition
     {
		outlog<<"At line no: "<<lines<<" unit : func_definition "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
		
		$$ = new symbol_info($1->get_name(),"unit");
	 }
     ;

func_definition : type_specifier ID LPAREN {current_function_name = $2->get_name();} parameter_list RPAREN {
		symbol_info* func = new symbol_info($2->get_name(), "ID");
		func->set_symbol_type("function_definition");
		func->set_return_type($1->get_name());

		std::vector <std::string> params = split($5->get_name(), ",");
		for (std::string param : params) {
			std::vector <std::string> info = split(param, " ");
			func->add_parameter(info[1], info[0]);
		}
		
		if (!sym_tbl->insert(func)) {
			errlog << "At line no: " << lines << " Multiple declaration of function " << current_function_name << endl << endl;
			errors++;
		}
	} compound_statement
		{	
			outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement "<<endl<<endl;
			outlog<<$1->get_name()<<" "<<$2->get_name()<<"("+$5->get_name()+")\n"<<$8->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+" "+$2->get_name()+"("+$5->get_name()+")\n"+$8->get_name(),"func_def");	
			
			// The function definition is complete.
            // You can now insert necessary information about the function into the symbol table
            // However, note that the scope of the function and the scope of the compound statement are different.
		}
		| type_specifier ID LPAREN RPAREN {
			symbol_info* func = new symbol_info($2->get_name(), "ID");
			func->set_symbol_type("function_definition");
			func->set_return_type($1->get_name());
			sym_tbl->insert(func);
		} compound_statement
		{
			
			outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
			outlog<<$1->get_name()<<" "<<$2->get_name()<<"()\n"<<$6->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+" "+$2->get_name()+"()\n"+$6->get_name(),"func_def");	
			
			// The function definition is complete.
            // You can now insert necessary information about the function into the symbol table
            // However, note that the scope of the function and the scope of the compound statement are different.
		}
 		;

parameter_list : parameter_list COMMA type_specifier ID
		{
			outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier ID "<<endl<<endl;
			outlog<<$1->get_name()<<","<<$3->get_name()<<" "<<$4->get_name()<<endl<<endl;
			
			symbol_info* parameter = new symbol_info($4->get_name(), "parameter");
			parameter->set_symbol_type("Variable");
			parameter->set_data_type($3->get_name());

			bool multiple = false;
			for (auto param : parameters) {
				if (param->get_name() == parameter->get_name()) {
					multiple = true;
					break;
				}
			}

			if (!multiple) {
				parameters.push_back(parameter);
				param_count++;
			}
			else {
				errlog << "At line no: " << lines << " Multiple declaration of variable " << parameter->get_name() << " in parameter of " << current_function_name << endl << endl;
				errors++;
			}

			

			$$ = new symbol_info($1->get_name()+","+$3->get_name()+" "+$4->get_name(),"param_list");
			
            // store the necessary information about the function parameters
            // They will be needed when you want to enter the function into the symbol table
			// $$->set_parameter_types($1->get_parameter_types());
			// $$->set_parameter_names($1->get_parameter_names());
			// $$->add_parameter($4->get_name(), $3->get_name());

		}
		| parameter_list COMMA type_specifier
		{
			outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier "<<endl<<endl;
			outlog<<$1->get_name()<<","<<$3->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+","+$3->get_name(),"param_list");
			
            // store the necessary information about the function parameters
            // They will be needed when you want to enter the function into the symbol table
		}
 		| type_specifier ID
 		{
			outlog<<"At line no: "<<lines<<" parameter_list : type_specifier ID "<<endl<<endl;
			outlog<<$1->get_name()<<" "<<$2->get_name()<<endl<<endl;

			symbol_info* parameter = new symbol_info($2->get_name(), "parameter");
			parameter->set_symbol_type("Variable");
			parameter->set_data_type($1->get_name());
			bool multiple = false;
			for (auto param : parameters) {
				if (param->get_name() == parameter->get_name()) {
					multiple = true;
					break;
				}
			}

			if (!multiple) {
				parameters.push_back(parameter);
				param_count++;
			}
			else {
				errlog << "Line: " << lines << " Multiple declaration of variable " << parameter->get_name() << " in parameter of " << current_function_name << endl << endl;
				errors++;
			}
			
			$$ = new symbol_info($1->get_name()+" "+$2->get_name(),"param_list");
			
            // store the necessary information about the function parameters
            // They will be needed when you want to enter the function into the symbol table
			// $$->add_parameter($2->get_name(), $1->get_name());
		}
		| type_specifier
		{
			outlog<<"At line no: "<<lines<<" parameter_list : type_specifier "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"param_list");
			
            // store the necessary information about the function parameters
            // They will be needed when you want to enter the function into the symbol table
		}
 		;

compound_statement : LCURL {
	sym_tbl->enter_scope();
	if (param_count > 0) {
		for (auto parameter : parameters) {
			sym_tbl->insert(parameter);
		}
		param_count = 0;
		parameters.clear();
	}
	} statements RCURL
			{ 
 		    	outlog<<"At line no: "<<lines<<" compound_statement : LCURL statements RCURL "<<endl<<endl;
				outlog<<"{\n"+$3->get_name()+"\n}"<<endl<<endl;
				
				$$ = new symbol_info("{\n"+$3->get_name()+"\n}","comp_stmnt");
				
                // The compound statement is complete.
                // Print the symbol table here and exit the scope
                // Note that function parameters should be in the current scope
				sym_tbl->print_all_scopes();
				sym_tbl->exit_scope();
 		    }
 		    | LCURL RCURL
 		    { 
 		    	outlog<<"At line no: "<<lines<<" compound_statement : LCURL RCURL "<<endl<<endl;
				outlog<<"{\n}"<<endl<<endl;
				
				$$ = new symbol_info("{\n}","comp_stmnt");
				
				// The compound statement is complete.
                // Print the symbol table here and exit the scope
 		    }
 		    ;
 		    
var_declaration : type_specifier declaration_list SEMICOLON
		 {
			outlog<<"At line no: "<<lines<<" var_declaration : type_specifier declaration_list SEMICOLON "<<endl<<endl;
			outlog<<$1->get_name()<<" "<<$2->get_name()<<";"<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+" "+$2->get_name()+";","var_dec");
			
			if ($1->get_name() == "void") {
				errors++;
				errlog << "At line no: " << lines << " variable type can not be void" << endl << endl;
			}

			// Insert necessary information about the variables in the symbol table
			// std::vector <std::string> tokens = split($2->get_name(), ",");
			// for (const std::string& token: tokens) {
			// 	symbol_info* info = new symbol_info(token, "ID");
			// 	info->set_symbol_type("Variable");
			// 	info->set_data_type($1->get_type());
			// 	sym_tbl->insert(info);
			// }
			
		 }
 		 ;

type_specifier : INT
		{
			outlog<<"At line no: "<<lines<<" type_specifier : INT "<<endl<<endl;
			outlog<<"int"<<endl<<endl;
			
			$$ = new symbol_info("int","type");
			current_type = "int";
	    }
 		| FLOAT
 		{
			outlog<<"At line no: "<<lines<<" type_specifier : FLOAT "<<endl<<endl;
			outlog<<"float"<<endl<<endl;
			
			$$ = new symbol_info("float","type");
			current_type = "float";
	    }
 		| VOID
 		{
			outlog<<"At line no: "<<lines<<" type_specifier : VOID "<<endl<<endl;
			outlog<<"void"<<endl<<endl;
			
			$$ = new symbol_info("void","type");
			current_type = "void";
	    }
 		;

declaration_list : declaration_list COMMA ID
		  {
 		  	outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID "<<endl<<endl;
 		  	outlog<<$1->get_name()+","<<$3->get_name()<<endl<<endl;

            // you may need to store the variable names to insert them in symbol table here or later
			symbol_info* new_symbol = new symbol_info($3->get_name(), "ID");
			new_symbol->set_symbol_type("Variable");
			new_symbol->set_data_type(current_type);
			if (!sym_tbl->insert(new_symbol)) {
				errlog << "At line no: " << lines << " Multiple declaration of variable " << $3->get_name() << endl << endl;
				errors++;
			}
			
			$$ = new symbol_info($1->get_name() + "," + $3->get_name(), "declaration_list");
			
 		  }
 		  | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD //array after some declaration
 		  {
 		  	outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
 		  	outlog<<$1->get_name()+","<<$3->get_name()<<"["<<$5->get_name()<<"]"<<endl<<endl;

            // you may need to store the variable names to insert them in symbol table here or later
			symbol_info* new_symbol = new symbol_info($3->get_name(), current_type);
			new_symbol->set_symbol_type("Array");
			new_symbol->set_array_size(stoi($5->get_name()));
			new_symbol->set_data_type(current_type);
			if (!sym_tbl->insert(new_symbol)) {
				errlog << "At line no: " << lines << " Multiple declaration of variable " << $3->get_name() << endl << endl;
				errors++;
			}
			
            $$ = new symbol_info($1->get_name() + "," + $3->get_name() + "[" + $5->get_name() + "]", "declaration_list");
 		  }
 		  |ID
 		  {
 		  	outlog<<"At line no: "<<lines<<" declaration_list : ID "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;

            // you may need to store the variable names to insert them in symbol table here or later
			symbol_info* new_symbol = new symbol_info($1->get_name(), "ID");
			new_symbol->set_symbol_type("Variable");
			new_symbol->set_data_type(current_type);
			if (!sym_tbl->insert(new_symbol)) {
				errlog << "At line no: " << lines << " Multiple declaration of variable " << $1->get_name() << endl << endl;
				errors++;
			}
			$$ = new symbol_info($1->get_name(), "declaration_list");
			
 		  }
 		  | ID LTHIRD CONST_INT RTHIRD //array
 		  {
 		  	outlog<<"At line no: "<<lines<<" declaration_list : ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
			outlog<<$1->get_name()<<"["<<$3->get_name()<<"]"<<endl<<endl;

            // you may need to store the variable names to insert them in symbol table here or later
            symbol_info* new_symbol = new symbol_info($1->get_name(), "ID");
			new_symbol->set_symbol_type("Array");
            new_symbol->set_array_size(stoi($3->get_name()));  
			if (!sym_tbl->insert(new_symbol)) {
				errlog << "At line no: " << lines << " Multiple declaration of variable " << $1->get_name() << endl << endl;
				errors++;
			}
    		$$ = new symbol_info($1->get_name() + "[" + $3->get_name() + "]", "declaration_list");
 		  }
 		  ;
 		  

statements : statement
	   {
	    	outlog<<"At line no: "<<lines<<" statements : statement "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"stmnts");
	   }
	   | statements statement
	   {
	    	outlog<<"At line no: "<<lines<<" statements : statements statement "<<endl<<endl;
			outlog<<$1->get_name()<<"\n"<<$2->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+"\n"+$2->get_name(),"stmnts");
	   }
	   ;
	   
statement : var_declaration
	  {
	    	outlog<<"At line no: "<<lines<<" statement : var_declaration "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"stmnt");
	  }
	  | func_definition
	  {
	  		outlog<<"At line no: "<<lines<<" statement : func_definition "<<endl<<endl;
            outlog<<$1->get_name()<<endl<<endl;

            $$ = new symbol_info($1->get_name(),"stmnt");
	  		
	  }
	  | expression_statement
	  {
	    	outlog<<"At line no: "<<lines<<" statement : expression_statement "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"stmnt");
	  }
	  | compound_statement
	  {
	    	outlog<<"At line no: "<<lines<<" statement : compound_statement "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"stmnt");
	  }
	  | FOR LPAREN expression_statement expression_statement expression RPAREN statement
	  {
	    	outlog<<"At line no: "<<lines<<" statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement "<<endl<<endl;
			outlog<<"for("<<$3->get_name()<<$4->get_name()<<$5->get_name()<<")\n"<<$7->get_name()<<endl<<endl;
			
			$$ = new symbol_info("for("+$3->get_name()+$4->get_name()+$5->get_name()+")\n"+$7->get_name(),"stmnt");
	  }
	  | IF LPAREN expression RPAREN statement %prec LOWER_THAN_ELSE
	  {
	    	outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement "<<endl<<endl;
			outlog<<"if("<<$3->get_name()<<")\n"<<$5->get_name()<<endl<<endl;
			
			$$ = new symbol_info("if("+$3->get_name()+")\n"+$5->get_name(),"stmnt");
	  }
	  | IF LPAREN expression RPAREN statement ELSE statement
	  {
	    	outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement ELSE statement "<<endl<<endl;
			outlog<<"if("<<$3->get_name()<<")\n"<<$5->get_name()<<"\nelse\n"<<$7->get_name()<<endl<<endl;
			
			$$ = new symbol_info("if("+$3->get_name()+")\n"+$5->get_name()+"\nelse\n"+$7->get_name(),"stmnt");
	  }
	  | WHILE LPAREN expression RPAREN statement
	  {
	    	outlog<<"At line no: "<<lines<<" statement : WHILE LPAREN expression RPAREN statement "<<endl<<endl;
			outlog<<"while("<<$3->get_name()<<")\n"<<$5->get_name()<<endl<<endl;
			
			$$ = new symbol_info("while("+$3->get_name()+")\n"+$5->get_name(),"stmnt");
	  }
	  | PRINTLN LPAREN ID RPAREN SEMICOLON
	  {
	    	outlog<<"At line no: "<<lines<<" statement : PRINTLN LPAREN ID RPAREN SEMICOLON "<<endl<<endl;
			outlog<<"printf("<<$3->get_name()<<");"<<endl<<endl; 
			
			$$ = new symbol_info("printf("+$3->get_name()+");","stmnt");
	  }
	  | RETURN expression SEMICOLON
	  {
	    	outlog<<"At line no: "<<lines<<" statement : RETURN expression SEMICOLON "<<endl<<endl;
			outlog<<"return "<<$2->get_name()<<";"<<endl<<endl;
			
			$$ = new symbol_info("return "+$2->get_name()+";","stmnt");
	  }
	  ;
	  
expression_statement : SEMICOLON
			{
				outlog<<"At line no: "<<lines<<" expression_statement : SEMICOLON "<<endl<<endl;
				outlog<<";"<<endl<<endl;
				
				$$ = new symbol_info(";","expr_stmt");
	        }			
			| expression SEMICOLON 
			{
				outlog<<"At line no: "<<lines<<" expression_statement : expression SEMICOLON "<<endl<<endl;
				outlog<<$1->get_name()<<";"<<endl<<endl;
				
				$$ = new symbol_info($1->get_name()+";","expr_stmt");
	        }
			;
	  
variable : ID 	
      {
		symbol_info* symbol = new symbol_info($1->get_name(), "ID");
		symbol_info* result = sym_tbl->lookup(symbol);
		if (result == NULL) {
			errlog << "At line no: " << lines << " Undeclared variable " << $1->get_name() << endl << endl;
			errors++;
		}
		else if (result->get_symbol_type() == "Array") {
			errlog << "At line no: " << lines << " variable is of array type: " << $1->get_name() << endl << endl;
			errors++;
			$$ = new symbol_info($1->get_name(),"varbl");
			$$->set_data_type(result->get_data_type());
		}
		else {
			$$ = new symbol_info($1->get_name(),"varbl");
			$$->set_data_type(result->get_data_type());

		}
	    outlog<<"At line no: "<<lines<<" variable : ID "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
			
		
		
	 }	
	 | ID LTHIRD expression RTHIRD 
	 {
		symbol_info* symbol = new symbol_info($1->get_name(), "ID");
		symbol_info* result = sym_tbl->lookup(symbol);
		if (result == NULL) {
			errlog << "At line no: " << lines << " Undeclared variable " << $3->get_name() << endl << endl;
			errors++;
		}
		else if (result->get_symbol_type() != "Array") {
			errlog << "At line no: " << lines << " variable is not of array type: " << $1->get_name() << endl << endl;
			errors++;
			$$ = new symbol_info($1->get_name()+"["+$3->get_name()+"]","varbl");
			$$->set_data_type(result->get_data_type());
		}
		else if ($3->get_data_type() != "int") {
			errlog << "At line no: " << lines << " array index is not of integer type: " << $1->get_name() << endl << endl;
			errors++;
			$$ = new symbol_info($1->get_name()+"["+$3->get_name()+"]","varbl");
			$$->set_data_type(result->get_data_type());
		}
		else {
			$$ = new symbol_info($1->get_name(),"varbl");
			$$->set_data_type(result->get_data_type());

		}
	 	outlog<<"At line no: "<<lines<<" variable : ID LTHIRD expression RTHIRD "<<endl<<endl;
		outlog<<$1->get_name()<<"["<<$3->get_name()<<"]"<<endl<<endl;
		
		
	 }
	 ;
	 
expression : logic_expression
	   {
	    	outlog<<"At line no: "<<lines<<" expression : logic_expression "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"expr");
			$$->set_data_type($1->get_data_type());
	   }
	   | variable ASSIGNOP logic_expression 	
	   {
			if ($1->get_data_type() == "int" && $3->get_data_type() == "float") {
				errlog << "At line no: " << lines << " Warning: Assignment of float value into variable of integer type "  << endl  << endl;
				errors++;
			}
	    	outlog<<"At line no: "<<lines<<" expression : variable ASSIGNOP logic_expression "<<endl<<endl;
			outlog<<$1->get_name()<<"="<<$3->get_name()<<endl<<endl;

			$$ = new symbol_info($1->get_name()+"="+$3->get_name(),"expr");
			$$->set_data_type($3->get_data_type());
	   }
	   ;
			
logic_expression : rel_expression
	     {
	    	outlog<<"At line no: "<<lines<<" logic_expression : rel_expression "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"lgc_expr");
			$$->set_data_type($1->get_data_type());
	     }	
		 | rel_expression LOGICOP rel_expression 
		 {
	    	outlog<<"At line no: "<<lines<<" logic_expression : rel_expression LOGICOP rel_expression "<<endl<<endl;
			outlog<<$1->get_name()<<$2->get_name()<<$3->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+$2->get_name()+$3->get_name(),"lgc_expr");
	     }	
		 ;
			
rel_expression	: simple_expression
		{
	    	outlog<<"At line no: "<<lines<<" rel_expression : simple_expression "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"rel_expr");
			$$->set_data_type($1->get_data_type());
	    }
		| simple_expression RELOP simple_expression
		{
	    	outlog<<"At line no: "<<lines<<" rel_expression : simple_expression RELOP simple_expression "<<endl<<endl;
			outlog<<$1->get_name()<<$2->get_name()<<$3->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+$2->get_name()+$3->get_name(),"rel_expr");
	    }
		;
				
simple_expression : term
          {
	    	outlog<<"At line no: "<<lines<<" simple_expression : term "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"simp_expr");
			$$->set_data_type($1->get_data_type());
			
	      }
		  | simple_expression ADDOP term 
		  {
	    	outlog<<"At line no: "<<lines<<" simple_expression : simple_expression ADDOP term "<<endl<<endl;
			outlog<<$1->get_name()<<$2->get_name()<<$3->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+$2->get_name()+$3->get_name(),"simp_expr");
	      }
		  ;
					
term :	unary_expression //term can be void because of un_expr->factor
     {
	    	outlog<<"At line no: "<<lines<<" term : unary_expression "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"term");
			$$->set_data_type($1->get_data_type());
			
	 }
     |  term MULOP unary_expression
     {
	    	outlog<<"At line no: "<<lines<<" term : term MULOP unary_expression "<<endl<<endl;
			outlog<<$1->get_name()<<$2->get_name()<<$3->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+$2->get_name()+$3->get_name(),"term");
			
	 }
     ;

unary_expression : ADDOP unary_expression  // un_expr can be void because of factor
		 {
	    	outlog<<"At line no: "<<lines<<" unary_expression : ADDOP unary_expression "<<endl<<endl;
			outlog<<$1->get_name()<<$2->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name()+$2->get_name(),"un_expr");
	     }
		 | NOT unary_expression 
		 {
	    	outlog<<"At line no: "<<lines<<" unary_expression : NOT unary_expression "<<endl<<endl;
			outlog<<"!"<<$2->get_name()<<endl<<endl;
			
			$$ = new symbol_info("!"+$2->get_name(),"un_expr");
	     }
		 | factor 
		 {
	    	outlog<<"At line no: "<<lines<<" unary_expression : factor "<<endl<<endl;
			outlog<<$1->get_name()<<endl<<endl;
			
			$$ = new symbol_info($1->get_name(),"un_expr");
			$$->set_data_type($1->get_data_type());
	     }
		 ;
	
factor	: variable
    {
	    outlog<<"At line no: "<<lines<<" factor : variable "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
			
		$$ = new symbol_info($1->get_name(),"fctr");
		$$->set_data_type($1->get_data_type());
	}
	| ID LPAREN argument_list RPAREN
	{
		symbol_info* symbol = new symbol_info($1->get_name(), "ID");
		symbol_info* result = sym_tbl->lookup(symbol);
		if (result == NULL) {
			errlog << "At line no: " << lines << " Undeclared function: " << $1->get_name() << endl << endl;
			errors++;
		}
		else {
			std::vector<std::string> arg_types = result->get_parameter_types();
			std::vector<std::string> args = split($3->get_name(), ",");
			if (arg_types.size() != args.size()) {
				errlog << "At line no: " << lines << " Inconsistencies in number of arguments in function call: " << $1->get_name() << endl << endl;
				errors++;
			}
			else {
				for (int i = 0; i < arg_types.size(); i++) {
					if (arg_types[i] == "int") {
						symbol_info* sym = new symbol_info(args[i], "ID");
						symbol_info* res = sym_tbl->lookup(sym);
						if (res == NULL) {
							if (std::atoi(args[i].c_str()) == 0 && args[i] != "0") {
								errlog << "At line no: " << lines << " argument " << i + 1 << " type mismatch in function call: " << $1->get_name() << endl << endl;
								errors++;
							}
							else {
								if (std::atoi(args[i].c_str()) != std::atof(args[i].c_str())) {
									errlog << "At line no: " << lines << " argument " << i + 1 << " type mismatch in function call: " << $1->get_name() << endl << endl;
									errors++;
								}
							}
						}
					}
					else if (arg_types[i] == "float") {
						symbol_info* sym = new symbol_info(args[i], "ID");
						symbol_info* res = sym_tbl->lookup(sym);
						if (res == NULL) {
							if (std::atof(args[i].c_str()) == 0 && args[i] != "0") {
								errlog << "At line no: " << lines << " argument " << i + 1 << " type mismatch in function call: " << $1->get_name() << endl << endl;
								errors++;
							}
						}
					}
				}
			}
		}
	    outlog<<"At line no: "<<lines<<" factor : ID LPAREN argument_list RPAREN "<<endl<<endl;
		outlog<<$1->get_name()<<"("<<$3->get_name()<<")"<<endl<<endl;

		


		$$ = new symbol_info($1->get_name()+"("+$3->get_name()+")","fctr");
		$$->set_data_type($1->get_return_type());
	}
	| LPAREN expression RPAREN
	{
	   	outlog<<"At line no: "<<lines<<" factor : LPAREN expression RPAREN "<<endl<<endl;
		outlog<<"("<<$2->get_name()<<")"<<endl<<endl;
		
		$$ = new symbol_info("("+$2->get_name()+")","fctr");
		$$->set_data_type($2->get_data_type());
	}
	| CONST_INT 
	{
	    outlog<<"At line no: "<<lines<<" factor : CONST_INT "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
			
		$$ = new symbol_info($1->get_name(),"fctr");
		$$->set_data_type($1->get_data_type());
	}
	| CONST_FLOAT
	{
	    outlog<<"At line no: "<<lines<<" factor : CONST_FLOAT "<<endl<<endl;
		outlog<<$1->get_name()<<endl<<endl;
			
		$$ = new symbol_info($1->get_name(),"fctr");
		$$->set_data_type($1->get_data_type());
	}
	| variable INCOP 
	{
	    outlog<<"At line no: "<<lines<<" factor : variable INCOP "<<endl<<endl;
		outlog<<$1->get_name()<<"++"<<endl<<endl;
			
		$$ = new symbol_info($1->get_name()+"++","fctr");
		$$->set_data_type($1->get_data_type());
	}
	| variable DECOP
	{
	    outlog<<"At line no: "<<lines<<" factor : variable DECOP "<<endl<<endl;
		outlog<<$1->get_name()<<"--"<<endl<<endl;
			
		$$ = new symbol_info($1->get_name()+"--","fctr");
		$$->set_data_type($1->get_data_type());
	}
	;
	
argument_list : arguments
			  {
					outlog<<"At line no: "<<lines<<" argument_list : arguments "<<endl<<endl;
					outlog<<$1->get_name()<<endl<<endl;
						
					$$ = new symbol_info($1->get_name(),"arg_list");
			  }
			  |
			  {
					outlog<<"At line no: "<<lines<<" argument_list :  "<<endl<<endl;
					outlog<<""<<endl<<endl;
						
					$$ = new symbol_info("","arg_list");
			  }
			  ;
	
arguments : arguments COMMA logic_expression
		  {
				outlog<<"At line no: "<<lines<<" arguments : arguments COMMA logic_expression "<<endl<<endl;
				outlog<<$1->get_name()<<","<<$3->get_name()<<endl<<endl;
						
				$$ = new symbol_info($1->get_name()+","+$3->get_name(),"arg");
		  }
	      | logic_expression
	      {
				outlog<<"At line no: "<<lines<<" arguments : logic_expression "<<endl<<endl;
				outlog<<$1->get_name()<<endl<<endl;
						
				$$ = new symbol_info($1->get_name(),"arg");
		  }
	      ;
 

%%

int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
		cout<<"Please input file name"<<endl;
		return 0;
	}
	yyin = fopen(argv[1], "r");
	outlog.open("22141027_log.txt", ios::trunc);
	errlog.open("22141027_error.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
	// Enter the global or the first scope here
	sym_tbl = new symbol_table(10, &outlog);
	sym_tbl->enter_scope();
	yyparse();
	
	outlog<<endl<<"Total lines: "<<lines<<endl;
	outlog << endl << "Total errors: " << errors << endl;
	
	outlog.close();
	
	errlog << endl << "Total errors: " << errors << endl;
	errlog.close();

	fclose(yyin);
	delete sym_tbl;
	return 0;
}