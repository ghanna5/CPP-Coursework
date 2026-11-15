#include <iostream>

#include "name.h"

class Student
{
    friend std::ostream& operator<<(std::ostream&, const Student&);
public:
    Student(const Name&, size_t);
    Student(const Student&);

    Name getName();
    size_t getId();

    bool operator==(const Student&);

private:
    Name name;
    size_t studentId;
};