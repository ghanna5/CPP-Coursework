#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "monte_carlo_sim.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    size_t faces[6];

    for(size_t i(0); i < TEST_COUNT; ++i)
        ++faces[randRange(0, FACE_COUNT - 1)];

    printSimResult(faces);

    return 0;
}
size_t randRange(size_t start, size_t end)
{
    return (rand() % (end - start + 1)) + start;
}
void printSimResult(size_t array[])
{
    std::cout << std::setprecision(1) << std::fixed;

    std::cout << std::left << std::setw(6) << "Face"
              << std::right << std::setw(16) << "\% of Occurences\n";
    for(size_t i(0); i < FACE_COUNT; ++i)
    {
        std::cout << std::left << std::setw(6) << i + 1
                  << std::right << std::setw(16)
                  << static_cast<double>(array[i]) / TEST_COUNT * 100 
                  << std::endl;
    }
}