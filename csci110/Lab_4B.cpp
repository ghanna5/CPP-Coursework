/*
Prolog
   a. 	Program Description: Removes duplicates from an array
   b. 	Author: George Hanna
   c. 	Date: 07/22/22
   d. 	Input variables: Array
   e. 	Process Flow: Number removal
   f. 	Output variables: New array
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

void remove_duplicate(int array[20], int array2[20], int size, int& size2)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        bool duplicated = false;
        for (int j = 0; j <= count; ++j)
        {
            if (array[i] == array2[j])
            {
                duplicated = true;
            }
        }
        if (!duplicated)
        {
            array2[count] = array[i];
            count++;
        }
    }
    size2 = count;
}
int main()
{
    int first_array[20];
    int second_array[20];
    int array_input1;
    int array_input2;
    int counter1 = 0;
    int counter2 = 0;
    int second_size;
    
    cout << "Please enter the array, enter Q to quit:" << endl;
    
    while (cin >> array_input1)
    {
        if (cin.fail())
        {
            break;
        }
        first_array[counter1] = array_input1;
        counter1++;
    }
    remove_duplicate(first_array, second_array, counter1, second_size);

    cout << "Your new array is " << endl;
    
    for (int z = 0; z < second_size; z++)
    {
        cout << second_array[z] << " "; 
    }
    return 0;
}