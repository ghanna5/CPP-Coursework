#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    int rand1, rand2, sum;
    int num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 = 0, num11 = 0, num12 = 0;
    int storedDice[11];

    srand(time(NULL));

    for (int i = 1; i <= 600000; i++)
    {
        rand1 = (1 + rand() % 7);
        rand2 = (1 + rand() % 7);

        sum = rand1 + rand2;

        switch (sum)
        {
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 4:
                num4++;
                break;
            case 5:
                num5++;
                break;
            case 6:
                num6++;
                break;
            case 7:
                num7++;
                break;
            case 8:
                num8++;
                break;
            case 9:
                num9++;
                break;
            case 10:
                num10++;
                break;
            case 11:
                num11++;
                break;
            case 12:
                num12++;
                break;
        }
    }

    storedDice[0] = num2;
    storedDice[1] = num3;
    storedDice[2] = num4;
    storedDice[3] = num5;
    storedDice[4] = num6;
    storedDice[5] = num7;
    storedDice[6] = num8;
    storedDice[7] = num9;
    storedDice[8] = num10;
    storedDice[9] = num11;
    storedDice[10] = num12;

    cout << setw(5) << "Sum" << setw(5) << "Total" << setw(5) << "Expected" << setw(5) << "Actual" << endl;

    for (int i = 0; i <= 10; i++)
        cout << i + 2 << "     " << storedDice[i] << endl;

    return 0;
}