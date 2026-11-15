// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - Letter grade to number grade
	b.Author - George Hanna
	c.Date - June 30, 2022
	d.Input Variables - Grades
	e.Process Flow - Input letter grade, receive equivlaent numeric value
	f.Output Variables - Number grade
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string grade;

    while (grade != "a" && "b" && "c" && "d" && "f")
{
    cout << "\nEnter A letter grade: ";
    cin >> grade;

    if (grade == "A+")
    {
    cout << "The numeric value is 4.0\n";
    }
    else if (grade == "A")
    {
    cout << "The numeric value is 4.0\n";
    }
    else if (grade == "A-")
    {
    cout << "The numeric value is 3.7\n";
    }
    else if (grade == "B+")
    {
    cout << "The numeric value is 3.3\n";
    }
    else if (grade == "B")
    {
    cout << "The numeric value is 3.0\n";
    }
    else if (grade == "B-")
    {
    cout << "The numeric value is 2.7\n";
    }
    else if (grade == "C+")
    {
    cout << "The numeric value is 2.3\n";
    }
    else if (grade == "C")
    {
    cout << "The numeric value is 2.0\n";
    }
    else if (grade == "C-")
    {
    cout << "The numeric value is 1.7\n";
    }
    else if (grade == "D+")
    {
    cout << "The numeric value is 1.3\n";
    }
    else if (grade == "D")
    {
    cout << "The numeric value is 1.0\n";
    }
    else if (grade == "D-")
    {
    cout << "The numeric value is 0.7\n";
    }
    else if (grade == "F+")
    {
    cout << "The numeric value is 0\n";
    }
      else if (grade == "F")
    {
    cout << "The numeric value is 0\n";
    }
      else if (grade == "F-")
    {
    cout << "The numeric value is 0\n";
    }
}
    return 0;
}