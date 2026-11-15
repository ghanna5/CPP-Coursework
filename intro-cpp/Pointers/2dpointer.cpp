#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 20;
    int* b = &a;
    int d = 25;
    int** c = &b;
    (*c)++;

    std::cout << a << " " << b << " " << *c << " " << d << std::endl;

    return 0;
}