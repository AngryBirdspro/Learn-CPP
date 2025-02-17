#include <iostream>
#include <string>
using namespace std;
// cin.ignore(x); will ignore x amount of characters
// cin.ignore() will only except integers and chars as its 2 arguments
// cin.Clear(); removes the error flag from our console input string but does not remove text typed into the string

int main()
{
    int x, y;
    cout << "Enter the first integer: ";
    cin >> x;
    cout << x << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the second integer: ";
    cin >> y;
    cout << y << endl;
}