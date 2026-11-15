/*
Prolog
   a.	Program Description: Reverses the value of an array.
   b.	Author: George Hanna
   c. 	Date: 7/26/2022
   d.	Input variable: Array
   e.	Process Flow: Receving array, reversing the values
   f.	Output Variables: New array in reverse order
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

void reverse(double* a, int size)
{
	double second_array[20];
	double* b = second_array;
	int count = size - 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = count; j >= 0; j--)
		{
			*(b + i) = *(a + j);
			i++;
		}
	}
	cout << "\nThe new array in reverse order is: \n{";

	for (int f = 0; f >= 0 && f < size; f++)
	{
		cout << *(b + f) << " ";
	}
	cout << "}" << endl;
}
int main()
{
	double first_array[20];
	double* a = first_array;
	double second_array[20];
	int size = 0;

	cout << "\nPlease enter an array of numbers, Q to finish: \n";

	for (int i = 0; i < 20; i++)
	{
		cin >> *(a + size);
		size++;
		if (cin.fail())
		{
			--size;
			break;
		}
	}
	cout << "\nThe array is: \n{";
	for (int x = 0; x < size; x++)
	{
		cout << *(a + x) << " ";
	}
	cout << "}" << endl;

	reverse(a, size);
    cout << endl;
	system("pause");
	return 0;
}