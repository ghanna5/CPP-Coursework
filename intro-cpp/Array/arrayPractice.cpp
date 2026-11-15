#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<int, 2> hello = {1,2};

    std::cout << hello[1] << std::endl;

    int yolo[5]={7,2,23,4,34};

    std::cout << yolo[3] << std::endl;

    return 0;
}