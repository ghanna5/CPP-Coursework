#include <iostream>

namespace mtsac{
    namespace mtsac{
        int k(40);
    }
    int j(1);
}
const int i(10); // global scope

int main(int argc, char const *argv[])
{
    int i(25);
    std::cout << i << std::endl;
    std::cout << ::i << std::endl;
    std::cout << mtsac::j << std::endl;
    std::cout << mtsac::mtsac::k << std::endl;

    return 0;
}