#include <iostream>

#include "basicShape.h"
#include "circle.h"
#include "rectangle.h"

using namespace std;

int main(int argc, char const * argv[])
{
    Circle c1;
    Circle c2(5, 7, 2.5);
    Rectangle r1;
    Rectangle r2(5, 7, 10, 15);
    BasicShape* pShapeArray[4] = {&c1, &r1, &c2, &r2};

    for (int i = 0; i < 4; i++)
    {
        pShapeArray[i]->print();
        cout << "\nArea: " << pShapeArray[i]->area() << endl << endl;
    }

    return 0;
}