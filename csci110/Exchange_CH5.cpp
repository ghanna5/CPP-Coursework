#include <iostream>

using namespace std;

void exchange(int first, int second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    cout << "(Exchange) First = " << first << endl;
    cout << "(Exchange) Second = " << second << endl;
    return;
}
void swap(int& first, int& second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    return;
}
int main()
{
    int first = 10;
    int second = 20;
    cout << "(Before exchange) First = " << first << endl;
    cout << "(Before exchange) Second = " << second << endl;
    exchange(first, second);
    cout << "(After exchange) First = " << first << endl;
    cout << "(After exchange) Second = " << second << endl;
    swap(first, second);
    cout << "(After swap) First = " << first << endl;
    cout << "(After swap) Second = " << second << endl;
    system("pause");
    return 0;
}
