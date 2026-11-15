#include <iostream>

using namespace std;

class List
{
public:
    List(int val, List* next = nullptr)
    {
        value = val;
        nextNode = next;
    }

    void setValue(int val)
    {
        value = val;
    }

    int getValue()
    {
        return value;
    }

    void setNextNode(List* next)
    {
        nextNode = next;
    }

    List* getNextNode()
    {
        return nextNode;
    }

private:
    int value;
    List* nextNode;
};

void printList(List* value)
{
    while(value != nullptr)
    {
        cout << value->getValue() << endl;
        value = value->getNextNode();
    }
}

int main(int argc, char const *argv[])
{
    List* head = new List(2);
    List* first = new List(3);
    List* second = new List(4);

    head->setNextNode(first);
    first->setNextNode(second);
    second->setNextNode(nullptr);

    printList(head);

    delete head;
    delete first;
    delete second;
    
    return 0;
}