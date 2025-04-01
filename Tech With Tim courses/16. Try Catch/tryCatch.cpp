#include <iostream>
#include <stdexcept>
using namespace std;

// cerr means character error and is used to display errors. Unlike cout, it uses the stderr instead of stdout. It can be deterred from
// regular output and isn't buffed meaning it will print without delay.

int main()
{
    try
    {
        int x = 10;
        int y = 0;
        if (y == 0)
        {
            throw runtime_error("Cannot divide by zero!");
        }
        int z = x/y;
        cout << z << endl;
    }
    catch (const exception& e)
    {
        cerr << e.what() << '\n';
    }
}
