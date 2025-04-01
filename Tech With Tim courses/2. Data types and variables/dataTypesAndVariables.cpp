#include <iostream>
// Must manually include string library into a file in C++
#include <string>
using namespace std;
/*
The basic data types are int, float, bool, string, 
char (a single character unlike a string which can contain anything within only single quotation marks)
*/
// Constants (const) are a variable that cannot be modified
int main()
{
    int v = 45;
    float w = 0.3;
    string x = "Hello world!";
    char y = 'A';
    bool z = true;
    cout << v << endl;
    cout << w << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}
