#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int* num;
    int sum = 5;
    num = &sum;

    cout << *num << endl;
    cout << num << endl;

    cout << endl;

    *num = 10;

    cout << sum << endl;
    cout << &sum << endl;

    cout << endl;

    int* number = new int(5);

    cout << *number << endl;
    cout << number << endl;

    delete number;

    cout << endl;

    int store = 5;
    int* array = new int[store];

    for (int i = 0; i < store; i++)
    {
        array[i] = i + 1;
        cout << array[i] << " ";
    }

    delete[] array;

    cout << endl;

    return 0;
}