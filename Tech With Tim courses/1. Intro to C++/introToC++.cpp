// This is a single line comment, it's the same way as C# and JavaScript
/*
This is a double line comment;
anything between the astrixes sandwhiched between the forward slashes are declared as comments
*/

/*
"include <iostream" tells compiler to include all the code within this file when compiling it into binary, iostream
is an abreviation for "input/output stream"
*/
#include <iostream>
/*
a namespace is a declarative region that provides a scope to the identifiers such as variables, functions ect. they are used to
organize code and prevent name conflicts especially in large projects where different libraries might define the same identifiers

The Standard Library in C++ is enclosed in the std namespace. This includes common functionalities like input/output (cin, cout), 
data structures (vector, string), algorithms and much more

example of code without "using namespace std;":
std::cout << "Hello, World!" << std::end1
std::string name = "Message"
*/
using namespace std;
int main()
{
    cout << "Hello World!\n";
    cout << "I'm Tom!";
    // A return statement is not required, but since it's being used here and this function type is an int, the returned value must 
    // be an integer (can be any value)
    return 0;
} 