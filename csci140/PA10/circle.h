#ifndef CIRCLE_H
#define CIRCLE_H

#include "basicShape.h"

class Circle : public BasicShape
{
public:
    Circle();
    Circle(int x, int y, double radius);
    double area() override;
    void print() override;
    
private:
    double radius;
};

#endif