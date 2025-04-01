# Introduction to try/catch
_Try/catch_ in C++ is **only** used for handling **runtime** errors (similar to things such as cin.fail()), unlike in languages such as Python where try/catch can be used to handle any errors that could occur instead of just errors. In order for the best usage for try/catch, the library <stdexcept> can be used for handling runtime errors.

# Explenation
## Why C++ doesn not need a complex error handling system
C++ (inclduing C) is a **compiled language**. Syntax errors, type errors, and many semantic errors **are caught at compile time**. The compiler checks for correctness and won't produce an executable Unix Script until all such errors are resolved. A simple mistake like a missing semicolon or mismatched braces will prevent compilation skipping the need for a complex error handling system. 

## In comparison to Python as an example
Contrary to this, languages such as Python require a more complex system regarding error handling since it's an **intepreted language** which means errors **cannot be identified until the line of code is read**. If a syntax error exists in a conditional statement or function definition, it will **only surface when that code is reached during execution** making the need a complex error handling system compulsary and crucial.