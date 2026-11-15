/*  Program:    
    Author: George Hanna 
    Class: CSCI 140    
    Date: 28 February 2023
    Description: Power of Two
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int userInput;

    cout << "\nEnter a positive integer: ";
    cin >> userInput;
    
    while(userInput != 1)
    {
        if((userInput % 2) != 0)
        {
            cout << "No\n" << endl;

            return 0;
        }

        userInput = userInput / 2;
    }

    cout << "Yes\n" << endl;

    return 0;
}