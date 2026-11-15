#include <iostream>

#include "height.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Height h3(5, 8);
    Height h4(-1, 5);
    Height h5(6, 15);

    cout << "h3: ";
    h3.print();
    cout << endl;

    h3.setFeet(-2);
    h3.setInches(10);
    cout << "Feet: " << h3.getFeet() << ", Inches: " << h3.getInches() << endl;
    cout << endl;

    h4.setFeet(6);
    h4.setInches(12);
    cout << "Feet: " << h4.getFeet() << ", Inches: " << h4.getInches() << endl;
    cout << endl;

    h5.setInches(10);
    h5.adjust();
    h5.adjust();
    h5.print();
    cout << endl;

    return 0;
}