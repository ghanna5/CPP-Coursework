#include <iostream>

void printMenu();
char getChoice();

int main(int argc, char const *argv[])
{
    printMenu();

    char c(getChoice());

    switch (c)
    {
        case 'a': case 'b': case 'c':
            std::cout << c << " was entered";
            break;

        case 'd':
            break;
    }
    return 0;
}
void printMenu()
{
    std::cout << "Main Menu\n"
              << "\ta) Average grads\n"
              << "\tb) store grades\n"
              << "\tc) Threaten Student\n"
              << "\td) Exit\n"
              << "Enter choice: ";
}
char getChoice()
{
    char c;
    while(true)
    {
        std::cin >> c;
        c = tolower(c);
        if(c >= 'a' && c <= 'd') return c;

        std::cout << "Invalid choice. Enter an option between A and D: ";
    }
}