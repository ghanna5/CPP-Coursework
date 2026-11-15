#include <iostream>

class Student
{
public:
    Student();
    Student(std::string name, size_t birthYear, size_t ID);
    void setName(std::string name);
    std::string getName();
    void setBirthYear(size_t birthYear);
    size_t getBirthYear();
    void setID(size_t ID);
    size_t getID();
private:
    std::string name;
    size_t birthYear;
    size_t ID;
};