#include <string>

#ifndef MERCHANDISE_H
#define MERCHANDISE_H

class Merchandise
{
public:
    Merchandise(std::string, double, double);
    void setCost(double);
    void setItems(double);
    void setManufacturer(std::string);
    double getCost();
    double getItems();
    std::string getManufacturer();
    void Information();

private:
    double Cost;
    double Items;
    std::string Manufacturer;
};

#endif