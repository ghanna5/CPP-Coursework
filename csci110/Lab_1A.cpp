// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - Multiplication
	b.Author - George Hanna
	c.Date - 6/23/2022
	d.Input Variables - Principal
	e.Process Flow - Operation, Result
	f.Output Variables - Message
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	float principal;
	float const interest = 1.05;
	float first_year;
	float second_year;
	float third_year;
	float fourth_year;
	float fifth_year;

	cout << "What is the initial principal amount? ";
	cin >> principal;

	first_year = principal * interest;
	second_year = first_year * interest;
	third_year = second_year * interest;
	fourth_year = third_year * interest;
	fifth_year = fourth_year * interest;

	cout << "Balance after the first year = " << fixed << setprecision(2) << first_year << endl;
	cout << "Balance after the second year = " << second_year << endl;
	cout << "Balance after the third year = " << third_year << endl;
	cout << "Balance after the fourth year = " << fourth_year << endl;
	cout << "Balance after the fifth year = " << fifth_year << endl;
	
	system("pause");
	return 0;
}