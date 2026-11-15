#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string userInput;

    cout << "Enter your name: ";
    getline(cin, userInput);

    if (userInput.length() >= 10)
        cout << "Your username is too long." << endl;

    else
        cout << "Welcome " + userInput << endl;

    return 0;
}
