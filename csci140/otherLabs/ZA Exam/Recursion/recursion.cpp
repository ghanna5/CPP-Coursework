#include <iostream>

using namespace std;

template<typename T>
T recursive(T x)
{
    if(x < 2)
        return 1;

    return (x * recursive(x - 1));
}

int main(int argc, char const * argv[])
{
    cout << recursive(5) << endl;
    cout << recursive(5.5) << endl;

    return 0;
}