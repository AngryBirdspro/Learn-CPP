#include <iostream>

using namespace std;
// cout << cin.fail(); checks if there is an error within the code, if there is, it will return 1, if not then 0

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;
    cout << "Error? " << cin.fail() << endl;
}
