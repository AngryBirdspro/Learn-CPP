#include <iostream>
#include <string>
using namespace std;
// An undeclared variable will return a random value
// If the console is assigning an expression into a string, any characters within the phrase can be combined and set into a string

int main()
{
    int v;
    float w;
    string x;
    char y;
    bool z;

    cout << "Enter an integer: ";
    cin >> v;
    cout << "The integer you typed was: " << v << endl;

    cout << "Enter a float (decimal number): ";
    cin >> w;
    cout << "The float (decimal number) you typed was: " << w << endl;

    cout << "Enter a string: ";
    cin >> x;
    cout << "The string you typed was: " << x << endl;

    cout << "Enter a character (char): ";
    cin >> y;
    cout << "The character you typed was: " << y << endl;
    
    cout << "Enter a boolean value: ";
    cin >> z;
    cout << "The boolean value you entered was: " << z << endl;
}