#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    string marital_status;
    double income;
    const double TAX_RATE1 = 0.1;
    const double TAX_RATE2 = 0.25;
    const double LIMIT1 = 32000;
    const double LIMIT2 = 64000;
    double tax_1;
    double tax_2;
    double tax_3;

    cout << "Please enter your marital status. Write M for married and S for single: ";
    cin >> marital_status;

    cout << "What is your income? ";
    cin >> income;

    tax_1 = income * TAX_RATE1;
    tax_2 = 3200 + (income - LIMIT1) * TAX_RATE2;
    tax_3 = 6400 + (income - LIMIT2) * TAX_RATE2;

    if (marital_status == "S" && income <= LIMIT1)
    {
        cout << "Your tax liability is $" << tax_1;
    }
    else if (marital_status == "S" && income <= LIMIT2)
    {
        cout << "Your tax liability is $" << tax_2;
    }
    else if (marital_status == "M" && income >= LIMIT1)
    {
        cout << "Your tax liability is $" << tax_1;
    }
    else
    {
        cout << "Your tax liability is $" << tax_3;
    }

    return 0;
}