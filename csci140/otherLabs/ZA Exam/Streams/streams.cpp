#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array1[50];
    int array2[50];
    ofstream outfile;
    ifstream infile;

    outfile.open("medium10k.txt");
    infile.open("medium50k.txt");

    if(!infile.is_open())
    {
        cout << "Could not open file 50" << endl;
        return 0;
    }

    if(!outfile.is_open())
    {
        cout << "Could not open file 10" << endl;
        return 0;
    }

    for(int i = 0; i < 50; i++)
        infile >> array1[i];

    for(int i = 0; i < 50; i++)
        cout << array1[i] << " ";

    for(int i = 0; i < 50; i++)
        outfile << (i + 1) << endl;

    infile.close();
    outfile.close();

    return 0;
}