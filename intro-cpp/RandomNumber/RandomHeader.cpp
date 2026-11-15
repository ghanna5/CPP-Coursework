#include <iostream>
#include <random>

int randRangePrec(int start, int end)
{
    std::random_device rd;
    std::default_random_engine rndEng(rd()); // use std::mt19937_64
    std::uniform_int_distribution<int> uniform_dist(start, end);

    return uniform_dist(rndEng);
}