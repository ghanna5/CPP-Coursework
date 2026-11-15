#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 10; j >= i; j--)
            cout << "*";

        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j < i + 1; j++)
            cout << " ";
            
        for(int x = 10; x > i; x--)
            cout << "*";
            
        cout << endl;
    }

    cout << endl;

    for(int i = 10; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
            cout << " ";

        for(int x = 10; x > i - 1; x--)
            cout << "*";
            
        cout << endl;;
    }

    cout << endl;

    return 0;
}