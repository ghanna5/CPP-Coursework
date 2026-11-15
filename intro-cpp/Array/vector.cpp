#include <iostream>
#include <vector>

void PrintVector(const std::vector<double>& vect)
{
    // for (size_t i {0}; i < vect.size(); ++i)
    //     std::cout << vect.at(i) << ' ';

    for (const double& d : vect)
        std::cout << d << ' ';

    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,0};
    std::vector<double> d;

    for (size_t i = 0; i < 1000000; i++)
        d[i] = static_cast<double>(i);

    d.push_back(3.1415);

    PrintVector(d);

    return 0;
}