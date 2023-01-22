#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{ 
    clsString mystring;
    mystring.set_value("welcome to my project");
    mystring.append(" my name is Ayman");
    mystring.replace("Ayman","Sarah");
    cout<<mystring.get_value()<<endl;
    system("pause");
    return 0;
}