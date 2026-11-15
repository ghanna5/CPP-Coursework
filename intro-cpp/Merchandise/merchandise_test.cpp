#include <iostream>

#include "merchandise.h"

int main(int argc, char const *argv[])
{
    Merchandise store1 = Merchandise("Walmart", 500, 12.99);

    store1.Information();

    store1.setCost(14.99);

    std::cout << "Due to inflation, the item is now worth " << store1.getCost() << std::endl;

    return 0;
}