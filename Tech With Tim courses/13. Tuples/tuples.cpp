#include <iostream>
#include <string>
#include <tuple>
using namespace std;

// A tuple is similair to an array but a difference is that the elements do not need to be the same data type in a tuple
// In "tuple <int, float, string, char, bool>;"" the first element would be an int, the second float and so on

// Tuples are a c11 exclusive library meaning depending on the g++ version, you must specify that library when compiling the code and type
// g++ -std=c++11 -o tuples.sh tuples.cpp to let the compiler know about the non-native library so it can determine how to compile a tuple

int main()
{
    tuple <int, string> person(16, "Tom");
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;
    get<1>(person) = "Keon";
    cout << get<1>(person) << endl;

    tuple <int, char, bool, float> thing;
    thing = make_tuple(88, 'A', false, 7.8);
    for (int tupleIndex = 0; tupleIndex < 4; tupleIndex++)
    {
        switch (tupleIndex) 
        {
            case 0: 
                cout << get<0>(thing) << endl;
                break;
            case 1: 
                cout << get<1>(thing) << endl; 
                break;
            case 2: 
                cout << get<2>(thing) << endl; 
                break;
            case 3: 
                cout << get<3>(thing) << endl; 
                break;
            default: 
                break;
        }
    }

    tuple <int, char, bool, float> thing2;
    for (int tupleIndex = 0; tupleIndex < 4; tupleIndex++)
    {
        switch (tupleIndex) 
        {
            case 0: 
                cout << get<0>(thing2) << endl;
                break;
            case 1: 
                cout << get<1>(thing2) << endl; 
                break;
            case 2: 
                cout << get<2>(thing2) << endl; 
                break;
            case 3: 
                cout << get<3>(thing2) << endl; 
                break;
            default: 
                break;
        }
    }

    tuple <int, string, int> keon(15, "Keon", 2009);
    tuple <int, string, int> tom(16, "Tom", 2008);
    cout << get<0>(tom) << endl;
    cout << get<1>(tom) << endl;
    cout << get<2>(tom) << endl;
    cout << get<0>(keon) << endl;
    cout << get<1>(keon) << endl;
    cout << get<2>(keon) << endl;
    // In order to swap tuples, they must have the same values and data types contained within them
    tom.swap(keon);
    cout << get<0>(tom) << endl;
    cout << get<1>(tom) << endl;
    cout << get<2>(tom) << endl;
    cout << get<0>(keon) << endl;
    cout << get<1>(keon) << endl;
    cout << get<2>(keon) << endl;

    // The tie statement decomposes a tuple and assigned its values accordingly to variables
    int age, birthYear;
    string name;
    tie(age, name, birthYear) = tom;
    cout << age << endl;
    cout << name << endl;
    cout << birthYear << endl;

    //To concatenate 2 tuples means to combine them together. You must specify the kind of tuple it is or add the keyword auto in front of the tuple so C++ will automatically determine the tuple kind
    tuple <int, string, int, int, string, int> tomAndKeon = tuple_cat(tom, keon);
    auto keonAndTom = tuple_cat(keon, tom);
    cout << get<0>(tomAndKeon) << endl;
    cout << get<1>(tomAndKeon) << endl;
    cout << get<2>(tomAndKeon) << endl;
    cout << get<3>(tomAndKeon) << endl;
    cout << get<4>(tomAndKeon) << endl;
    cout << get<5>(tomAndKeon) << endl;
    
    cout << get<0>(keonAndTom) << endl;
    cout << get<1>(keonAndTom) << endl;
    cout << get<2>(keonAndTom) << endl;
    cout << get<3>(keonAndTom) << endl;
    cout << get<4>(keonAndTom) << endl;
    cout << get<5>(keonAndTom) << endl;
}