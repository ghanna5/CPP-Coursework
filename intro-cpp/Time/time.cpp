#include <iostream>
#include <iomanip>

#include "time.h"

int main(int argc, char const *argv[])
{
    Time t1(18, 22, 9);

    t1.setTime(18, 22, 9);

    std::cout << "The time is: ";
    t1.printStandard();

// MORE TRIALS
    
    Time t(3, 4, 5);

    t.printStandard();
    std::cout << std::endl;

    t.printUniversal();
    std::cout << std::endl;

    t.setTime(99, 3, 4);

    t.printUniversal();
    std::cout << std::endl;

// EVEN MORE TRIALS

    Time clock(11, 22, 43);
    Time *clockPtr = &clock;

    clockPtr->printUniversal();

    return 0;
}