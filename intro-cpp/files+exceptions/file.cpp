#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

int main(int argc, char const *argv[])
{
    std::string input;

    std::ofstream hello("somethingrando.txt", std::ios::out | std::ios::in | std::ios::app);
    std::ifstream goodbye("rando.txt", std::ios::out | std::ios::in);

    if(!hello)
        throw std::runtime_error("ERROR: could not open file");

    else 
    {
        std::cout << "file opened successfully" << std::endl;
        hello << "this is a trial." << std::endl; 

        hello.close();
    }

    if(!goodbye)
        throw std::runtime_error("ERROR: file not found");

    else
    {
        std::cout << "file opened successfully" << std::endl;
        std::cout << "Reading from file..." << std::endl;

        while(goodbye.good())
        {
            getline(goodbye, input);

            std::cout << input << std::endl;
        }

        goodbye.close();
    }

    return 0;
}