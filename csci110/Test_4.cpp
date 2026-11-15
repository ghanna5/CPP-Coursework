#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;

double* maximum(double* a, int size)
{
    static double max = 0;
    if(size == 0)
    {
        return NULL;
    }
    else
    {
        for(int i = 0; i < size; i++){
            if(max < * (a + i))
            {
                max = * (a + i);
            }
        }
        return &max;
    }
}
int main()
{
    double array[100];
    int size = 0;
    float data = 0;
    double* a = array;
    cout << "Please enter a stream of data, -1 to finish: " << endl;;
    while(true)
    { 
        cin >> data;
        if(data == -1)
        {
            break;
        }
        array[size] = data;
        size++;
    }
    double* max;
    max = maximum(array, size);
    cout << "The max Value of the array is: " << * max;
    cout << endl;
    system("pause");
    return 0;
}