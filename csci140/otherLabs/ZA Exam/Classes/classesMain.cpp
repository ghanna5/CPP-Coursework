#include <iostream>

#include "classes.h"

int main(int argc, char const *argv[])
{
    Classes first;
    Classes second("George", 1234);

    first.print();
    second.print();

    first.setName("Hanna");
    first.setID(1234);

    first.print();
    second.print();

    if (first.getName() == second.getName())
        cout << "Cool" << endl;

    if (first.getID() == second.getID())
        cout << "Even cooler" << endl;

    cout << first << endl;
    cout << second << endl;

    return 0;
}