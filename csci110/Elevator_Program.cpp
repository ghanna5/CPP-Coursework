#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int floor;
    bool more = true;
    string answer;
    
    while (more)
    {
        cout << "Please enter the floor number: ";
        cin >> floor;
    if (cin.fail())
    {
        cout << "Error: Not an integer." << endl;
        return 1;
    }
        if (floor == 13)
    {
        cout << "Error: There is no thirteenth floor." << endl;
        return 1;
    }
        if (floor <= 0 || floor > 20)
    {
        cout << "Error: The floor must be between 1 and 20." << endl;
        return 1;
    }
        cout << "Do you want to continue (y/n)?" << endl;
        cin >> answer;
        if (answer != "y")
        more = false;
    }
    int actual_floor;
    if (floor > 13)
    {
        actual_floor = floor - 1;
    }
    else
    {
        actual_floor = floor;
    }
    cout << "The elevator will travel to floor level "
    << actual_floor << endl;

    system("pause");
    return 0;
}