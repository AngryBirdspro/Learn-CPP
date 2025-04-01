# Introduction to C++
## Input Output Stream
<iostream> (abbreviation for input/output stream) is a C++ library that allows input and output within the console from the user by enabling functions like "cout" and "cin".

## namespace
Inside the <iostream> library, there is a namespace which is a declarative region that provides a scope to the identifiers (the names of types, functions, variables and so on) inside it. Inside iostream there is namespace called "std" (standard) which includes the functions such as cout and cin. Without specifying the namespace std, the std has to be referenced after every function such as cout and cin so C++ knows which namespace cout and cin are referenced from.

## "main" function
A block of code must be declared inside a main function which in this case can be referred to as an entry point and it is compulsory that one is run right after the compiled work is executed in the console. The first entry point must be declared as "int main()" and any code will go in there to execute.

## Character output
"<<" is the string insertion operator. When cout is used, the string insertion operator is written after the function and anything after the string insertion operator is then inserted into the terminal and there can be more than one object inserted into the terminal. 
E.g:
```cpp
cout << "Hello World!"", " << 
cout << "Hello" << " World!"
```
## Methods to creating a new line
In order to go to a new line, "\n" or "endl" can be used.
