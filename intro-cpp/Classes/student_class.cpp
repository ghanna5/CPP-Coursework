#include "student_class.h"
#include "name.h"

Student::Student(const Name& name, size_t studentId)
{
    this->name = name;
    this->studentId = studentId;
}

Student::Student(const Student& other)
{
    name = other.name;
    studentId = other.studentId;
}

bool Student::operator==(const Student& other)
{
    return name == other.name;
}

Name Student::getName()
{
    return name;
}

size_t Student::getId()
{
    return studentId;
}

std::ostream& operator<<(std::ostream& out, const Student& s)
{
    return (out << s.studentId << " - " << s.name);
}