/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    WHILE = 259,                   /* WHILE  */
    FOR = 260,                     /* FOR  */
    ELSE = 261,                    /* ELSE  */
    BREAK = 262,                   /* BREAK  */
    DO = 263,                      /* DO  */
    INT = 264,                     /* INT  */
    FLOAT = 265,                   /* FLOAT  */
    VOID = 266,                    /* VOID  */
    SWITCH = 267,                  /* SWITCH  */
    DEFAULT = 268,                 /* DEFAULT  */
    GOTO = 269,                    /* GOTO  */
    CHAR = 270,                    /* CHAR  */
    DOUBLE = 271,                  /* DOUBLE  */
    RETURN = 272,                  /* RETURN  */
    CASE = 273,                    /* CASE  */
    CONTINUE = 274,                /* CONTINUE  */
    PRINTF = 275,                  /* PRINTF  */
    CONST_INT = 276,               /* CONST_INT  */
    CONST_FLOAT = 277,             /* CONST_FLOAT  */
    ID = 278,                      /* ID  */
    ADDOP = 279,                   /* ADDOP  */
    MULOP = 280,                   /* MULOP  */
    INCOP = 281,                   /* INCOP  */
    RELOP = 282,                   /* RELOP  */
    ASSIGNOP = 283,                /* ASSIGNOP  */
    LOGICOP = 284,                 /* LOGICOP  */
    NOT = 285,                     /* NOT  */
    LPAREN = 286,                  /* LPAREN  */
    RPAREN = 287,                  /* RPAREN  */
    LCURL = 288,                   /* LCURL  */
    RCURL = 289,                   /* RCURL  */
    LTHIRD = 290,                  /* LTHIRD  */
    RTHIRD = 291,                  /* RTHIRD  */
    SEMICOLON = 292,               /* SEMICOLON  */
    COLON = 293,                   /* COLON  */
    COMMA = 294                    /* COMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define WHILE 259
#define FOR 260
#define ELSE 261
#define BREAK 262
#define DO 263
#define INT 264
#define FLOAT 265
#define VOID 266
#define SWITCH 267
#define DEFAULT 268
#define GOTO 269
#define CHAR 270
#define DOUBLE 271
#define RETURN 272
#define CASE 273
#define CONTINUE 274
#define PRINTF 275
#define CONST_INT 276
#define CONST_FLOAT 277
#define ID 278
#define ADDOP 279
#define MULOP 280
#define INCOP 281
#define RELOP 282
#define ASSIGNOP 283
#define LOGICOP 284
#define NOT 285
#define LPAREN 286
#define RPAREN 287
#define LCURL 288
#define RCURL 289
#define LTHIRD 290
#define RTHIRD 291
#define SEMICOLON 292
#define COLON 293
#define COMMA 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
