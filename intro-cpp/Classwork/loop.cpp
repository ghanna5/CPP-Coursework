#include <iostream>

int main(int argc, char const *argv[])
{
    int i(0);

    while(i < 10)
    {
        std::cout << i << ") \n";
        i++;
    }

std::cout << "\n";

    i = 0;
    do
    {
        std::cout << i++ << ") \n";
    } while (i < 5);

std::cout << "\n";

    for(;;)
    {
        if(i <= 5) break;
        std::cout << i++ << ") \n";
    }
    return 0;
}