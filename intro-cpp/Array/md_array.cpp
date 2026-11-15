#include <iostream>
#include <array>

void printMDArray(char a[][4])
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        std::cout << a[i][j] << ' ';

        std::cout << std::endl;
    }
}

void printMDArray(const std::array<std::array<char, 4>, 2>& a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < a[0].size(); j++)
        std::cout << a[i][j] << ' ';

        std::cout << std::endl;
    }
   
}

int main(int argc, char const *argv[])
{
    char board[][4] = {'a','b','c','d', 'a','b','c','d'};

    std::array<std::array<char, 4>, 2> b = {'a','b','c','d', 'a','b','c','d'};

    printMDArray(b);
    printMDArray(board);

    return 0;
}