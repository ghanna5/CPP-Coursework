#ifndef BASIC_SHAPE_H
#define BASIC_SHAPE_H

class BasicShape
{
public:
    BasicShape();
    BasicShape(int x, int y);
    int getX() const;
    int getY() const;
    virtual double area() = 0;
    virtual void print();

protected:
    int x;
    int y;
};

#endif