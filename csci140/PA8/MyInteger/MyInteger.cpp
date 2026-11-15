#include <iostream>

#include "MyInteger.h"

MyInteger::MyInteger(int v)
{
    value = v;
}

void MyInteger::setValue(int v)
{
    value = v;
}

int MyInteger::getValue() const
{
    return value;
}

MyInteger MyInteger::operator+(const MyInteger &r) const
{
    return (value + r.getValue());
}

MyInteger MyInteger::operator-(const MyInteger &r) const
{
    return (value - r.getValue());
}

MyInteger MyInteger::operator*(const MyInteger& r) const
{
    return (value * r.getValue());
}

MyInteger MyInteger::operator/(const MyInteger& r) const
{
    return (value / r.getValue());
}

MyInteger MyInteger::operator%(const MyInteger& r) const
{
    return (value % r.getValue());
}

bool MyInteger::operator==(const MyInteger &r) const
{
    return (r.getValue() == value);
}

bool MyInteger::operator!=(const MyInteger& r) const
{
    return ( ! (value == r.getValue()));
}

ostream &operator<<(ostream &out, const MyInteger &r)
{
    out << r.value;

    return out;
}

istream &operator>>(istream &in, MyInteger &r)
{
    in >> r.value;

    return in;
}