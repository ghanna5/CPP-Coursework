#ifndef HEIGHT_H
#define HEIGHT_H

#include <iostream>

using namespace std;

class Height
{
public:
    Height(int f, int i);
    void setFeet(int f);
    int getFeet() const;
    void setInches(int i);
    int getInches() const;
    void print() const;
    void adjust();

private:
    int feet;
    int inches;
};

#endif