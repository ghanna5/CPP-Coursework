#ifndef CLASSES_H
#define CLASSES_H

#include <string>
#include <fstream>

using namespace std;

class Classes
{
public:
    Classes();
    Classes(string name, int id);
    void setName(string name);
    string getName() const;
    void setID(int id);
    int getID() const;
    void print();
    bool operator==(const Classes& r);
    friend ostream& operator<<(ostream& COUT, const Classes& r);

private:
    string Name;
    int ID;
};

#endif