#include <iostream>

using namespace std;

int num = 0;

int recFind(const int a[], int n, int b[])
{
    if(n < 0)
        return 0;

    b[num] = a[n];
    ++num;

    return recFind(a, n - 1, b);
}

int main(int argc, char const * argv[])
{
    int values[7] = {5, 7, 3, 2, 6, 2, 15};
    int reverse[7] = {5, 7, 3, 2, 6, 2, 15};

    recFind(values, 6, reverse);

    cout << "\n";

    for(int i = 0; i < 7; i++)
        cout << reverse[i] << " ";

    cout << "\n\n";

    return 0;
}