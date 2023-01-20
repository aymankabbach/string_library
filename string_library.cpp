#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("Welcome to my Project");
    mystring.append(" my name is Ayman");
    mystring.reverse_cases();
    cout<<"my string is : "<<mystring.get_value()<<endl;
    mystring.reverse_cases();
    cout<<"my string is : "<<mystring.get_value()<<endl;
    system("pause");
    return 0;
}