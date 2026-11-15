#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    float gallons;
    float mpg;
    float price;
    float cost_per_mile;
    float distance;

    cout << "Please input the number of gallons of gas in the tank: ";
    cin >> gallons;

    cout << "Please input the miles per gallon: ";
    cin >> mpg;

    cout << "Please input the price of gas per gallon: ";
    cin >> price;

    cost_per_mile = 100 / mpg * price;
    distance = mpg * gallons;

    cout << "The cost per 100 miles is $" << cost_per_mile << endl;
    cout << "The distance the car will travel is " << distance << " miles" << endl;

    system("pause");
    return 0;
}