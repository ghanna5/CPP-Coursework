#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Vending Machine Program

    double dollar_coins;
    double quarter_coins;
    double dimes_coins;
    double nickles_coins;
    double pennies_coins;
    double item;
    double bill;
    int amount_due;

    cout << "\nPlease select the price of the item: ";
    cin >> item;
    cout << "Insert your money: ";
    cin >> bill;

    item = item * 100;
    amount_due = 100 * bill - item;
    dollar_coins = amount_due / 100;
    amount_due = amount_due - 100 * dollar_coins;
    quarter_coins = amount_due / 25;
    amount_due = amount_due - 25 * quarter_coins;
    dimes_coins = amount_due / 10;
    amount_due = amount_due - 10 * dimes_coins;
    nickles_coins = amount_due / 5;
    amount_due = amount_due - 5 * nickles_coins;
    pennies_coins = amount_due / 1;

    cout << "\nDollar coins: " << dollar_coins << endl;
    cout << "Quarter coins: " << quarter_coins << endl;
    cout << "Dimes coins: " << dimes_coins << endl;
    cout << "Nickles coins: " << nickles_coins << endl;
    cout << "Pennies coins: " << pennies_coins << endl;


    //The sum, difference, product, quotient, and power

    float first;
    float second;
    float total;
    float sum;
    float diff;
    float prod;
    float quot;
    float power;
    float square;
    float cube;

    cout << "Please enter the first number: ";
    cin >> first;
    cout << "Please enter the second number: ";
    cin >> second;

    sum = first + second;
    diff = first - second;
    prod = first * second;
    quot = first / second;
    square = first * first;
    cube = first * first * first;
    power = pow(first, 4);

    cout << "The sum = " << sum << endl;
    cout << "The difference = " << diff << endl;
    cout << "The product = " << prod << endl;
    cout << "The quotient = " << quot << endl;
    cout << "The square of the first number = " << square << endl;
    cout << "The cube of the first number = " << cube << endl;
    cout << "The fourth power of the first number = " << power << endl;

    float num1;
    float num2;
    float num3;

    cout << "Please enter the first number: ";
        cin >> num1;
    cout << "Please enter the second number: ";
        cin >> num2;
    cout << "Please enter the third number: ";
        cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "The largest number is " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The largest number is " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "The largest number is " << num3 << endl;
    }

    return 0;
}