// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - Printing new salary based off raise and old salary
	b.Author - George Hanna
	c.Date - 07/18/2022
	d.Input Variables - salary and raise percentgae
	e.Process Flow - order of operations 
	f.Output Variables - new salary
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <algorithm>

using namespace std;

double read_double(string prompt)
{
    cout << prompt;
    return 0;
}
double raise(double salary, double percent)
{
    double new_salary = salary * (1 + (percent / 100));
    cout << fixed << setprecision(2) << "Your new salary is: $" << new_salary;
    return 0;
}
int main()
{
    double income;
    double percentage;
    string answer;
    
    read_double("Please enter your salary: ");
    cin >> income;
    while (income <= 0)
    {
        cout << "Error: Positive integers only." << endl;
        cout << "Would you like to continue? (y/n): ";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Please enter your salary: ";
            cin >> income;
        }
        else
        {
            cout << "Exit!" << endl;
            return 0;
        }
    }
    read_double("What percentage raise would you like? ");
    cin >> percentage;
    while (percentage <= 0)
    {
        cout << "Error: Positive integers only." << endl;
        cout << "Would you like to continue? (y/n): ";
        cin >> answer;
        if (answer == "y")
        {
            cout << "What percentage raise would you like? ";
            cin >> percentage;
        }
        else
        {
            cout << "Exit!" << endl;
            return 0;
        }
    }
    raise(income, percentage);

    cout << "Would you like to continue? (y/n): ";
    cin >> answer;
    if (answer != "y")
    {
        cout << "Exit!" << endl;
        return 0;
    }
    system("pause");
    return 0;
}