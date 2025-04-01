# Introduction to arrays
## Arrays
A C++ _array_ is a list type that stores a series of elements  in the order they are placed in that **MUST** be the same data type in a memory location that can be individually referenced by adding an index to a unique identifier. Once an array is declared, the elements can be changed but the amount of elements it contains cannot be changed.

## Declaring an array
Just like singular data types, you must specify what kind of data types it is going to store. The amount of elements does not have to be specified in the brackets after the array because C++ can count them itself. Declaring an array without a list of elements is fine but then the amount of elements needed must be specified. Depending on the array type, if unspecified elements are returned, the value according to the data type will be randomized. Specifically with a string, the randomized value will be an unreadable binary value (similair to a compiled binary script that contains binary code that humans cannot read). Once an array with no specified elements is declared, you cannot assign an initializer list to it directly since the array technicaly already has one meaning it cannot be re-assigned to another initializer list. In order to set the elements of an array with no specified elements, each element must be individually assigned into the required index of the array.

```cpp
// DECLARING ARRAYS 
// Method 1: number of elements specified
int arr1[3] = {1, 2, 3};
float arr2[3] = {1.1, 1.2, 1.3};
string arr3[3] = {"Good", "Evening", "Mate"};
char arr4[3] = {'a', 'b', 'c'};
bool arr5[2] = {true, false};

// Method 2: number of elements unspecified
int arr1[] = {1, 2, 3};
float arr2[] = {1.1, 1.2, 1.3};
string arr3[] = {"Good", "Evening", "Mate"};
char arr4[] = {'a', 'b', 'c'};
bool arr5[] = {true, false};

// SPECIFYING ARRAY INDEX
// Can do
int arr1[5];

// Cannot do
int arr[];

// "EMPTY" ARRAY
// Can do
int arr1[5];
arr[0] = 1;

// Cannot do
int arr1[];
arr1 = {1, 2, 3, 4, 5};
```

## Accessing elements within an array
In order to access elements in an array to for example print them out, you must cout the elements individually (a for/while/do loop can be used) because printing the array itself will return a random hexadeciaml jibberish which is actually the memory location the array has been assigned to within the system. 

## sizeof() function
In C++, you can use sizeof() to get the size of an array measured in bytes, not to be confused of using that to get the number of elements in an array such as using len() on lists, tuples, and dictionaries in Python. Another thing to note, for example, in an integer array, it doesn't matter how big one of the number values are, each element has the same amount of bytes.

## Number of elements in an array formula
Although there is no direct method of viewing the number of elements in an array, there is a formula that can be used to calculate the number of elements: sizeof(array) / sizeof(array[0]). Although this method does have exceptions, it is rarely ever used since the amount of elements in an array cannot be changed anyway meaning simply viewing them from the code is a quicker option.
