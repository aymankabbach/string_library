#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to myproject");
    cout<<mystring.get_the_length()<<endl;
    cout<<clsString::get_the_length("I am a developer")<<endl;
    system("pause");
    return 0;
}