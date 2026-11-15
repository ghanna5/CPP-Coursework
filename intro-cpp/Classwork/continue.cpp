// IF STATEMENT

#include <iostream>

int main(int argc, char const *argv[])
{
    for(int i(0); i < 10; ++i)
    {
        if(i == 5) continue;
        std::cout << i << std::endl;
    }
    return 0;
}

// WHILE STATEMENT

#include <iostream>

int main(int argc, char const *argv[])
{
    int i(0);
    while(++i < 10)
    {
        if(i == 5) continue;
        std::cout << i << std::endl;
    }
    return 0;
}