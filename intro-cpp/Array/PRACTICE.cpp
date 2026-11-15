#include <iostream>
#include <iomanip>

void mystery();

int main(int argc, char const *argv[])
{
    int i;
    int values[10] = {4, 1, 1, 3, 4, 9, 9, 2, 1, 7};
    
    std::cout << "Elemnt" << std::setw(13) << "Value" << std::endl;

    for (i = 0; i < 10; i++)
        std::cout << std::setw(7) << i << std::setw(13) << values[i] << std::endl;
    
// NEXT ONE

    char string1[] = "How are you?";

    std::cout << "string1 is: " << string1 << std::endl;

    for (int i = 0; string1[i] != '\0'; i++)
        std::cout << string1[i] << "_";

// NEXT ONE

    std::cout << "First call to mystery:\n";
    mystery();

    std::cout << "\n\nSecond call to mystery:\n";
    mystery();
    std::cout << std::endl;   

// NEXT ONE

    int array[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

void mystery()
{
    static int array1[3];
    int i;

    std::cout << "\nValues on entering mystery:\n";

    for (i = 0; i < 3; i++)
        std::cout << "array1[" << i << "] = " << array1[i] << " ";

    std::cout << "\nvalues on exiting mystery:\n";

    for (i = 0; i < 3; i++)
        std::cout << "array1[" << i << "] = " 
                  << (array1[i] += 2) << " ";
}