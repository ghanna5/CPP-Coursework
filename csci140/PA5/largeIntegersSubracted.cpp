/*  Program: Large Integers
    Author: George Hanna
    Class: CSCI 140
    Date: 30 March 2023
    Description: Subtracts two numbers that a regular data type could not handle 
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <string>

using namespace std;

void ConvertString(string str, int arr[], int size);
bool AddArray(int a[], int b[], int result[], int size);
bool SubArray(int a[], int b[], int result[], int size);
void OutputArray(int arr[], int size);

int main() 
{
    string first, second, input;
    int size = 25;
    int a[size], b[size], result[size];
    
    cout << "\nEnter an expression --> ";
    getline(cin, input);
    
    int op_pos = input.find_first_of("+-");

    if (op_pos == string::npos) 
    {
        cout << "Invalid operand(s)" << endl;
        return 0;
    }

    first = input.substr(0, op_pos);
    second = input.substr(op_pos + 1);
    char op = input[op_pos];

    if (first.length() > size || second.length() > size) 
    {
        cout << "Invalid operand(s)" << endl;
        return 0;
    }

    ConvertString(first, a, size);
    ConvertString(second, b, size);

    bool valid = false;

    if (op == '+') 
    {
        valid = AddArray(a, b, result, size);
    }

    else if (op == '-') 
    {
        valid = SubArray(a, b, result, size);
    }

    else 
    {
        cout << "Invalid operand(s)" << endl;
        return 0;
    }

    if (valid) 
    {
        cout << first << " " << op << " " << second << " = ";
        OutputArray(result, size);
        cout << endl;
    }

    else 
        cout << "Result is negative" << endl;

    cout << endl;

    return 0;
}

void ConvertString(string str, int arr[], int size) 
{
    int count = 0;

    for (int i = str.length() - 1; i >= 0; i--) 
    {
        arr[count] = str[i] - '0';
        count++;
    }

    for (int i = count; i < size; i++) 
        arr[i] = 0;
}

bool AddArray(int a[], int b[], int result[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        int sum = a[i] + b[i] + count;

        if (sum >= 10) 
        {
            count = 1;
            sum -= 10;
        } 

        else 
            count = 0;

        result[i] = sum;
    }

    return (count == 0);
}

bool SubArray(int a[], int b[], int result[], int size) 
{
    int count = 0;

    for (int i = 0; i < size; i++) 
    {
        int diff = a[i] - b[i] - count;

        if (diff < 0) 
        {
            count = 1;
            diff += 10;
        } 

        else 
            count = 0;

        result[i] = diff;
    }

    if (count == 1) 
        return false;
    else 
        return true;
}

void OutputArray(int arr[], int size) 
{
    bool output = true;
    bool negative = false;
    
    if (arr[size - 1] < 0) 
    {
        negative = true;
        arr[size - 1] = -arr[size - 1];
    }

    for (int i = size - 1; i >= 0; i--) 
    {
        if (arr[i] != 0 || !output) 
        {
            output = false;
            cout << arr[i];
        }
    }

    if (output) 
        cout << "0";
        
    if (negative) 
        cout << "Result is negative)";
}