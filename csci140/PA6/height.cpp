#include <iostream>

#include "height.h"

using namespace std;

Height::Height(int f, int i)
{
    if (f < 0)
        feet = 0;

    else
        feet = f;

    if (i < 0 || i >= 12)
        inches = 0;

    else
        inches = i;
}

void Height::setFeet(int f)
{
    if (f >= 0)
        feet = f;
}

int Height::getFeet() const
{
    return feet;
}

void Height::setInches(int i)
{
    if (i >= 0 && i <= 11)
        inches = i;
}

int Height::getInches() const
{
    return inches;
}

void Height::print() const
{
    cout << feet << "' " << inches << "\"" << endl;
}

void Height::adjust()
{
    inches += 1;

    if (inches >= 12)
    {
        feet += 1;
        inches -= 12;
    }
}