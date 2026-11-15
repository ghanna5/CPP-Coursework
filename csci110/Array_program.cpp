#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    float total = 0;
    int count = 0;
    float avg = 0;
    float values[] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};
    for (int i = 0; i < 10; i++)
    {
        total = total + values[i];
        ++count;
        cout << "values[ " << i << " ] = " << values[i] << endl;
    }
    cout << "Total = " << total << endl;
    avg = total / count;
    cout << "Average = " << avg << endl;
    system("pause");
    return 0;
}