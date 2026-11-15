#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string status;
    int income;
    float tax1;
    float tax2;
    float tax3;
    float tax4;

    tax1 = (0.15 * 17000) + 800;
    tax2 = (0.25 * 33000) + 4400;
    tax3 = (0.15 * 44000) + 1600;
    tax4 = (0.25 * 21000) + 8800;

    while (status != "Q")
    {
        cout << "\nAre you single (S) or married (M)? Press Q to quit ";
        cin >> status;
        cout << "What is your income? ";
        cin >> income;

    if(status == "S" && income > 8000 && income < 32000)
    {
        cout << "The tax is " << tax1 << endl;
    }
    if(status == "S" && income > 32000)
    {
        cout << "The tax is " << tax2 << endl;
    }
    if(status == "M" && income > 16000 && income < 64000)
    {
        cout << "The tax is " << tax3 << endl;
    }
    if(status == "M" && income > 64000)
    {
        cout << "The tax is " << tax4 << endl;
    }
    }
    system("pause");
    return 0;
}