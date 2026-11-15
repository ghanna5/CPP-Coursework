#include <iostream>
#include <iomanip>

void printPromt(std::string);
int getInput();
void processGrades();

int main(int argc, char const *argv[])
{
    processGrades();

    return 0;
}
void printPromt(std::string prompt)
{
    std::cout << prompt;
}
int getInput()
{
    int grade;
    std::cin >> grade;

    if(grade <-1 || grade > 100)
    {
        printPromt("Invalid value, value must be between -1 and 100: ");
        return getInput();
    }
    return grade;
}
/*
int getInput()
{
    int grade;

    while(true)
    {
        std::cin >> grade;
        if(grade >= -1 && grade <= 100) return grade;

        std::cout << "Invalid grade. Enter a value between 0 - 100 or -1 to stop: ";
    }
    return grade;
}
*/
void processGrades()
{
    size_t sum(0);
    int input(0);
    size_t count(0);

    while(true)
    {
        printPromt("Enter a grade between 0-100 (-1 to stop): ");
        input = getInput();

        if(input == -1) break;

        sum += input; // sum = sum + input
        ++count;
    }
    std::cout << std::setprecision(2) << std::fixed << "The average grade is:  "<< std::setw(21) << static_cast<double>(sum) / count << std::endl;
}