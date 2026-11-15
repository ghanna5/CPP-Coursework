#include <iostream>

// Class is not necessary
enum Status
{
    WIN = 25,
    LOSS = 14,
    DRAW = 132'000'000
};
void printState(Status);

int main(int argc, char const *argv[])
{
    printState(Status::WIN);

    return 0;
}
void printState(Status s)
{
    switch (s)
    {
    case Status::WIN:
        std::cout << "You've won!!!";
        break;
    case Status::LOSS:
        std::cout << "You've lost!!!";
    default:
        std::cout << "it's a tie!!!";
        break;
    }
}