#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter an integer: ";
    cin >> num1;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Get your eyes checked" << endl;
    }
    else
    {
        cout << "You typed "<< num1 << endl;
    }

    cout << "Enter the first integer: ";
    cin >> num2;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Now the second integer: ";
    cin >> num3;
    cout << num2 + num3 << " is the total of the 2 integer" << endl;
}
