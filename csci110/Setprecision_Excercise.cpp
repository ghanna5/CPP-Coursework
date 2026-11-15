#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Please enter your last three test scores: " << endl;
    float s1;
    float s2;
    float s3;
    cin >> s1 >> s2 >> s3;
    double average = (s1 + s2 + s3) / 3;
    cout << "Your average score is " << fixed << setprecision(2) << average << endl;

    double r = sqrt (2.0);
    const double EPSILON = 1E-14;
    if (fabs(r * r == 2) < EPSILON)
    {
        cout << "sqrt (2) squared is approximately equal to 2" << endl;
    }
    else
    {
        cout << "sqrt (2) squared is not 2 but "
            << setprecision (18) << r * r << endl;
    }

    return 0;
}