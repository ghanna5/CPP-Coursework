#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\n" << endl;

    int num1, num2, num3, max;

    cin >> num1 >> num2 >> num3;

    max = num1;

    if (num2 >= max)
        max = num2;

    if (num3 >= max)
        max = num3;

    cout << "Max: " << max << endl;

    cout << "\n" << endl;

    int maxNum;
    int sum = 0;

    cin >> maxNum;

    for (int i = 1; i <= maxNum; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }

    cout << "Sum of odd values: " << sum << endl;

    cout << "\n" << endl;

    int value;

    cin >> value;

    while (value != 0)
    {
        // Do something
        cin >> value;
    }

    cout << "\n" << endl;

    return 0;
}