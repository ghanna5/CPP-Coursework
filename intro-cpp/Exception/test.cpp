#include <iostream>

#include "errors.h"

void testException()
{
    throw TestException("this exception 1");
}

void testException2()
{
    throw TestException2("this exception 2");
}

int main(int argc, char const *argv[])
{
    try
    {
        testException();
        testException2();
    }
    catch(const TestException&)
    {
        std::cerr << "caught testexcept1" << "\n";
    }
    catch(const TestException2&)
    {
        std::cerr << "caught testexcept2" << "\n";
    }    
   
    return 0;
}