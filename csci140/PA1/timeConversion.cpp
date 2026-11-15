/*  Program:    
    Author: George Hanna   
    Class: CSCI 140
    Date: 28 February 2023
    Description: Time Conversion
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int minutes;
    int hour;
    int userInput;

    cout << "\nEnter total minutes: ";
    cin >> userInput;

    hour = userInput / 60;
    minutes = userInput % 60;

    cout << hour << " hour(s) and " << minutes << " minute(s).\n" << endl;
    
    return 0;
}