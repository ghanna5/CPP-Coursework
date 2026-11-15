#include <iostream>

#include "student.h"

int main(int argc, char const *argv[])
{
    Student* s1 = new Student("Joe", 2005, 402548549);
    s1->setID(987654321);
    s1->getID();
    
    return 0;
}