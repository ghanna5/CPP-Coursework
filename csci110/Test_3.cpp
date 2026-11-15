#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int num = 1;
    int max_num = 1;
    int digit = 0;
    int max = 6;
    srand(time(0));
    int total[20];
    
    for (int i = 0; i < 20; i++)
    {
        total[i] = (rand()%max) + 1; 
    }
    for (int i = 0; i < 19; i++)
    {
        if(total[i] == total[i + 1])
    {
            num = num + 1 ;
    }
        else if (num > max_num)
    {
            digit = i;
            max_num = num;
            num = 1;
    }
    }    
    for (int i = 0; i < 20; i++)
    {
        if (i == digit - max_num + 1)
    {
            cout << "( " << total[i] << " ";
    }
        else if (i == digit)
    {
            cout << total[i] << " ) ";
    }
        else
    {
            cout << total[i] << " ";
    }
    }
    system("pause");
    return 0;
}