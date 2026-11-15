#include <iostream>
#include <fstream>

#include "classes.h"

using namespace std;

Classes::Classes()
{
    Name = "NoName";
    ID = 0;
}

Classes::Classes(string name, int id)
{
    Name = name;
    ID = id;
}

void Classes::setName(string name)
{
    Name = name;
}

string Classes::getName() const
{
    return Name;
}

void Classes::setID(int id)
{
    ID = id;
}

int Classes::getID() const
{
    return ID;
}

void Classes::print()
{
    cout << "Name: " << Name << endl;
    cout << "ID: " << ID <<endl;
}

bool Classes::operator==(const Classes& r)
{
    return (Name == r.Name && ID == r.ID);
}
ostream& operator<<(ostream& COUT, const Classes& r)
{
    COUT << r.getName() << " " << r.getID();

    return COUT;
}