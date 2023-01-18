#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to myproject");
    cout<<mystring.get_number_of_words()<<endl;
    cout<<clsString::get_number_of_words("I am a developer")<<endl;
    system("pause");
    return 0;
}