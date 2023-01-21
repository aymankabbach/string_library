#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to my project");
    mystring.append(" my name is Ayman");
    vector <string> split_string=mystring.split(" ");
    for (string str : split_string)
    {
        cout<<str<<endl;
    }
    system("pause");
    return 0;
}