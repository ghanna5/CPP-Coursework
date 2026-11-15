#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int x;

    try
    {
        cout << "Enter a value: ";
        cin >> x;

        if((x % 2) != 0)
            throw runtime_error("Not divisible by 2");

        if(x >= 10)
            throw logic_error("Greater than or equal to 10");

        cout << x << " is divisible by 2 and is less than 10" << endl;
    }

    catch(runtime_error& e)
    {
        cout << "Error 404: " << e.what() << endl;
    }

    catch(logic_error& e)
    {
        cout << "Error 401: " << e.what() << endl;
    }

    return 0;
}