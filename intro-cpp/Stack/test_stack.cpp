#include <iostream>

#include "stack.h"

int main(int argc, char const *argv[])
{
    std::string s{"this is a standard string"};

    Stack<char, 100> stack;

    for(const char& c : s)
        stack.push(c);

    while(!stack.empty())
        std::cout << stack.pop();
    std::cout << std::endl;

    return 0;
}