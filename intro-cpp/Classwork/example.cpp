#include <iostream>

class Example
{
public:
    Example();
    void incrementQty();
    int getItemQty();
private:
    int itemQty;
};

int main(int argc, char const *argv[])
{
    Example e;

    e.incrementQty();
    e.incrementQty();
    e.incrementQty();

    std::cout << e.getItemQty() << std::endl;

    return 0;
}

Example::Example() : itemQty{0} {}

void Example::incrementQty()
{
    ++itemQty;
}

int Example::getItemQty()
{
    return itemQty;
}