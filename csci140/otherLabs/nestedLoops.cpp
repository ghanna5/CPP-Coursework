#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 2; i < 30; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0 && j != 1 && j != i)
                break;

            if (j == i)
                cout << i << " is prime\n";
        }
    }

    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= 10; j++) 
        {
            cout << i * j << " ";
        }
        
        cout << endl;
    }


    return 0;
}