#include <iostream>
#include <functional>

size_t fact(unsigned int n)
{
    if (n == 0) return 1;
    return n * fact(n - 1);
}

void processN(unsigned int n, size_t (*process)(unsigned int))
{
    std::cout << process(n) << std::endl;
}

void processNCorrectly(unsigned int n,std::function<size_t(unsigned int)> process)
{
    std::cout << process(n) << std::endl;
}

int main(int argc, char const *argv[])
{
    processNCorrectly(8, fact);

    return 0;
}