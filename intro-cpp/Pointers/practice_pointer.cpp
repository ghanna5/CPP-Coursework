#include <iostream>
#include <array>

int printPtrArray(const int* const array, int size);
int printUnsizedArray(int array[], int size);
int printSizedArray(int array[10]);
int printCstdArray(std::array<int, 10>&array);
void printReference(int &x);
int printPtr(int* x);

int main(int argc, char const *argv[])
{
    std::array<int, 10>C_array = {1,2,3,4,5,6,7,8,9,0};
    int array1[10] = {1,2,3,4,5,6,7,8,9,0};
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    int size = 10;
    int value = 5;
    int* a = &value;

    printPtrArray(array, size);
    printUnsizedArray(array, size);
    printSizedArray(array1);
    printCstdArray(C_array);

    std::cout << size << std::endl;
    std::cout << value << std::endl;

    printReference(size);
    printPtr(a);
    
    return 0;
}

int printPtrArray(const int* const array, int size)
{
    for(int values = 0; values < size; values++)
        std::cout << (array[values]) << " ";

    std::cout << std::endl;
}

int printUnsizedArray(int array[], int size)
{
    for(int values = 0; values < size; values++)
        std::cout << array[values] << "-";

    std::cout << std::endl;
}

int printSizedArray(int array[10])
{
    for(int values = 0; values < 10; values++)
        std::cout << array[values] << " - ";

    std::cout << std::endl;
}

int printCstdArray(std::array<int, 10>&array)
{
    for(int i = 0; i < 10; i++)
        std::cout << array.at(i) << "   ";

    std::cout << std::endl;
}

void printReference(int &x)
{
    x = 5;
    x++;

    std::cout << x << std::endl;
}

int printPtr(int* x)
{
    *x = 15;
    (*x)++;

    std::cout << *x << std::endl;
}