/*  Program: Vending Machine
    Author: George Hanna
    Class: CSCI 140
    Date: 14 March 2023
    Description: Returns change from the amount of a dollar
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int userInput, processingInput, finalInput, totalInput;
    int dollars = 0, quarters, dimes, nickels;
    int q, d, n;
    double balance, remaining, total1, total2, first, second, third;
    int valid = 0;

    cout << "\nVending Machine Version 2 by George Hanna" << endl;
    cout << "\nEnter number of quarters, dimes, and nickels --> ";
    cin >> quarters >> dimes >> nickels;

    q = quarters;
    d = dimes;
    n = nickels;
    first =  quarters * 25;
    second = dimes * 10;
    third = nickels * 5;
    balance = (first + second + third) / 100;
    remaining = balance * 100;

    cout << "Number of dollars: " << dollars 
         << "\nNumber of quarters: " << quarters 
         << "\nNumber of dimes: " << dimes
         << "\nNumber of nickels: " << nickels
         << fixed << setprecision(2) << "\nMachine balance: $" << balance << endl;

    cout << "\nOnly one-dollar bill will be accepted." << endl;
    cout << "Only amount between 0 to 100 is accepted." << endl;
    cout << "Enter 0 to stop the program.\n" << endl;

    cout << "Enter a purchase amount [0 - 100] --> ";
    cin >> userInput;

    processingInput = 100 - userInput;
    remaining = remaining - processingInput;

    while (userInput != 0)
    {
        if ((processingInput % 5) != 0)
        {
            processingInput++;

            if ((processingInput % 5) != 0)
                processingInput++;

            if ((processingInput % 5) != 0)
                processingInput = processingInput - 3;

            if ((processingInput % 5) != 0)
                processingInput--;
        }

        finalInput = processingInput;
        quarters = processingInput / 25;

        if (remaining > 0)
        {
            if (quarters == 1)
            {
                quarters = 0;
                processingInput = processingInput - (quarters * 25);
                dimes = processingInput / 10;
                processingInput = processingInput - (dimes * 10);
                nickels = processingInput / 5;
            }

            else
            {
                processingInput = processingInput - (quarters * 25);
                dimes = processingInput / 10;
                processingInput = processingInput - (dimes * 10);
                nickels = processingInput / 5;
            }
        }

        else
        {
            quarters = 0;
            dimes = 0;
            nickels = 0;
        }

        if (userInput > 0 && userInput <= 100)
        {
            cout << "You entered a purchase amount of " << userInput << " cents." << endl;

            if ((quarters <= q && dimes <= d && nickels <= n) && (quarters > 0 || dimes > 0 || nickels > 0))
            {
                cout << "Inserting one-dollar bill." << endl;
                cout << "Processing your purchase..." << endl;
                cout << "Your change of " << finalInput << " cents is given as:" << endl;
                cout << "Quarter(s): " << quarters << endl;
                cout << "Dime(s): " << dimes << endl;
                cout << "Nickel(s): " << nickels << endl;
                valid++;
            }

            else
            {
                cout << "Please insert one-dollar bill." << endl;
                cout << "Processing your purchase..." << endl;
                cout << "Insufficent changes!" << endl;
                cout << "Your transaction cannot be processed." << endl;
                cout << "Please take back your dollar bill." << endl;
                remaining = remaining + finalInput;
            }
        }

        else
        {
            cout << "You entered a purchase amount of " << userInput << " cents." << endl;
            cout << "You entered an invalid amount (not between 0 and 100). Try again." << endl;
            remaining = remaining + finalInput;
        }

        cout << "\nEnter a purchase amount [0 - 100] --> ";
        cin >> userInput;

        if (userInput != 0)
        {
            processingInput = 100 - userInput;
            remaining = remaining - processingInput;
        }

        else if (userInput == 0)
        {
            total1 = balance * valid;
            total2 = total1 * 100;

            if (total1 >= 1)
            {
                dollars = total2 / 100;
                totalInput = total2 - (dollars * 100);
                quarters = totalInput / 25;
                totalInput = totalInput - (quarters * 25);
                dimes = totalInput / 10;
                if (dimes > 1)
                {
                    dimes = 1;
                    totalInput = totalInput - (dimes * 10);
                    nickels = totalInput / 5;
                }
            }

            cout << "There are " << valid << " valid transactions." << endl;
            cout << "Number of dollars: " << dollars 
            << "\nNumber of quarters: " << quarters 
            << "\nNumber of dimes: " << dimes
            << "\nNumber of nickels: " << nickels
            << fixed << setprecision(2) << "\nMachine balance: $" << total1 << endl;
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}