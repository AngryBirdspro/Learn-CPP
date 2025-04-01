#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello world!";
    cout << str[1] << endl;
    str[1] = '2';
    cout << str[1] << endl;

    // Prints the number of characters in the string
    cout << str.size() << endl;
    cout << str.length() << endl;

    for (int strIndex = 0; strIndex < str.length(); strIndex++)
    {
        cout << str[strIndex] << endl;
    }

    for (int strIndex = 0; strIndex < str.length(); strIndex++)
    {
        str[strIndex] = 'a';
    }
    cout << str;
}
