#include <iostream>
#include <array>

// void printArraySize(int array[], size_t size)
// {
//     for (int i : array)
//     {
//         std::cout << i << std::endl;
//     }
// }

int main(int argc, char const *argv[])
{
    std::array<int, 5> a = {1};
    int s(225);

    for (size_t i(0); i < 20; ++i)
    {
        std::cout << a.at(i) << std::endl;
    }
    return 0;
}