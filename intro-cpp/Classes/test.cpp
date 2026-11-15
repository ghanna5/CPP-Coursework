#include <iostream>

#include "student_class.h"
#include "name.h"

int main(int argc, char const *argv[])
{
    Student s{{"Jane", " ", "Doe"}, 85562};
    Student j{{"John", " ", "Doe"}, 85563};

    std::cout << "Student s's name is: " << s.getName() << " with id: " << s.getId() << std::endl;

    return 0;
}