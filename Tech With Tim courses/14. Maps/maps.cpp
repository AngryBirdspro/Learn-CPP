#include <iostream>
#include <map>
#include <string>
using namespace std;


/*
A C++ map serves the same purpose as a Python dictionary. Unlike the structure of an array or tuple, a certain value can be accessed according to its unique key, regardless of things like its index meaning
working with its iterations require the knowledge of the pairs not the order since C++ doesn't even store the order of pairs in a map
*/

// Attempting to access an undeclared pair will not give an error but will return 0 since it isn't declared. C++ believs the undeclared mpa theoretically can exist due to the default value being 0

int main()
{
    map<char, int> mp
    {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };
    cout << mp['T'] << endl;
    cout << mp['S'] << endl;
    cout << mp['a'] << endl;

    // Way 1 of inserting a pair into a map
    mp['o'] = 98;
    cout << mp['o']<< endl;

    // Way 2 of inserting a pair into a map
    mp.insert(pair<char, int>('j', 5));
    cout << mp['j'] << endl;

    // Way 3 of inserting a pair into a map
    pair<char, int> p1('p', 9);
    mp.insert(p1);
    cout << mp['p'] << endl;

    // You can view the 1st or 2nd properties of a pair in the map
    cout << p1.first << endl;
    cout << p1.second << endl;

    // When a collection data type (a data type with more than 1 element) is sued with a for loop, the iterator loops through the list until a statement is met because you can't set a up a for loop that
    // counts up to a certain index like a map
    // .begin() has access to the first pair in the map and gives you an iterator object. What that means is that the iterator will continuosly loops itself throught each pair contained in a map until
    // a statement is met
    // .end() is the last pair stored in a map and once the loop has gone trhough every pair in the map, the iterator object is now the end of the map or the last pair of the map
    // "(*itr).first" can also be written as "itr->first"
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        // The iterator must be dereferenced first into the object otherwise it is still a pointer
        cout << (*itr).first << endl;
        cout << (*itr).second << endl;
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << endl;
        cout << itr->second << endl;
    }

    // How to erase a pair from a map
    mp.erase(p1.first);
    cout << mp['p'] << endl;

    // map.empty() will return a boolean value depending on if a map is/not empty
    cout << mp.empty() << endl;

    // map.size() will return the number of pairs in a map
    cout << mp.size() << endl;

    // How to clear a map
    mp.clear();

    // map.empty() will return a boolean value depending on if a map is/not empty
    cout << mp.empty() << endl;

    // map.size() will return the number of pairs in a map
    cout << mp.size() << endl;
}