#include <iostream>

int main(int argc, char const *argv[])
{
    int i(10);
    int j(100);
    bool test(false);

    ((test) ? i : j) = 1000;
    std::cout << "i = " << i << ", j = " << j << std::endl;

    std::cout << (i > j ? i : j) << std::endl;

    return 0;
}