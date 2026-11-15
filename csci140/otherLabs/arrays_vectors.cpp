
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    cout << "Author: T. Vo" << endl << endl;

    int scores[10] = { 0 };
    int table1[3][2] = { { 1, 2},
                         {55, 7},
                         { 0 } };

    char name[30];
    int count = 100;
    int i;

    vector<int> iVect(5);
    vector<vector<int>> t2;

    for (i = 0; i < 10; i++)
        scores[i] = 100;

    cout << "scores[0]: " << scores[0] << endl;
    cout << "scores[9]: " << scores[9] << endl;
    //cout << "scores[10]: " << scores[10] << endl;
    //cout << "scores[1000]: " << scores[1000] << endl;
    // cout << "scores[10]: " << scores[10] << endl;
    // cout << i << endl;
    cout << "iVect[0]: " << iVect[0] << endl;
    cout << "iVect.at(0): " << iVect.at(0) << endl;
    // cout << "iVect[5]: " << iVect[5] << endl;
    // cout << "iVect.at(5): " << iVect.at(5) << endl;
    cout << "iVect.size(): " << iVect.size() << endl;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 2; c++)
            cout << table1[r][c] << " ";

        cout << endl;
    }
    cout << "table1[1][0]: " << table1[1][0] << endl;
    cout << "t2.size(): " << t2.size() << endl;

    t2.push_back(iVect);

    cout << "t2.at(0).size(): " << t2.at(0).size() << endl;

    strcpy(name, "Jane Smith");

    cout << "Enter a name: ";
    //cin >> name;
    cin.getline(name, 30);

    name[4] = 'x';
    cout << "name: " << name << endl;

    return 0;
}