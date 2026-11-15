/*
Prolog
   a. 	Program Description: Checks to see if 2 arrays have the same elements in the same order.
   b. 	Author: George Hanna
   c. 	Date: 07/22/22
   d. 	Input variables: Arrays
   e. 	Process Flow: Testing for false and algorithms
   f. 	Output variables: Array sizes and what they equal
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

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size)
    {
        return false;
    }
    int counter = 0;
    while (counter < a_size)
    {
        if (a[counter] != b[counter])
        {
            return false;
            break;
        }
        counter++;
    }
    return true;
}
int main()
{
    int first_array[20];
    int second_array[20];
    int array_size1;
    int array_size2;
    int array_input1;
    int array_input2;
    int first_counter = 0;
    int second_counter = 0;

    cout << "\nPlease enter your first array, enter Q to quit: " << endl;

    while (cin >> array_input1)
    {
        if (cin.fail())
        {
            break;
        }
        else
        {
            first_array[first_counter] = array_input1;
            first_counter++;
        }
    }
    array_size1 = first_counter;
    cin.clear();
    cin.ignore();

    cout << "The first array is: { ";
    
    for (int l = 0; l < array_size1; l++)
    {
        cout << first_array[l] << " ";
    }
    cout << " }" << endl;
    
    cout << "\nPlease enter your second array, enter Q to quit: " << endl;
    
    while (cin >> array_input2)
    {
        if (cin.fail())
        {
            break;
        }
        else
        {
            second_array[second_counter] = array_input2;
            second_counter++;
        }
    }
    array_size2 = second_counter;

    cout << "The second array is: { ";

    for (int f = 0; f < array_size2; f++)
    {
        cout << second_array[f] << " ";
    }
    cout << "}" << endl;
    cout << "\nThe size of the first array is: " << array_size1 << endl;
    cout << "The size of the second array is: " << array_size2 << endl;
    
    if (equals(first_array, array_size1, second_array, array_size2))
    {
        cout << "\nBoth arrays are the same\n" << endl;
    }
    else
    {
        cout << "\nTwo arrays are different\n" << endl;
    }
    return 0;
}