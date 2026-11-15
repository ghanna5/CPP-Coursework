/*  Program: Vector elements
    Author: George Hanna
    Class: CSCI 140
    Date: 21 March 2023
    Description: Returns the output of what was inputted and takes the last comma away
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numbers;
   
   cin >> numbers;
   
   vector<int> values(numbers);
   vector<int> bounds(2);
   
   for (int i = 0; i < numbers; i++)
      cin >> values.at(i);
      
   for (int i = 0; i < bounds.size(); i++)
      cin >> bounds.at(i);
      
   for (int i = 0; i < numbers; i++)
   {
        if (values.at(i) >= bounds.at(0) && values.at(i) <= bounds.at(1))
        {
            if (i == numbers - 1)
                cout << values.at(i);
            
            else
                cout << values.at(i) << ",";
        }
   }
   
   cout << endl;
   
   return 0;
}