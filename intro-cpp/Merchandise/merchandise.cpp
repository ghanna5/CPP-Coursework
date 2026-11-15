#include <iostream>
#include <string>

#include "merchandise.h"

Merchandise::Merchandise(std::string manufacturer, double items, double cost)
{
    Manufacturer = manufacturer;
    Items = items;
    Cost = cost;
}

void Merchandise::Information()
{
    std::cout << "Manufacturer = " << Manufacturer << std::endl;
    std::cout << "Items = " << Items << std::endl;
    std::cout << "Cost = " << Cost << std::endl;
}

void Merchandise::setCost(double cost)
{
    Cost = cost;
}

void Merchandise::setItems(double items)
{
    Items = items;
}

void Merchandise::setManufacturer(std::string manufacturer)
{
    Manufacturer = manufacturer;
}

double Merchandise::getCost()
{
    return Cost;
}

double Merchandise::getItems()
{
    return Items;
}

std::string Merchandise::getManufacturer()
{
    return Manufacturer;
}