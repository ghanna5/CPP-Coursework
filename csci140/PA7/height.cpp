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

void Height::adjust(int inches)
{
    if (inches > 0)
    {
        this->inches += inches;

        if (this->inches >= 12)
        {
            feet += 1;
            this->inches -= 12;
        }
    }

    else if (inches < 0)
    {
        this->inches += inches;

        if (this->inches < 0)
        {
            while (this->inches < 0)
            {
                feet -= 1;
                this->inches += 12;
            }
        }
    }
}

int Height::totalInches() const
{
    return ((feet * 12) + inches);
}

bool Height::operator==(const Height &r) const
{
    return (feet == r.feet && inches == r.inches);
}

bool Height::operator<(const Height& r)
{
    return (totalInches() < r.totalInches());
}

ostream& operator<<(ostream& cout, const Height& r)
{
    cout << r.getFeet() << "' " << r.getInches() << "\"";
    return cout;
}