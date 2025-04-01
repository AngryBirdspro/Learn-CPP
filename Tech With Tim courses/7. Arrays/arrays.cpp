#include <iostream>
#include <string>
using namespace std;

// An array is a list type in C++, C, and C#. They cannot be modified unlike a regular list and are enclosed 
// with {} although their element value can be modified and altered unlike a tuple which cannot be modified at all

// int arr[5] = {1, 2, 3, 4, 5}
// You don't need to put the amount of elements in the square brackets since C++ can infer the amount of elements declared in an array
// itself and the = in the line of code above is actually not neededs
// If the elements are left not declared, the elements must be specified in the square brackets

/*
If you directly cout "arr", it will give you a bunch of random gibberish. This is because when the array is defined, the elements are stored 
in a random location within the memory of the computer. The gibberish given in the terminal is actually the storage unit (memory location)
and is called a hexadecimal
*/

// If the elements within an array are not defined and are printed in the terminal, a random value will be printed even if you print a value
// beyond the value the array is set to meaning C++ will still print whatever random value it managed to pull out at the time it was told
// to write output in the terminal

// After you declare an array as for example int arr[x] you cannot assign the array with an initializer list after that

// sizeof() gives the size of the array in bytes, not to be confused witht the element count of the array

int main()
{
    // Each declared array with different values and data types
    int arr[] = {1, 2, 3, 4, 5};
    float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    string arr3[] = {"Tom", "Jia"};
    char arr4[] = {'a', 'b', 'c', 'd', 'e'};
    int arr5[5];
    float arr6[5];
    string arr7[2];
    char arr8[5];

    // Printing the size of each array measured in bytes
    cout << sizeof(arr) << endl;
    cout << sizeof(arr2) << endl;
    cout << sizeof(arr3) << endl;
    cout << sizeof(arr4) << endl;
    cout << sizeof(arr5) << endl;
    cout << sizeof(arr6) << endl;
    cout << sizeof(arr7) << endl;
    cout << sizeof(arr8) << endl;

    // Printing the memory location of each array
    cout << arr << endl;
    cout << arr2 << endl;
    cout << arr3 << endl;
    cout << arr4 << endl;
    cout << arr5 << endl;
    cout << arr6 << endl;
    cout << arr7 << endl;
    cout << arr8 << endl;

    // Printing one element of each array
    cout << arr[0] << endl;
    cout << arr2[2] << endl;
    cout << arr3[1] << endl;
    cout << arr4[3] << endl;
    cout << arr5[0] << endl;
    cout << arr6[1] << endl;
    cout << arr7[2] << endl;
    cout << arr8[3] << endl;

    // Printing out the first element of each array after it has been changed
    arr[0] = 2;
    arr2[0] = 1.2;
    arr3[0] = "Keon";
    arr4[0] = '?';
    cout << arr[0] << endl;
    cout << arr2[0] << endl;
    cout << arr3[0] << endl;
    cout << arr4[0] << endl;
    arr5[0] = 2;
    arr6[0] = 1.2;
    arr7[0] = "Keon";
    arr8[0] = '?';
    cout << arr5[0] << endl;
    cout << arr6[0] << endl;
    cout << arr7[0] << endl;
    cout << arr8[0] << endl;

    return 0;
}
