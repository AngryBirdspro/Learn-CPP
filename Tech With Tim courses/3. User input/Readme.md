# Introduction to inputs
## Character input
<cin> (character input) is a function in C++ that allows input from the user in the terminal and the ">>" after that is called the
stream extraction operator and will accept and extract input from the user and then convert the input accordingly into a variable
depending on the type.

## Boolean logic to detect errors from user input
"cout << cin.fail()" will return a boolean statement in the terminal to determine if there is an error with the input from the user

## Clear previous incorrect input from user
_cin.clear()_ is a funciton used to clear the error state flags of the input stream. When an error occurs during an input operation, 
such as when the input does not match the expected format, the stream enters a fail state, which prevents further input operations 
until the state is cleared.

## Ignore previous input from user
_cin.ignore()_ is a funciton used to skip or ignore characters in the input buffer. This is useful for discarding unwanted or 
erroneous input after an input operation has failed or when you need to clear the input buffer before reading new data. An
example is "cin.ignore(1000, '\n')". The first argument is the number of characters that will be ignored while the second
argument can be a character ("\n" is one of them). This function only accpets integers and characters into its 2 arguments

# Example of these functions in use:
```cpp
if (cin.fail())
{
    // Clear the input stream first
    cin.clear();
    // Ignore the input
    cin.ignore(100000, '\n');
    // RUN MORE CODE ACCORDINGLY
}
else
{
    // RUN MORE CODE ACCORDINGLY
}
```