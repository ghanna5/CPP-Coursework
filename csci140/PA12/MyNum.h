#ifndef MYNUM_H
#define MYNUM_H

#include <iostream>

using namespace std;

template<typename t>
class MyNum
{
public:
    MyNum(t v = 0)
    {
        value = v;
    }

    void setValue(t v)
    {
        value = v;
    }

    t getValue() const
    {
        return value;
    }

    MyNum operator+(const MyNum &r) const
    {
        return (value + r.getValue());
    }

    MyNum operator-(const MyNum &r) const
    {
        return (value - r.getValue());
    }

    MyNum operator*(const MyNum& r) const
    {
        return (value * r.getValue());
    }

    MyNum operator/(const MyNum& r) const
    {
        return (value / r.getValue());
    }

    MyNum operator%(const MyNum& r) const
    {
        return (value % r.getValue());
    }

    bool operator==(const MyNum &r) const
    {
        return (r.getValue() == value);
    }

    bool operator!=(const MyNum& r) const
    {
        return ( ! (value == r.getValue()));
    }

    friend ostream &operator<<(ostream &out, const MyNum &r)
    {
        out << r.value;

        return out;
    }

    friend istream &operator>>(istream &in, MyNum &r)
    {
        in >> r.value;

        return in;
    }

private:
    t value;
};

#endif