#include <iostream>

void printArray(const int* const array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << *(array + i) << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9};

    int i = 225;

    printArray(a, sizeof(a) / sizeof(int));

    std::cout << *a << std::endl;

    return 0;
}