#include <iostream>

using namespace std;

int recFind(const int a[], int key, int start, int n)
{
    if(a[start] == key)
        return start;

    if(start >= n)
        return -1;

    return recFind(a, key, start + 1, n);
}

int main(int argc, char const * argv[])
{
    int values[7] = {5, 7, 3, 2, 6, 2, 15};
    int key1 = 2;
    int key2 = 1;
    int key3 = 15;

    cout << "\n" << recFind(values, key1, 0, 7);
    cout << "\n" << recFind(values, key2, 0, 7);
    cout << "\n" << recFind(values, key3, 0, 7) << "\n\n";

    return 0;
}