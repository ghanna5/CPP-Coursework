#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    //Sum Of Two Numbers
   
    int num_1 = 50;
    int num_2 = 100;
    float total_sum;

    total_sum = num_1 + num_2;

    cout << "The sum of the 2 numbers is " << total_sum << endl;

   //Restaraunt Bill

    float meal_cost = 88.67;
    float tax = 0.0675;
    float tip = 0.20;
    float tax_amount1;
    float tax_amount2;
    float tip_amount;
    float total_bill;

    tax_amount1 = meal_cost * tax;
    tax_amount2 = tax_amount1 + meal_cost;
    tip_amount = tax_amount2 * tip;
    total_bill = tip_amount + tax_amount2;

    cout << "\nThe meal costs $" << meal_cost << endl;
    cout << "The tax amount is $" << tax_amount1 << endl;
    cout << "The tip amount is $" << tip_amount << endl;
    cout << "The total bill is $" << total_bill << endl;

    //Average Of Values

    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    float sum;
    float average;

    sum = a + b + c + d + e;
    average = sum / 5;

    cout << "\nThe sum of the five variable is " << sum << endl;
    cout << "The average of the five variable is " << average << endl;

    //Annual Pay

    const int pay_amount = 2200.0;
    const int pay_periods = 26;
    float annual_pay;

    annual_pay = pay_amount * pay_periods;

    cout << "\nThe total annual pay is $" << annual_pay << endl;

    //Ocean Levels
    
    int five_years = 5;
    int seven_years = 7;
    int ten_years = 10;
    float ocean_level_5;
    float ocean_level_7;
    float ocean_level_10;
    float millimeters_per_year = 1.5;

    ocean_level_5 = millimeters_per_year * five_years;
    ocean_level_7 = millimeters_per_year * seven_years;
    ocean_level_10 = millimeters_per_year * ten_years;

    cout << "\nThe ocean level in 5 years will be " << ocean_level_5 << " millimeters" << endl;
    cout << "The ocean level in 7 years will be " << ocean_level_7 << " millimeters" << endl;
    cout << "The ocean level in 10 years will be " << ocean_level_10 << " millimeters" << endl;

    //Total Purchase

    float item_1 = 15.95;
    float item_2 = 24.95;
    float item_3 = 6.95;
    float item_4 = 12.95;
    float item_5 = 3.95;
    float sales_tax = 0.07;
    float sum_1;
    float total;

    sum_1 = item_1 + item_2 + item_3 + item_4 + item_5;
    total = sum_1 * sales_tax;
    total = total + sum_1;

    cout << "\nThe total price is " << total << endl;

    //Cyborg Data Type Sizes



    return 0;
}