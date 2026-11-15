#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    double value;
    ifstream in_file;
    ofstream out_file;
    in_file.open("E:\\input.dat");
    out_file.open("E:\\output.txt");
    in_file >> name >> value;
    cout << "Name is " << name << " and value is " << value << endl;
    out_file << "Name is " << name << " value is" << value << endl;
    in_file.close();
    out_file.close();
    system("pause");
    return 0;
}