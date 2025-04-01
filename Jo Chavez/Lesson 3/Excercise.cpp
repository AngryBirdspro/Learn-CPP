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
    "\">>\" is called the: \n(A) String extraction operator\n(B) String insertion operator\n(C) String inspection operator\n(D) String implement operator\n",
    "\"cin\" is a function a part of the iostream header file that is used to:  \n(A) Extract user input and assigns it to a variable\n(B) Print requested elements into the terminal\n(C) Acts as a pointer for a variable\n(D) Extract user input and assigns it to a pointer\n",
    "\"cin\" is short for:  \n(A) Character insertion\n(B) Console.init\n(C) Character input\n(D) Comman input\n",
    "The \"cin.fail()\": \n(A) Checks if the memory location of a variable exists\n(B) Terminates the console/terminal\n(C) Detects if 2 variables are the same data type\n(D) Returns a boolean value as to if the input recieved was successful\n",
};
char answers[] = 
{
    'B', 'A', 'C', 'D'
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
