#include <iostream>
#include <memory>

struct Person
{
    size_t ssn;
    std::string name;

    Person()
    {
        std::cout << "Created\n";
    }

    ~Person()
    {
        std::cout << "Deleted\n";
    }
};

Person* personfactory(size_t ssn, std::string name)
{
    Person* p{new Person};
    p->ssn = ssn;
    p->name = name;

    return p;
}

int main(int argc, char const *argv[])
{
    int* heapBound{new int{25}};
    int b{*heapBound};

    {
        std::unique_ptr<Person> person = std::make_unique<Person>(Person(148654895, "Franco"));

        std::cout << person->ssn << " - " << person->name << std::endl;
    }

    delete heapBound;

    return 0;
}