#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream file;
    string inputString;
    int num;
    int smallest;
    int temp;

    cout << "\nSorting file: ";
    cin >> inputString;

    file.open(inputString);

    if(!file.is_open())
        return 0;

    cout << "Number of values: ";
    cin >> num;

    int* array = new int[num];

    for (int i = 0; i < num; i++)
        file >> array[i];

    cout << "First 5 (Unsorted): ";
    for(int i = 0; i < 5; i++)
        cout << array[i] << " ";

    cout << "\nLast 5 (Unsorted): ";
    for (int i = (num - 5); i < num; ++i)
        cout << array[i] << " ";

    clock_t start = clock();

    for (int i = 0; i < num - 1; i++)
    {
        smallest = i;

        for (int j = (i + 1); j < num; j++)
        {
            if(array[j] < array[smallest]) 
                smallest = j;
        }

        temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }

    clock_t end = clock();

    cout << "\nFirst 5 (Sorted): ";
        for(int i = 0; i < 5; i++)
            cout << array[i] << " ";

    cout << "\nLast 5 (Sorted): ";
    for (int i = (num - 5); i < num; i++)
        cout << array[i] << " ";

    delete[] array;

    cout << "\nSort time: " << (double)(end - start) / CLOCKS_PER_SEC * 1000 << " ms\n" << endl;
    
    return 0;
}