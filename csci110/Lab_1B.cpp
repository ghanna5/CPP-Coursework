// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - Addition, subtraction, multiplication, division
	b.Author - George Hanna
	c.Date - 6/26/2022
	d.Input Variables - time1, time2
	e.Process Flow - Operation, Result
	f.Output Variables - Time difference
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    float time1 = 0;
    float time2 = 0;
    int hour1 = 0;
    int hour2 = 0;
    float min1 = 0;
    float min2 = 0;
    float time_change = 0;
    float time_difference = 0;
    int hour_difference = 0;
    float min_difference = 0;
    
    cout <<"Please enter the first time: ";
    cin >> time1;
    cout <<"Please enter the second time: ";
    cin >> time2;
   
    if (time1 < time2) {
        hour1 = time1 / 100; 
        hour2 = time2 / 100; 
        min1 = (((time1 / 100) - hour1) * 100);
        min2 = (((time2 / 100) - hour2) * 100);
        time_change = ((min2 / 60) - (min1 / 60));
        time_difference = (hour2 - hour1 + time_change);
        hour_difference = time_difference;
        min_difference = round((abs(time_change)) * 60);
        cout << "The time difference is " << hour_difference << " hours and " << min_difference << " minutes"<< endl;
   
    }
   
    else {
        hour1 = time1 / 100;
        hour2 = (time2 + 2400) / 100;
        min1 = (((time1 / 100) - hour1) * 100);
        min2 = ((((time2 + 2400) / 100) - hour2) * 100);
        time_change = ((min2 / 60)) - (min1 / 60);
        time_difference = (hour2 - hour1 + time_change);
        hour_difference = time_difference;
        min_difference = round(abs(time_change) * 60);
        cout << "The time diference is " << hour_difference << " hours and " << min_difference << " minutes"<< endl;
   
    }
    
    system("pause");
    return 0;
}