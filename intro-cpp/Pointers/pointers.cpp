#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 20;
    int &b = a;
    ++a;

    int *c = &a;

    ++(*c);

    std::cout << *c << " " << b << std::endl;

    return 0;
}