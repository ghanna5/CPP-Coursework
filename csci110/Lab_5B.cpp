/*
Prolog
   a.	Program Description: Making a new array with dynamic memory allocation
   b.	Author: George Hanna
   c. 	Date: 7/26//2022
   d.	Input variable: Array1 and Array2
   e.	Process Flow: Asking for 2 different arrays and combining them into 1 array.
   f.	Output Variables: Combination of 2 array values
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    double a[10];
    double* ptra = a;
    int n = 0;
    double* ptrb = new double[20];
    int size = 0;
    int count = size;
    cout << "\nPlease enter an array of ten numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> *(ptra + i);
        size++;
        if (cin.fail())
        {
            size--;
            break;
        }
    }
    cout << "\nThe array that you entered is: ";
    for (int j = 0; j < size; j++)
    {
        cout << *(ptra + j) << " ";
    }
    cout << endl;
    
    for (int z = 0; z < size; z++)
    {
        *(ptrb + z) = *(ptra + z);
    
    }
    cout << "\nPlease enter another array of six numbers: ";
    for (int x = size; x < (size + 6); x++)
    {
        cin >> *(ptrb + x);
        count++;
        if (cin.fail())
        {
            size--;
            break;
        }
    }
    cout << "\nThe combined array is: \n";
        for (int n = 0; n < size + count; n++)
        {
            cout << *(ptrb + n) << " ";
        }
        cout << endl;
    system("pause");
    return 0;
}