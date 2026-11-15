/*  Program: Letter Grade
    Author: George Hanna
    Class: CSCI 140
    Date: 7 March 2023
    Description: Converts number into a letter grade
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int letterInput;
    int grade;

    cout << "\nEnter a score from 1-100: ";
    cin >> letterInput;

    grade = letterInput / 10;

    switch (grade)
    {
        case 10:
        case 9:
            cout << "A" << endl;
            break;

        case 8:
            cout << "B" << endl;
            break;

        case 7:
            cout << "C" << endl;
            break;

        case 6:
            cout << "D" << endl;
            break;

        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "F" << endl;
            break;

        default:
            cout << "Invalid input." << endl;
            break;
    }

    cout << endl;

    return 0;
}