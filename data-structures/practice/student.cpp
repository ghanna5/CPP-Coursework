#include <iostream>

#include "student.h"

Student::Student() : name("none"), birthYear(2000), ID(1234567890) { }

Student::Student(std::string name, size_t birthYear, size_t ID) : name(name), birthYear(birthYear), ID(ID) { }

void Student::setName(std::string name)
{
    this->name = name;
}
std::string Student::getName()
{
    return name;
}

void Student::setBirthYear(size_t birthYear)
{
    this->birthYear = birthYear;
}

size_t Student::getBirthYear()
{
    return birthYear;
}

void Student::setID(size_t ID)
{
    this->ID = ID;
}
size_t Student::getID()
{
    return ID;
}