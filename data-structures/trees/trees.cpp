#include <iostream>
#include <vector>

int search(std::vector<int>& mass, int target)
{
    size_t left = 0;
    size_t right = (mass.size() - 1);
    size_t middle = ((left + right) / 2);

    while(left <= right)
    {
        middle = ((left + right) / 2);

        if(mass[middle] == target)
            return middle;

        if(mass[middle] < target)
            left = (middle + 1);

        if(mass[middle] > target)
            right = (middle - 1);
    }

    return middle;