#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int temp;
    int smallest;
    int value;
    int middle;
    int target;
    int left;
    int right;
    int found = -1;

    cout << "\nEnter a number for selection sorting: ";
    cin >> num;

    int array[num];

    cout << "\nEnter the elements: ";

    for (int i = 0; i < num; i++)
        cin >> array[i];

    cout << "\nUnsorted: ";

    for (int i = 0; i < num; i++)
        cout << array[i] << " ";

    for(int i = 0; i < num - 1; i++)
    {
        smallest = i;

        for(int j = i + 1; j < num; j++)
        {
            if(array[j] < array[smallest])
                smallest = j;
        }

        temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }

    cout << "\nSorted: ";

    for(int i = 0; i < num; i++)
        cout << array[i] << " ";

    cout << "\n" << endl;

    cout << "Enter a number for binary searching: ";
    cin >> value;

    cout << "Enter a number to search for: ";
    cin >> target;

    int binArray[value];

    cout << "\nEnter the elemnts of the array: ";

    for(int i = 0; i < value; i++)
    cin >> binArray[i];

    cout << "Your array: ";

    for (int i = 0; i < value; i++)
        cout << binArray[i] << " ";

    cout <<  "\n" << endl;

    left = 0;
    right = value - 1;

    while(left <= right)
    {
        middle = ((left + right) / 2);

        if(binArray[middle] == target)
        {
            found = middle;
            break;
        }

        else if(binArray[middle] > target)
            right = middle - 1;

        else
            left = middle + 1;        
    }

    if (found == -1)
        cout << "Target not found" << endl;
    else
        cout << "Found " << target << " at index " << found << endl;

    return 0;
}