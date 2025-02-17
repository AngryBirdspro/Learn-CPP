#include <iostream>
#include <string>
using namespace std;

/*
int x = 1;
int &y = x;

This code basically means that if y is modified, x is also modified unlike if it was jsut int y = x which would simpply copy what x is so
far into y and is called an alias. x and y here are not seperate values but rather 2 combined values. Putting an ampersand before a value
simply means accessing its memory location
*/

// Like with printing the hexadecimal of the location of an array, you can also do the same with a reference

// In C++, variable values cannot be initialized as null

int main()
{
    // If variables are referenced
    int x = 1;
    int &y = x;
    y = 0;
    cout << x << endl;
    cout << y << endl;

    // If variables are not referenced
    int a = 1;
    int b = b;
    b = 0;
    cout << a << endl;
    cout << b << endl;

    // Printing the hexadecimal location of the references
    cout << &x << endl << &y << endl << &a << endl << &b;
}