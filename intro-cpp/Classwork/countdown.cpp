#include<iostream>

int main(int argc, char const *argv[])
{
//For loops
    for(int i = 10; i >=0; --i)
        std::cout << i << std::endl;

    for(int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
        std::cout << argc << std::endl;
    }

//Fibonacci Sequence
    int n{10};
    int l;
    int r;
    int t;

    for(size_t l{0}, r{1}, t; n >= 0; --n, t = l, l = l + r, r = t)
        std::cout << l << std::endl;
    
    return 0;
}