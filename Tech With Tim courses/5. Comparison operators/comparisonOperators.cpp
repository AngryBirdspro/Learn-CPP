#include <iostream>

using namespace std;
// C++ directly returns the value of True (1) and False (0) boolean logic
// It can be proved with something like "bool test 'a' == 'A'" that even with the slightest change withing a character in a string
// can cause a mix up

/*
In mathematics, the lexicographic or lexicographical order is a generalization of the alphabetical order of the dictionaries to sequences
of ordered symbols or, more generally, of elements of a totally ordered set
*/

/*
American Standard Code for Information Interchange (ASCII) is a character encoding standard for electronic communication. ASCII codes
represent test in computers, telecommunications equipment, and other devices. Most modern character-encoding schemes are based on ASCII,
although they support many additional characters. Every character from the keyboard has a numeric representation in the ASCII table meaning
if for example you compared which is bigger/greater than the other between 'a' 'b' you are comparing which ASCII number has the higher value
*/

int main()
{
    bool test1 = 1 < 2;
    bool test2 = 1 > 2;
    bool test3 = 1 <= 1;
    bool test4 = 1 >= 1;
    bool test5 = 1 == 1;
    bool test6 = 1 != 1;
    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;
    cout << test4 << endl;
    cout << test5 << endl;
    cout << test6 << endl;
}
