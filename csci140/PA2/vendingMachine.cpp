/*  Program: Vending Machine
    Author: George Hanna
    Class: CSCI 140
    Date: 7 March 2023
    Description: Returns changefrom the amount of a dollar
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int userInput, proccessingInput, finalInput;
    int quarter, dime, nickel;

    cout << "\nVending Machine Version 1 by George Hanna" << endl;
    cout << "There are 2 quarters, 2 dimes, and 1 nickel.\n" << endl;
    cout << "Enter a purchase amount [0 - 100] --> ";
    cin >> userInput;

    proccessingInput = 100 - userInput;

    if ((proccessingInput % 5) != 0)
    {
        proccessingInput++;

        if ((proccessingInput % 5) != 0)
            proccessingInput++;

        if ((proccessingInput % 5) != 0)
            proccessingInput = proccessingInput - 3;

        if ((proccessingInput % 5) != 0)
            proccessingInput--;
    }

    finalInput = proccessingInput;

    quarter = proccessingInput / 25;

    if (quarter >= 3)
    {
        quarter = (proccessingInput - 25) / 25;
        proccessingInput = proccessingInput - (quarter * 25);
        dime = proccessingInput / 10;
        proccessingInput = proccessingInput - (dime * 10);
        nickel = proccessingInput / 5;
    }

    else
    {
        proccessingInput = proccessingInput - (quarter * 25);
        dime = proccessingInput / 10;
        proccessingInput = proccessingInput - (dime * 10);
        nickel = proccessingInput / 5;
    }

    if (userInput >= 0 && userInput <= 100)
    {
        cout << "You entered a purchase amount of " << userInput << " cents." << endl;

        if (quarter <= 2 && dime <= 2 && nickel <= 1)
        {
            cout << "Your change of " << finalInput << " cents is given as:" << endl;
            cout << "Quarter(s): " << quarter << endl;
            cout << "Dime(s): " << dime << endl;
            cout << "Nickel(s): " << nickel << endl;
        }

        else
            cout << "Insufficient coins. Your change of " << finalInput << " cents cannot be processed." << endl;
    }

    else
        cout << "You entered an invalid amount (not between 0 and 100)." << endl;

    cout << endl;

    return 0;
}