#include <iostream>
using namespace std;

int main() 
{
   int userInput, totalChange;
   int dollar, quarter, dime, nickel, penny;
   
   cin >> userInput;
   
   dollar = userInput / 100;
   
   if(dollar >= 1)
   {
        totalChange = userInput - (dollar * 100);
        quarter = totalChange / 25;
        totalChange = totalChange - (quarter * 25);
        dime = totalChange / 10;
        totalChange = totalChange - (dime * 10);
        nickel = totalChange % 5;
        totalChange = totalChange - (nickel * 5);
        penny = totalChange / 1;
   }

   else
   {
        quarter = userInput / 25;
        totalChange = userInput - (quarter * 25);
        dime = totalChange / 10;
        totalChange = totalChange - (dime * 10);
        nickel = totalChange % 5;
        totalChange = totalChange - (nickel * 5);
        penny = totalChange / 1;
   }
   
   if (userInput > 0)
   {
        if (dollar >= 1)
        {
            if (dollar >= 2)
                cout << dollar << " Dollars" << endl;
         
            else
                cout << dollar << " Dollar" << endl;
        }
      
        if (quarter >= 1)
        {
            if (quarter >= 2)
                cout << quarter << " Quarters" << endl;
         
            else
                cout << quarter << " Quarter" << endl;
        }
      
        if (dime >= 1)
        {
            if (dime >= 2)
                cout << dime << " Dimes" << endl;
            
            else
                cout << dime << " Dime" << endl;
        }
      
        if (nickel >= 1)
        {
            if (nickel >= 2)
                cout << dollar << " Nickels" << endl;
         
            else
                cout << dollar << " Nickel" << endl;
        }
      
        if (penny >= 1)
        {
            if (penny >= 2)
                cout << dollar << " Pennies" << endl;
         
            else
                cout << penny << " Penny" << endl;
        }
    }
   
   else
        cout << "No change" << endl;
      
   return 0;
}