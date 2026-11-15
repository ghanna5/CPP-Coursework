#include <iostream>

using namespace std;

int recursion(int num)
{
   if(num == 1)
      return num;

   return (num * recursion(num - 1));
}

int main(int argc, char const *argv[])
{
   int num;

   cout << "\nEnter a factorial: ";
   cin >> num;

   cout << "Sum: " << recursion(num) << endl << endl;

   return 0;
}