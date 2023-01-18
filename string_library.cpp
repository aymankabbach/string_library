#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to myproject");
    mystring.append(" i am a developer");
    cout<<"my string is : "<<mystring.get_value()<<endl;
    cout<<"number of words are : "<<mystring.get_number_of_words()<<endl;
    cout<<"length is : "<<mystring.get_the_length()<<endl;
    system("pause");
    return 0;
}