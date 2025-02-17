#include <iostream>
#include <math.h>
// C++ STANDARD LIBRARY
#include <cstdlib>
// Input/Output Manipulate LIBRARY
#include <iomanip>
using namespace std;
int main()
{
    // MAIN
    float x, y, z;
    int choice;
    int choice2;
    int DEGORRAD;
    int decimalPlaces;

    cout << 
"Pick a choice:\n\
1: square root a number\n\
2: cube root a number\n\
3: x√y\n\
4: x^y\n\
5: √(x^2 + y^2)\n\
6: absolute value of a number\n\
7: remainder of 2 numbers\n\
8: sine\n\
9: cosine\n\
10: tangent\n\
11: inverse sine\n\
12: inverse cosine\n\
13: inverse tangent\n\
14: Angle in polar coordinates\n\
15: hyperbolic sine\n\
16: hyperbolic cosine\n\
17: hyperbolic tangent\n\
18: e^x\n\
19: 2^x\n\
20: logx(y)\n\
21: log_e(x)\n\
22: log10(x)\n\
23: log2(x)\n\
24: log(1 + x)\n\
25: e^x - 1\n\
26: Round up a number\n\
27: Round down a number\n\
28: Round to nearest number\n\
29: Truncate decimal\n\
30: Split into integer and fractional parts\n\
31: Positive difference of 2 numbers\n\
32: Bigger value of 2 numbers\n\
33: Smaller value of 2 numbers\n\
34: Error function\n\
35: Complementary error function\n\
36: Gamma function\n\
37: Logarithm of gamma function\n\
38: Check if a number is not real\n\
39: Check if a number is infinite\n\
40: Check if a number is finite\n\
41: Check sign bit (negative)\n\
42: Check if a number is a normal floating point\n\
43: Round a decimal number to desired number of places\n\
44: Print PI\n\
45: Print Euler's Number\n\
Your choice (which number): \n\
";
    cin >> choice;
    if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000000, '\n');
            cout << choice << " was not a viable option. Get your eyes checked." << endl;
            return 1;
        }
    switch (choice)
    {
        // SQUARE ROOT
        case 1:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (sqrt(x) == floor(sqrt(x)))
            {
                cout << sqrt(x) << " is the square root of " << x << "." << endl;
            }
            else
            {
                cout << "Enter how many decimal places you want to round to: ";
                cin >> decimalPlaces;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked." << endl;
                    return 1;
                }
                cout << fixed << setprecision(decimalPlaces) << sqrt(x) << " is the square root of ";
                cout.unsetf(ios_base::fixed);
                cout << x << "." << endl;
            }
            break;

        // CUBE ROOT
        case 2:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (cbrt(x) == floor(cbrt(x)))
            {
                cout << cbrt(x) << " is the cube root of " << x << "." << endl;
            }
            else
            {
                cout << "Enter how many decimal places you want to round to: ";
                cin >> decimalPlaces;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked." << endl;
                    return 1;
                }
                cout << fixed << setprecision(decimalPlaces) << cbrt(x) << " is the cube root of ";
                cout.unsetf(ios_base::fixed);
                cout << x << "." << endl;
            }
            break;

        // x√y
        case 3:
            cout << "Enter base number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter root number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (pow(x, 1 / y) == floor(pow(x, 1 / y)))
            {
                cout << pow(x, 1/y) << " is the " << y << " root of " << x << "." << endl;
            }
            else
            {
                cout << "Enter how many decimal places you want to round to: ";
                cin >> decimalPlaces;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked.";
                    return 1;
                }
                cout << fixed << setprecision(decimalPlaces) << pow(x, 1/y) << " is the ";
                cout.unsetf(ios_base::fixed);
                cout << y << " root of " << x << "." << endl;
            }
            break;

        // x^y
        case 4:
            cout << "Enter base number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter exponent: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (pow(x, y) == floor(pow(x, y)))
            {
                cout << x << " raised to the " << y << " power is " << pow(x, y) << "." << endl;
            }
            else
            {
                cout << "Enter how many decimal places you want to round to: ";
                cin >> decimalPlaces;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked." << endl;
                }
                cout << x << " raised to the " << y << " power is ";
                cout << fixed << setprecision(decimalPlaces) << pow(x, y) << "." << endl;
            }
            break;

        // PYTHAGORA'S THEOROM
        case 5:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (hypot(x, y) == floor(hypot(x, y)))
            {
                cout << x << " squared plus " << y << " squared and rooted is " << hypot(x, y) <<"." << endl;
            }
            else
            {
                cout << "Enter how many decimal places you want to round up to: ";
                cin >> decimalPlaces;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked";
                    return 1;
                }
                cout << x << " squared plus " << y << " squared and rooted is ";
                cout << fixed << setprecision(decimalPlaces) << hypot(x, y) << "." << endl;
            }
            break;

        // ABSOLUTE VALUE
        case 6:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << fabs(x) << " is absolute value of " << x << "." << endl;
            break;

        // REMAINDER
        case 7:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "The remainder of " << x << " and " << y << " is " << fmod(x, y) <<"." << endl;
            break;

        // SINE
        case 8:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Sine " << x << " (DEG) is " << sin(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Sine " << x << " (RAD) is " << sin(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // COSINE
        case 9:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Cosine " << x << " (DEG) is " << cos(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Cosine " << x << " (RAD) is " << cos(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // TANGENT
        case 10:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked" << endl;
                        return 1;
                    }   
                    cout << "Tangent " << x << " (DEG) is " << tan(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Tangent " << x << " (RAD) is " << tan(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // INVERSE SINE
        case 11:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    cout << "Inverse sine " << x << " (DEG) is " << asin(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Inverse sine " << x << " (RAD) is " << asin(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // INVERSE COSINE
        case 12:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Inverse cosine " << x << " (DEG) is " << acos(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Inverse cosine " << x << " (RAD) is " << acos(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // INVERSE TANGENT
        case 13:
            cout << "Type 1 for degrees (DEG) and 2 for radians (RAD): ";
            cin >> DEGORRAD;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid choice, get your eyes checked.";
            }
            switch (DEGORRAD)
            {
                case 1:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Inverse tangent " << x << " (DEG) is " << atan(x * (M_PI / 180)) << "." << endl;
                    break;
                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Inverse tangent " << x << " (RAD) is " << atan(x) << "." << endl;
                    break;
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // POLAR COORDINATES OF 2 ANGLES
        case 14:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Polar coordinates of the angles " << x << " and " << y << " is " << atan2(x, y) << endl;
            break;

        // HYPERBOLIC SINE
        case 15:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Hyperbolic sine " << x << " is " << sinh(x) << "." << endl;
            break;

        // HYPERBOLIC COSINE
        case 16:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Hyperbolic cosine " << x << " is " << cosh(x) << "." << endl;
            break;

        // HYPERBOLIC TANGENT
        case 17:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Hyperbolic tangent " << x << " is " << tanh(x) << "." << endl;
            break;

        // e^x
        case 18:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Euler's number to the power of " << x << " is " << exp(x) << "." << endl;
            break;

        // 2^x
        case 19:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "2 to the power of " << x << " is " << exp2(x) << "." << endl;
            break;

        // log_x(y)
        case 20:
            cout << "Enter base number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Enter number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Log base " << x << " " << y << " is " << log(y) / log(x) << endl;
            break;

        // log_e(x)
        case 21:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Log base Euler's Number " << x << " is " << log(x) << "." << endl;
            break;
        
        // log10(x)
        case 22:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Log base 10 " << x << " is " << log10(x) << "." << endl;
            break;

        // log2(x)
        case 23:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Log base 2 " << x << " is " << log2(x) << "." << endl;
            break;

        // log(1 + x)
        case 24:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Log 1 + " << x << " is " << log1p(x) << "." << endl;
            break;

        // e^x - 1
        case 25:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Euler's number to the power of " << x << " minus 1 is " << expm1(x) << "." << endl;
            break;

        // ROUND UP A NUMBER
        case 26:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << x << " rounded up to the nearest integer is " << ceil(x) << "." << endl;
            break;

        // ROUND DOWN A NUMBER
        case 27:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << x << " rounded down to the nearest integer is " << floor(x) << "." << endl;
            break;

        // ROUND A NUMBER NORMALLY
        case 28:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << x << " rounded down to the nearest integer is " << round(x) << "." << endl;
            break;

        // TRUNCATE DECIMAL
        case 29:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "The decimal place of " << x << " has been removed and is now " << trunc(x) << "." << endl;
            break;

        // SPLIT NUMBER AND ITS DECIMAL INTO FRACTION
        case 30:
            cout << "Enter number: ";
            cin >> x;
            y = modf(x, &z);
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Number: " << x << endl;
            cout << "Integer part: " << z << endl;
            cout << "Fractional part: " << y << endl;
            break;

        // POSITIVE DIFFERENCE OF 2 NUMBERS
        case 31:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "The postitive difference of " << x << " and " << y << " is " << fdim(x, y) << "." << endl;
            break;

        // LARGER VALUE BETWEEN 2 NUMBERS
        case 32:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "The larger number between " << x << " and " << y << " is " << fmax(x, y) << "." << endl;
            break;

        // SMALLER VALUE BETWEEN 2 NUMBERS
        case 33:
            cout << "Enter first number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "Enter second number: ";
            cin >> y;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }   
            cout << "The smaller number between " << x << " and " << y << " is " << fmin(x, y) << "." << endl;
            break;

        // ERROR FUNCTION
        case 34:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "The error function of " << x << " is " << erf(x) << "." << endl;
            break;

        // COMPLIMENTARY ERROR FUNCTION
        case 35:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "The complimentary error function of " << x << " is " << erfc(x) << "." << endl;
            break;

        // GAMMA FUNCTION
        case 36:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "The gamma function of " << x << " is " << tgamma(x) << "." << endl;
            break;

        // LOGARITHM OF ABSOLUTE VALUE OF GAMMA FUNCTION
        case 37:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "The logarithm of the absolute value of the gamma function of " << x << " is " << lgamma(x) << "." << endl;
            break;

        // CHECK IF REAL NUMBER
        case 38:
            cout << 
"Here are some things that could result in an impossible number, choose 1 to test:\n\
1: Even number root negative number ((x % 2 = 0)√(-y))\n\
2: log(x) if x ≤ 0\n\
3: asin(x) if x < -1 or x > 1\n\
4: acos(x) if x < -1 or x > 1\n\
5: x^y if x and y are 0\n\
6: Checking for a remainder between x and 0\n\
";
            cin >> choice2;
            switch (choice2)
            {
                case 1:
                    cout << "Enter base number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter root number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(pow(x, 1 / y)))
                    {
                        cout << y << " root of " << x << " is not a real number."<< endl;
                    }
                    else
                    {
                        cout << x << " root " << y << " is " << pow(x, 1 / y) << ". What you just entered is a real number." << endl;
                    }
                    break;

                case 2:
                    cout << "Enter base number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(log(y) / log(x)))
                    {
                        cout << "Log base " << x << " " << y << " is " << " is not a real number." << endl;
                    }
                    else
                    {
                        cout << "Log base " << x << y << " is " << log(y) / log(x) << ". What you just entered is a real number." << endl;
                    }
                    break;

                case 3:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(asin(x)))
                    {
                        cout << "Inverted sine " << x << " is not a real number." << endl;
                    }
                    else
                    {
                        cout << "Inverted sine " << x << " is " << asin(x) << ". What you just entered is a real number." << endl;
                    }
                    break;

                case 4:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(acos(x)))
                    {
                        cout << "Inverted cosine " << x << " is not a real number." << endl;
                    }
                    else
                    {
                        cout << "Inverted cosine " << x << " is " << acos(x) << ". What you just entered is a real number." << endl;
                    }
                    break;
                
                case 5:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(fmod(x, y)))
                    {
                        cout << x << " to the power of " << y << " is not possible." << endl;
                    }
                    else
                    {
                        cout << x << " to the power of " << y << " is " << pow(x, y) << " so it's a possible outcome." << endl;
                    }
                    break;
                
                case 6:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnan(fmod(x, y)))
                    {
                        cout << "The remainder of " << x << " and " << y << " is not possible." << endl;
                    }
                    else
                    {
                        cout << "The remainder of " << x << " and " << y << " is " << fmod(x, y) << " so it's a possible outcome." << endl;
                    }
                    break;

                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice2 << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // CHECK IF INFINITE
        case 39:
            cout << 
"Here are 2 things that could result in an impossible number, choose 1 to test:\n\
1: x / 0\n\
2: DEG tan(90), tan(270), tan(810) and so on\n\
";
            cin >> choice2;
            switch (choice2)
            {
                case 1:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isinf(x / y))
                    {
                        cout << x << " divided by " << y << " is infinity." << endl;
                    }
                    else
                    {
                        cout << x << " divided by " << y << " is " << x / y << " meaning it's not infinity." << endl;
                    }
                    break;

                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Tangent " << x << " is " << tan(x * (M_PI / 180)) << "." << endl;
                    break;
                
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice2 << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
            }
            break;

        // CHECK IF FINITE
        case 40:
            cout << 
"Here are 2 things that could result in an impossible number, choose 1 to test:\n\
1: x / 0\n\
2: DEG tan(90), tan(270), tan(810) and so on\n\
";
            cin >> choice2;
            switch (choice2)
            {
                case 1:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isfinite(x / y))
                    {
                        cout << x << " divided by " << y << " is " << x / y << " meaning it's not infinity." << endl;
                    }
                    else
                    {
                        cout << x << " divided by " << y << " is infinity." << endl;
                    }
                    break;

                case 2:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Tangent " << x << " is " << tan(x * (M_PI / 180)) << "." << endl;
                    break;
                
                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice2 << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
            }
            break;

        // CHECK IF NEGATIVE NUMBER
        case 41:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            if (signbit(x))
            {
                cout << x << " is a negative number." << endl;
            }
            else
            {
                cout << x << " isn't a negative number." << endl;
            }
            break;

        // CHECK IF NOT ZERO, DENORMAL, INFINITY OR IMPOSSIBLE NUMBER
        case 42:
            cout << 
"Choose how you want to test if a number is not 0, infinity, or impossible:\n\
1: Even number root negative number ((x % 2 = 0)√(-y))\n\
2: log(x) if x ≤ 0\n\
3: asin(x) if x < -1 or x > 1\n\
4: acos(x) if x < -1 or x > 1\n\
5: x^y if x and y are 0\n\
6: Checking for a remainder between x and 0\n\
8: x / 0\n\
9: DEG tan(90), tan(270), tan(810) and so on\n\
";
            cin >> choice2;
            switch (choice2)
            {
                case 1:
                    cout << "Enter base number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter root number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(pow(x, 1 / y)))
                    {
                        cout << x << " root " << y << " is " << pow(x, 1 / y) << ". What you just entered is a real number." << endl;
                    }
                    else
                    {
                        cout << y << " root of " << x << " is not a real number."<< endl;
                    }
                    break;

                case 2:
                    cout << "Enter base number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(log(y) / log(x)))
                    {
                        cout << "Log base " << x << y << " is " << log(y) / log(x) << ". What you just entered is a real number." << endl;
                    }
                    else
                    {
                        cout << "Log base " << x << " " << y << " is " << " is not a real number." << endl;
                    }
                    break;

                case 3:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(asin(x)))
                    {
                        cout << "Inverted sine " << x << " is " << asin(x) << ". What you just entered is a real number." << endl;
                    }
                    else
                    {
                        cout << "Inverted sine " << x << " is not a real number." << endl;
                    }
                    break;

                case 4:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(acos(x)))
                    {
                        cout << "Inverted cosine " << x << " is " << acos(x) << ". What you just entered is a real number." << endl;
                    }
                    else
                    {
                        cout << "Inverted cosine " << x << " is not a real number." << endl;
                    }
                    break;
                
                case 5:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(fmod(x, y)))
                    {
                        cout << x << " to the power of " << y << " is " << pow(x, y) << " so it's a possible outcome." << endl;
                    }
                    else
                    {
                        cout << x << " to the power of " << y << " is not possible." << endl;
                    }
                    break;
                
                case 6:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked" << endl;
                        return 1;
                    }
                    if (isnormal(fmod(x, y)))
                    {
                        cout << "The remainder of " << x << " and " << y << " is " << fmod(x, y) << " so it's a possible outcome." << endl;
                    }
                    else
                    {
                        cout << "The remainder of " << x << " and " << y << " is not possible." << endl;
                    }
                    break;

                case 7:
                    cout << "Enter first number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    cout << "Enter second number: ";
                    cin >> y;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }
                    if (isnormal(x / y))
                    {
                        cout << x << " divided by " << y << " is " << x / y << " meaning it's not infinity." << endl;
                    }
                    else
                    {
                        cout << x << " divided by " << y << " is infinity." << endl;
                    }
                    break;

                case 8:
                    cout << "Enter number: ";
                    cin >> x;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000000, '\n');
                        cout << "Invalid input, get your eyes checked." << endl;
                        return 1;
                    }   
                    if (isnormal(tan(x * (M_PI / 180))))
                    {
                        cout << "Tangent " << x << " is " << tan(x * (M_PI / 180)) << " so its not infinity." << endl;
                    }
                    else
                    {
                        cout << "Tangent " << x << " is infinity." << endl;
                    }
                    break;

                default:
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << choice2 << " was not a viable option. Get your eyes checked." << endl;
                    return 1;
                    break;
            }
            break;

        // ROUND TO DESIRED DECIMAL PLACES
        case 43:
            cout << "Enter number: ";
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << "Decimal places: ";
            cin >> decimalPlaces;
            if (cin.fail()|| decimalPlaces < 0)
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Invalid input, get your eyes checked." << endl;
                return 1;
            }
            cout << fixed << setprecision(decimalPlaces) << (x * 10) / 10.0 << endl;
            break;

        // PRINT PI
        case 44:
            cout << "Decimal places: ";
            cin >> decimalPlaces;
            if (cin.fail() || decimalPlaces < 0)
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked." << endl;
                    return 1;
                }  
            cout << fixed << setprecision(decimalPlaces) << (M_PI * 10) / 10.0 << endl;
            break;

        // PRINT EULER'S NUMBER
        case 45:
            cout << "Decimal places: ";
            cin >> decimalPlaces;
            if (cin.fail() || decimalPlaces < 0)
                {
                    cin.clear();
                    cin.ignore(1000000, '\n');
                    cout << "Invalid input, get your eyes checked." << endl;
                    return 1;
                }  
            cout << fixed << setprecision(decimalPlaces) << (M_E * 10) / 10.0 << endl;
            break;

        default:
            cin.clear();
            cin.ignore(1000000, '\n');
            cout << choice << " was not a viable option. Get your eyes checked." << endl;
            return 1;
    }
    return 0;
}