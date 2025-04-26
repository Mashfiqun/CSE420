#include "symbol_info.h"
using namespace std;
class scope_table
{
private:
    int bucket_count;
    int unique_id;
    scope_table *parent_scope = NULL;
    vector<list<symbol_info *>> table;

    int hash_function(string name)
    {
        int hash, sum = 0;
        for (char c : name)
        {
            sum += static_cast<int>(c);
        }
        hash = sum % bucket_count;
        return hash;
    }

public:
    scope_table();
    scope_table(int bucket_count, int unique_id, scope_table *parent_scope);
    scope_table *get_parent_scope();
    int get_unique_id();
    symbol_info *lookup_in_scope(symbol_info *symbol);
    bool insert_in_scope(symbol_info *symbol);
    bool delete_from_scope(symbol_info *symbol);
    void print_scope_table(ofstream &outlog);
    ~scope_table();

    // you can add more methods if you need
};

scope_table::scope_table() {}

scope_table::scope_table(int bucket_count, int unique_id, scope_table *parent_scope)
{
    this->bucket_count = bucket_count;
    this->unique_id = unique_id;
    this->parent_scope = parent_scope;
    table.resize(bucket_count);
}

scope_table *scope_table::get_parent_scope()
{
    return parent_scope;
}

int scope_table::get_unique_id()
{
    return unique_id;
}

symbol_info *scope_table::lookup_in_scope(symbol_info *symbol)
{
    string name = symbol->get_name();
    int index = hash_function(name);
    for (symbol_info *sym : table[index])
    {
        if (sym->get_name() == symbol->get_name())
            return sym;
    }
    return nullptr;
}

bool scope_table::insert_in_scope(symbol_info *symbol)
{
    if (lookup_in_scope(symbol) != nullptr)
        return false;
    int index = hash_function(symbol->get_name());
    table[index].push_back(symbol);
    return true;
}

bool scope_table::delete_from_scope(symbol_info *symbol)
{
    string name = symbol->get_name();
    int idx = hash_function(name);
    for (auto it = table[idx].begin(); it != table[idx].end(); ++it)
    {
        if ((*it)->get_name() == name)
        {
            table[idx].erase(it);
            return true;
        }
    }
    return false;
}

// complete the methods of scope_table class
void scope_table::print_scope_table(ofstream &outlog)
{
    // outlog << "ScopeTable # " + to_string(unique_id) << endl;
    outlog << "ScopeTable # " << to_string(unique_id) << endl;
    // iterate through the current scope table and print the symbols and all relevant information
    for (int i = 0; i < bucket_count; i++)
    {
        if (!table[i].empty())
        {
            outlog << i << " --> " << endl;

            for (symbol_info *symbol : table[i])
            {
                string name = symbol->get_name();
                if (name.find('[') != std::string::npos && name.find(']') != std::string::npos)
                {
                    continue;
                }
                outlog << "< " << name << " : " << "ID >" << endl;

                if (symbol->get_symbol_type() == "function_definition")
                {
                    outlog << "Function Definition" << endl;
                    outlog << "Return Type: " << symbol->get_return_type() << endl;
                    outlog << "Number of Parameters: " << symbol->get_parameter_names().size() << endl;
                    outlog << "Parameter Details: ";
                    for (int j = 0; j < symbol->get_parameter_names().size(); j++)
                    {
                        if (j == symbol->get_parameter_names().size() - 1)
                        {
                            outlog << symbol->get_parameter_types()[j] << " " << symbol->get_parameter_names()[j] << endl;
                            break;
                        }
                        outlog << symbol->get_parameter_types()[j] << " " << symbol->get_parameter_names()[j] << ", ";
                    }
                }
                else if (symbol->get_array_size() > 0)
                {
                    outlog << "Array\n"
                           << "Type: " << symbol->get_type() << endl;
                    outlog << "Size: " << symbol->get_array_size() << endl;
                }
                else
                {
                    outlog << symbol->get_symbol_type() << endl;
                    outlog << "Type: " << symbol->get_data_type() << endl;
                    if (symbol->get_symbol_type() == "Array")
                    {
                        outlog << "Size: " << symbol->get_array_size() << endl;
                    }
                }
            }
            outlog << endl;
        }
    }
}

scope_table::~scope_table()
{
    for (int i = 0; i < bucket_count; ++i)
    {
        for (symbol_info *sym : table[i])
        {
            delete sym;
        }
    }
}