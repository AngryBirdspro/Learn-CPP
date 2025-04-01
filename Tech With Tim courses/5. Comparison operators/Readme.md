# Introduction to comparison operators
Comparison operators are operators that compare 2 or more values or statements and return true or false based on the context of the values or statements

## Boolean logics and their numeric values
By default, C++ returns boolean values according to their numeric form, but that can be changes by using a function exclusive to the iomanip (input/output manipulator) to command C++ to directly return the boolean instead of its numeric value

## Comparing characters
In mathematics, the lexicographical order is a generalization of the alphabetical order of the dictionaries to sequences of ordered symbols or, more generally, of elements or a totally ordered set

# ASCII
## How characters are compared according to the ASCII Table
ASCII, (American Standard Code of Information Interchange), is a character encoding standard for electronic communication. ASCII codes represent text in computers, telecommunications equipment, and other devices. Most modern character encoding schemes are based on ASCII. Although they support many additional characters. Every character you can type on a keyboard has a numeric representation in the ASCII table meaning when they are compared using the comparison operators, what's actually being compared is their numeric value according to the ASCII Table. 

## How strings are compared according to the ASCII Table (EACH ARE ORDERED ACCORDING TO THE PRIORITY C++ USES)
**Character-by-Character Comparison:**
The comparison begins with the first character of each string. Each character's ASCII value is evaluated.

**ASCII Value Comparison:**
If the ASCII values of the characters are different, the comparison determines which string is "greater" based on the ASCII value of the first differing character. For example, if the first string has a character with an ASCII value of 97 (for 'a') and the second string has a character with an ASCII value of 98 (for 'b'), then the first string is considered less than the second.

**Length Consideration:**
If all characters in the shorter string match the characters of the longer string, the shorter string is considered "less than" the longer string. For example, "cat" < "catalog" because "cat" matches completely and is shorter.

**Exhaustion of Characters:**
The comparison stops as soon as a difference is found, or when the end of one string is reached.

**Equality Check:**
If both strings are identical in length and character values, they are considered equal.
