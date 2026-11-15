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

    // NEW TEST CASES

    Height h6(0, 0);

    cout << "h6: ";
    h6.print();
    cout << endl;

    h6.adjust(12);
    h6.adjust(-3);
    h6.adjust();
    h6.adjust(10);

    cout << "Total inches: " << h6.totalInches() << endl;
    cout << endl;

    cout << "h6: "; 
    h6.print();
    cout << endl;

    if (h3 == h6)
        cout << "h3 is the same as h6" << endl;

    else
        cout << "h3 is not the same as h6" << endl;

    cout << endl;

    // NEW TEST CASES
    
    Height h3(5, 8);
    Height h6(1, 8);

    if (h3 < h6)
        cout << "h3 is less than h6" << endl;

    else if (h3 == h6)
        cout << "h3 is the same as h6" << endl;

    else
        cout << "h3 is greater than h6" << endl;

    cout << endl;

    cout << "h3: " << h3 << endl;
    cout << "h6: " << h6 << endl;

    cout << endl;

    return 0;
}