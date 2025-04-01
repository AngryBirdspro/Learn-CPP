#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    while (x < 20)
    {
        cout << x << endl;
        x++;
    }

    int y;
    while (y != 50)
    {
        cout << "LOOP 1. Type the number 50: ";
        cin >> y;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(MAX_INPUT, '\n');
            cout << "Enter a valid number next time please" << endl;
            return 1;
        }
    }

    int z = -1;
    while (true)
    {
        cout << "LOOP 2. Type the number 50: ";
        cin >> z;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(MAX_INPUT, '\n');
            cout << "Enter a valid number next time please" << endl;
            return 1;
        }
        if (z == 50)
        {
            break;
        }
    }

    do
    {
        int a;
        cout << "LOOP 3. type a number to add to x: ";
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(MAX_INPUT, '\n');
            cout << "Enter a valid number next time please" << endl;
            return 1;
        }
        x += a;
        cout << "x is: " << x << endl;
    } while (x < 10);
}
