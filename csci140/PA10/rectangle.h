#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "basicShape.h"

class Rectangle : public BasicShape
{
public:
    Rectangle();
    Rectangle(int x, int y, int width, int height);
    double area() override;
    void print() override;
    
private:
    int width;
    int height;
};

#endif