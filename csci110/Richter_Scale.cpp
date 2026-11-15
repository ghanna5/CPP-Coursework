#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    float richter;

    cout << "Please enter the richter scale ";
        cin >> richter;
    
    if (richter >= 8)
    {
    cout << "Most strucures fall";
    }
    else if (richter >= 7)
    {
    cout << "Many buildings destoryed";
    }
    else if (richter >= 6)
    {
    cout << "Many buildings considerably damaged, some collapse";
    }
    else if (richter >= 4.5)
    {
    cout << "Damage to poorly constructed buildings";
    }
    else
    {
        cout << "No destruction to buildings";
    }

    return 0;
}