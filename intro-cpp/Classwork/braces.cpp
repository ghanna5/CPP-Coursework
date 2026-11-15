#include <iostream>

void printInt()
{
    int val1(10);
    std::cout << val1 << std::endl;
    {
        int val1(55);
        std::cout << val1 << std::endl;
        val1 = val1 + 1;
        std::cout << val1 << std::endl;
    }
    std::cout << val1 << std::endl;
}
int main(int argc, char const *argv[])
{
    printInt();

    return 0;
}