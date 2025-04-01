#include <iostream>
using namespace std;

// A for loop is a repitition control structure that allows you to effeciently write a loop that needs to be executed a certain amount of 
// times

/*
Code included in the brackets of a for keyword is called the iterator. An iterator is a variable that keeps track of what iteration in the
loop you are in which simply means that the loop is keeping track of which step it is on
*/

int main()
{
    float arr[] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    float arr2[5];
    float arr3[5];

    // A basic for loop
    for (int x = 0; x < 10; x++)
    {
        cout << x << endl;
    }

    // A for loop that only prints numbers divisible by 2
    for (int y = 0; y < 10; y++)
    {
        if (y % 2 == 0)
        {
            cout << y << endl;
        }
    }

    // A for loop that ignores numbers divisible by 2
    for (int y = 0; y < 10; y++)
    {
        if (y % 2 == 0)
        {
            continue;
        }
        cout << y << endl;
    }

    // Prints out each element in the array arr in order
    for (int z = 0; z < sizeof(arr)/sizeof(arr[0]); z++)
    {
        cout << arr[z] << endl;
    }

    // Adding elements into the array arr2
    for (int a = 0; a < sizeof(arr2)/sizeof(arr2[0]); a++)
    {
        arr2[a] = a;
    }
    // Printing the newely added elements into arr2
    for (int a = 0; a < sizeof(arr2)/sizeof(arr2[0]); a++)
    {
        cout << arr2[a] << endl;
    }

    // Prints each randomly assigned value of arr3
    for (int a = 0; a < sizeof(arr3)/sizeof(arr3[0]); a++)
    {
        cout << arr3[a] << endl;
    }
}
