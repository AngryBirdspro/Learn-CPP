#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number: ";
    cin >> x;
    if (x > 50)
    {
        cout << x << " is greater than 50" << endl;
    }
    else if (x == 50)
    {
        cout << "You entered 50" << endl;
    }
    
    else
    {
        cout << x << " is less than 50" << endl;
    }
    switch (x)
    {
        case 50:
            cout << "You entered 50";
            break;
        default:
            cout << "This number is not 50";
            break;
    }
}