#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << cin.fail() << endl;
    cout << "You typed " << x;
    return 0;
}
