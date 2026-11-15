#include <iostream>

#include "basicShape.h"
#include "circle.h"

using namespace std;

Circle::Circle()
{
    x = 0;
    y = 0;
    radius = 1.0;
}

Circle::Circle(int x, int y, double radius)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

double Circle::area()
{
    return ((3.14) * (radius * radius));
}

void Circle::print()
{
    cout << "Center (" << x << ", " << y << ") with radius " << radius << endl;
}