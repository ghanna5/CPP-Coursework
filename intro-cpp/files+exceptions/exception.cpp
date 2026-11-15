#include <iostream>
#include <stdexcept>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 0;

    try
    {
        if(b == 0) 
            throw 440;
            // throw std::runtime_error("ERROR: cannot divide by zero");

        else
            std::cout << a / b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    catch(int error)
    {
        std::cout << "ERROR: " << error << std::endl;
    }
    catch(const char * err)
    {
        std::cout << "ERROR: exception caught" << std::endl;
    }
    catch(...)
    {
        std::cout << "unexpected exception caught" << std::endl;
    }

    std::cout << "Program still continues after exception has been caught only if throw is inside a catch block" << std::endl;

    return 0;
}