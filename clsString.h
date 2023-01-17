#pragma once
#include <iostream>
using namespace std;

class clsString
{
    
private:
    string _value;
public:
    clsString()
    {
        _value="";
    }
    clsString(string value)
    {
        _value=value;
    }
    void set_value(string value)
    {
        _value=value;
    }
    string get_value()
    {
        return _value;
    }
    __declspec(property(get = GetValue, put = SetValue)) string Value; 

};