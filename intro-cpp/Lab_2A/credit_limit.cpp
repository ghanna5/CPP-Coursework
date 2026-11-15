#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int account_num;
    double beginning_balance;
    double total_charges;
    double total_credits;
    double limit;
    double new_balance;

    std::cout << "\nEnter account number (-1 to end): ";
    std::cin >> account_num;

    while(account_num != -1)
    {
        std::cout << "Enter beginning balance: "; 
        std::cin >> beginning_balance;

        std::cout << "Enter total charges: "; 
        std::cin >> total_charges;;

        std::cout << "Enter total credits: "; 
        std::cin >> total_credits;

        std::cout << "Enter credit limit: "; 
        std::cin >> limit;

        new_balance = beginning_balance + total_charges - total_credits;

        if(new_balance <= limit)
        {
            std::cout << "New balance is: " << std::fixed << std::setprecision(2) << new_balance << std::endl;
        }
        else
        {
            std::cout << "New balance is: " << std::fixed << std::setprecision(2) << new_balance << std::endl;
            std::cout << "Accout:         " << std::fixed << std::setprecision(2) << account_num << std::endl;
            std::cout << "Credit limit:   " << std::fixed << std::setprecision(2) << limit << std::endl;
            std::cout << "Balance:        " << std::fixed << std::setprecision(2) << new_balance << std::endl;
            std::cout << "Credit limit exceeded." << std::endl;
        }
        std::cout << "\nEnter account number (-1 to end): ";
        std::cin >> account_num;
    }
    return 0;
}