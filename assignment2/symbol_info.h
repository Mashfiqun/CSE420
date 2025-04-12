#include <bits/stdc++.h>
using namespace std;

class symbol_info
{
private:
    string name;
    string type;

    // Write necessary attributes to store what type of symbol it is (variable/array/function)
    string symbol_type;
    // Write necessary attributes to store the type/return type of the symbol (int/float/void/...)
    string return_type;
    // Write necessary attributes to store the parameters of a function
    vector<string> parameter_types;
    vector<string> parameter_names;
    // Write necessary attributes to store the array size if the symbol is an array
    int array_size;

public:
    symbol_info(string name, string type)
    {
        this->name = name;
        this->type = type;
    }
    string get_name()
    {
        return name;
    }
    string get_type()
    {
        return type;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_type(string type)
    {
        this->type = type;
    }
    // Write necessary functions to set and get the attributes
    string get_symbol_type()
    {
        return symbol_type;
    }
    string get_return_type()
    {
        return return_type;
    }
    vector<string> get_parameter_names()
    {
        return parameter_names;
    }
    vector<string> get_parameter_types()
    {
        return parameter_types;
    }
    int get_array_size()
    {
        return array_size;
    }
    void set_symbol_type(string symbol_type)
    {
        this->symbol_type = symbol_type;
    }
    void set_return_type(string return_type)
    {
        this->return_type = return_type;
    }
    void add_parameter(string parameter_name, string parameter_type)
    {
        parameter_names.push_back(parameter_name);
        parameter_types.push_back(parameter_type);
    }

    void set_array_size(int array_size)
    {
        this->array_size = array_size;
    }
    void set_parameter_types(const vector<string> &types)
    {
        parameter_types = types;
    }
    void set_parameter_names(const vector<string> &names)
    {
        parameter_names = names;
    }
    ~symbol_info()
    {
        // Write necessary code to deallocate memory, if necessary
    }
};