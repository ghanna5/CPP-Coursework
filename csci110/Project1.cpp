// CSCI Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
   a. Program Description - Addition, subtraction, multiplication, division
   b. Author - George Hanna
   c. Date - 6/23/2022
   d. Input Variables - First, Second
   e. Process Flow - Operation, comparison
   f. Output Variables - Message
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    float first;
    float second;
    float sum;
    float diff;
    float prod;
    float quot;
    string fname;
    string lname;
    string full_name;
    cout << "Please enter your first name ";
    cin >> fname;
    cout << "Please enter your last name ";
    cin >> lname;
    full_name = fname + " " + lname;
    cout << "Welcome, " << full_name << endl;

    cout << "Please enter the first value ";
    cin >> first;
    cout << "Please enter the second value ";
    cin >> second;
    sum = first + second;
    diff = first - second;
    prod = first * second;
    quot = first / second;

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;
    cout << "Quotient = " << quot << endl;
    if (first > second)
        cout << "First value is greater than the second value " << endl;
    else
        cout << "First value is less than the second value " << endl;

    system("pause");
    return 0;
}