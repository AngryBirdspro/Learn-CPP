#include <iostream>
#include <string>
using namespace std;

/*
A pointer is a variable that stores the memory address location of some other value meaning that int * x = &y would make C++ store the
memory location of the reference y into x which is the new memory location so when you type &x it will give you the memory location used to 
store the memory location of the reference y

Pointer arithematics can be done which is adding/subtracting 1 from a pointer. If modifications are needed for the value of the pointer, a
process called de-referencingis used. De-referencing a pointer first gives us the memory location stored in it meaning it will return teh value
stored in its assigned memory location
*/
// A reference simply points at the same box

int main()
{
    //USING POINTERS WITH ARRAYS
    int x = 1;
    int &y = x;
    y = 0;

    cout << x << endl;
    cout << y << endl;

    int * z = &y;
    
    // Printing the memory location contained in z
    cout << z << endl;
    // Printing the value stored in the memory location assinged to z
    cout << *z << endl;
    // Printing the memory location of z itself
    cout << &z << endl;

    // USING POINTERS WITH ARRAYS
    // Writing something like int *b = a; doesn't require the ampersand since it automatically returns the memory of the first element
    // within the array

    // When using a pointer with an array

    int a[] = {1, 2, 3};
    int *b = a;
    int *c= &a[2];
    for (int d = 0; d < 3; d++)
    {
        c = a + d;

        // Printing out the memory location of the assigned pointer
        cout << c << endl;

        // Printing out the element contained within the memory location the pointer is assigned to
        cout << *c << endl;
    }
}