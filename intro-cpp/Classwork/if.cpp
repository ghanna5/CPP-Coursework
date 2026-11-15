#include <iostream>

int main(int argc, char const *argv[])
{
    bool something(10 > 20);
   
    if (something)
    {
        std::string str("Hello!\n");
        std::cout << str << std::endl;
    }
    else
    {
        std::string str("Goodbye!\n");
        std::cout << str << std::endl;
    }

    return 0;
}