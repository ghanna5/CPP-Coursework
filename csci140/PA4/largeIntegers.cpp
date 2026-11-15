/*  Program: Large Integers
    Author: George Hanna
    Class: CSCI 140
    Date: 21 March 2023
    Description: Returns a number that is larger than what a regular data type can handle
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string stringArray;
    int maxDigits = 25;
    int a[maxDigits];
    int numDigits = 0;

    cout << "\nEnter a large integer up to 25 digits --> ";
    cin >> stringArray;

    for (int i = 0; i < stringArray.length(); i++)
    {
        char asciiArray = stringArray[i];

        if (asciiArray == '\n')
            break;
        
        a[i] = asciiArray - '0';

        numDigits++;

        if (numDigits > maxDigits)
        {
            cout << "Error: too many digits" << endl;

            return 0;
        }
    }

    cout << "Digits: ";

    for (int i = maxDigits - 1; i >= 0; i--)
    {
        if (i >= numDigits)
            cout << "0 "; 

        else
            cout << a[i] << " ";
    }

    cout << endl;

    cout << "Number of digits: " << numDigits << endl;

    cout << endl;

    return 0;
}