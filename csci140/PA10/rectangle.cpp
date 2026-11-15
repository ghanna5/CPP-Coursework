#include <iostream>

#include "basicShape.h"
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle::Rectangle(int x, int y, int width, int height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

double Rectangle::area()
{
    return (width * height);
}

void Rectangle::print()
{
    cout << "Top-left (" << x << ", " << y << ") with " << width << " by " << height << endl;
}