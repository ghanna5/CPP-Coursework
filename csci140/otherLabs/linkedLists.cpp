#include <iostream>

using namespace std;

class Node
{
public:
    Node(int val, Node* next = nullptr)
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

    void setNextNode(Node* next)
    {
        nextNode = next;
    }

    Node* getNextNode()
    {
        return nextNode;
    }

private:
    int value;
    Node* nextNode;
};

void printNode(Node* first)
{
    while(first != nullptr)
    {
        cout << first->getValue() << endl;
        first = first->getNextNode();
    }
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* last = new Node(5);

    head->setNextNode(second);
    second->setNextNode(third);
    third->setNextNode(fourth);
    fourth->setNextNode(last);
    last->setNextNode(nullptr);

    printNode(head);

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete last;

    return 0;
}