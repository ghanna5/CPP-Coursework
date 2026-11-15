#include <iostream>
#include <array>

template<typename T, size_t S>
void printArray(const std::array<T, S>& array)
{
    std::cout << "[ ";
    for (const T& i : array) // Range-Based for loop
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}

template<typename T, size_t S>
void printArray(const T array[])
{
    std::cout << "[ ";
    for (size_t i = 0; i < S; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::array<int, 10> a = {1,2,3,4,5,6,7,8,9,0};
    int b[] = {1,2,3,4,5,6,7,8,9,0};

    printArray<int, 10>(a);
    printArray<int, 10>(b);

    return 0;
}