#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double hours_worked;
    double hourly_rate;
    double salary;

    std::cout << "\nEnter hours worked (-1 to end): ";
    std::cin >> hours_worked;

    while(hours_worked != -1)
    {
        std::cout << "Enter hourly rate of the worker ($00.00): ";
        std::cin >> hourly_rate;

        if(hours_worked <= 40)
        {
            salary = hours_worked * hourly_rate;

            std::cout << "Salary is $" << std::fixed << std::setprecision(2) << salary << std::endl;
        }
        else
        {
            hours_worked -= 40;
            salary = (40 * hourly_rate) + (1.5 * hours_worked * hourly_rate);

            std::cout << "Salary is $" << std::fixed << std::setprecision(2) << salary << std::endl;
        }
        std::cout << "\nEnter hours worked (-1 to end): ";
    std::cin >> hours_worked;
    }
    return 0;
}