#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to myproject");
    mystring.append(" i am a developer");
    mystring.upper_first_letter();
    cout<<"my string is : "<<mystring.get_value()<<endl;
    system("pause");
    return 0;
}