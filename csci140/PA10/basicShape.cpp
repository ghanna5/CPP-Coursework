#include <iostream>

#include "basicShape.h"

using namespace std;

using namespace std;

BasicShape::BasicShape()
{
    x = 0;
    y = 0;
}

BasicShape::BasicShape(int x, int y)
{
    this->x = x;
    this->y = y;
}

int BasicShape::getX() const
{
    return x;
}

int BasicShape::getY() const
{
    return y;
}

void BasicShape::print()
{
    cout << "(" << x << ", " << y << ")" << endl;
}