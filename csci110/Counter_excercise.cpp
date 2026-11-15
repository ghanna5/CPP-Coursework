#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    double price = 4.35;
    float cents = 100 * price;
    // Should be 100 * 4.35 = 435
    cout << cents << endl;
    // Prints 434!
    
    system("pause");
    return 0;
}