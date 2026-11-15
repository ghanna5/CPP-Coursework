#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

bool all_the_same(double x, double y, double z)
{
if(x == y && y == z)
{
    return true;
}
else
{
   return false;
}
}
bool all_different(double x, double y, double z)
{
if(x != y && y != z && x != z)
{
    return true;
}
else
{
    return false;
}
}
bool sorted(double x, double y, double z)
{
if(x <= y && y <= z)
{
return true;
}
else
{
return false;
}
}
int main()
{
double x, y, z;
cout << "Enter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
cout << "Enter the third number: ";
cin >> z;

if(all_the_same(x,y,z) == true)
{

cout << "#1, #2, #3 are the same.\n";
}
if(all_different(x,y,z) == true)
{

cout << "#1, #2, #3 are different.\n";
}
if(sorted(x,y,z) == true)
{
cout << "#1, #2, #3 are sorted.\n";
}
return 0;
}