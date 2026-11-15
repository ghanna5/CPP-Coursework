#include <iostream>

int main(int argc, char const *argv[])
{
    char c;
    std::string s;
    c = std::cin.get();
    for(size_t i = {0}; i < 4; ++i)
    {
        std::cout << c << " ";
        std::cin.putback(c);
        c = std::cin.get();
    }

    std::cin >> s;

    std::cout << s << std::endl;

    return 0;
}