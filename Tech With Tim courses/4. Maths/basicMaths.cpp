#include <iostream>

using namespace std;

// C++ includes order of operations

int main()
{
    float x, y;
    cout << "Enter first number: ";
    cin >> x;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter second number: ";
    cin >> y;
    float sum = x + y;
    float difference = x - y;
    float product = x * y;
    float quotient = x / y;
    cout << "The sum of the 2 numbers is: " << sum << endl;
    cout << "The difference of the 2 numbers is: " << difference << endl;
    cout << "The product of the 2 numbers is: " << product << endl;
    cout << "The quotient of the 2 numbers is: " << quotient << endl;
    cout << "The smaller number you typed was: " << min(x, y) << endl;
    cout << "The bigger number you typed was: " << max(x, y) << endl;
}
