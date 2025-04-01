// Libraries and namespaces
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace this_thread;
using namespace chrono;

// Variables for introduction
string name;
int age;
int grade;

// Questions and answers
string questions[] =
{
    "Which is the correct syntax to output \"Hello World\" in C++?\n(A)\n#include <stdio.h>\n\nint main() {\n    printf(\"Hello world!\");\n\n    return 0;\n}\n(B)\n#include <iostream>\n\nint main() {\n    cout << \"Hello world!\";\n\n    return 0;\n}\n(C)\n#include <iostream>\nusing namespace std;\n\nint main() {\n    cout << \"Hello world!\";\n\n    return 0;\n}\n(D)\n#include <iostream>\nusing namespace std\n\nint main() {\n    cout << \"Hello world!\";\n\n    return 0;\n}\n",
    "What is the correct syntax to declare a variable in C++?\n(A)\nint x;\n(B)\nvariable x;\n(C)\nvar x;\n(D)\nNone of the above\n",
    "What are the basic data types of C++?\n(A)\nint, float, double, char, string\n(B)\nint, float, double, char, string, bool\n(C)\npointer, vector, double, char, list\n(D)\nint, float, double, num, decimal\n",
    "The \"<<\" used for ouput of data in C++ is the __________ operator.\n(A)\nString insertion\n(B)\nExtraction\n(C)\nOutput\n(D)\nString extraction\n",
    "Type \"T\" for true and \"F\" for false.\nThe \"return 0;\" at the end of the main function is compulsary in C++.\n",
    "Type \"T\" for true and \"F\" for false.\nThe \"return 0;\" at the end of the main function is used to tell the developer and compiler the code has finished without errors\n",
    "What does \"#include <iostream>\" do?\n(A)\nIncludes the string library\n(B)\nDeletes the iostream header-file\n(C)\nIncludes the standard library C++\n(D)\nIncludes the functions in the iostream library\n",
    "What does \"using namespace std;\" do?\n(A)\nUnlocks the functions of iostream\n(B)\nDeclares the standard library\n(C)\nDeclares the standard namespace std for the program\n(D)\nAllows the decleration of variables\n",
    "Final questoion: What makes a string in C++ different from other data types?\n(A)\nIt is a pointer\n(B)\nIt is a class\n(C)\nIt is a structure\n(D)\nIt is non-native to C++ meaning it must be manually imported from a header file\n",
    "How do you write a comment in C++?\n(A)\n-- This is a comment\n(B)\n// This is a comment\n(C)\n#This is a comment\n(D)\n\"This is a comment\"\n"
};
char answers[] = 
{
    'C', 'A', 'B', 'A', 'F', 'T', 'D', 'C', 'D', 'B'
};

// User input
char input;

// Score
int score = 0;

// Main function
int main() {
    // Introduction
    cout << "Hello, please enter your full name using an underscore for a space if needed: ";
    cin >> name;
    cout << "Hello and welcome to lesson 2, " << name << "! Now please enter your age: ";
    cin >> age;
    // Check for invalid input
    if (cin.fail()) // cin.fail() is a function used to check if any erros occur in the terminal such as recieving the wrong type of data variable
    {
        cin.clear(); // cin.clear() is a function used to clear the error flag on cin
        cin.ignore(1000, '\n'); // cin.ignore() is a function used to ignore the next 1000 characters or until the new line character is reached, usually written as below
        cout << "Inalid integer\n";

        return 1;
    }

    else
    {
        cout << "Great! Now please enter your grade: ";
        cin >> grade;
        // Check for invalid input
        if (grade < 7 || grade > 12)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid grade\n";
          
            return 1;
        }

        else {
            // Quiz loop
            for (int questionIndex = 0, answerIndex = 0; questionIndex < sizeof(questions) / sizeof(questions[0]) && answerIndex < sizeof(answers) / sizeof(answers[0]); questionIndex++, answerIndex++)
            {
                // Delay
                sleep_for(milliseconds(1500));
                // Questions
                cout << questions[questionIndex];
                cin >> input;
                // Check for invalid input
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "There has been an error. Program terminated.\n";

                    return 1;
                }

                // Shorcut for developers to exit the program if needed
                else if (input == 'Q')
                {
                    return 0;
                }

                else
                {
                    // Check for correct answers
                    if (input == answers[answerIndex])
                    {
                        // Add score
                        score++;
                        cout << "CORRECT!\n";
                        // Check if all questions have been answered
                        if (questionIndex == sizeof(questions) / sizeof(questions[0]) - 1)
                        {
                            cout << "Congratulations, " << name << "! You have completed the quiz with a score of " << score << " out of " << sizeof(questions) / sizeof(questions[0]) << "!\n";
                        }
                    }

                    else
                    {
                        // If question answered incorrectly, do not add score
                        cout << "INCORRECT!\n";
                        // Check if all questions have been answered
                        if (questionIndex == sizeof(questions) / sizeof(questions[0]) - 1)
                        {
                            cout << "Congratulations, " << name << "! You have completed the quiz with a score of " << score << " out of " << sizeof(questions) / sizeof(questions[0]) << "!\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
