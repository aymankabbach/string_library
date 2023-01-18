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
    static short get_number_of_words(string value)
    {
        short words_number=0;
        string delim=" ";
        short pos=0;
        string sword;
        while ((pos = value.find(delim)) != std::string::npos)
        {
            sword=value.substr(0,pos);
            if (sword!="")
            {
                words_number++;
            }
            value.erase(0,pos+delim.length());
        }
        if (value!="")
        {
            words_number++;
        }
        return words_number;
    }
    short get_number_of_words()
    {
        return get_number_of_words(get_value());
    }
};