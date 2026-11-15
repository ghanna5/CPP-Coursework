#include <iostream>
#include <iomanip>

using namespace std;

void monthlySales(double array[], int size);
double totalSales(double array[], int size, double &sum);

int main(int argc, char const *argv[])
{
    int size;
    double sum = 0;
    double average = 0;

    cout << "Please enter the number of monthly sales --> ";
    cin >> size;

    double *array = new double[size];

    monthlySales(array, size);
    totalSales(array, size, sum);

    average = (sum / size);

    cout << "Total sales: $" << fixed << setprecision(2) << sum << endl;
    cout << "Average monthly sales: " << fixed << setprecision(2) << average << endl;

    cout << "Returning dynamic memory..." << endl;

    delete[] array;

    cout << "Done." << endl;

    return 0;
}

void monthlySales(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Please input the sales for month " << (i + 1) << " --> ";
        cin >> array[i];
    }
}

double totalSales(double array[], int size, double &sum)
{
    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum;
}