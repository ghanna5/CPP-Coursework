#include <iostream>
#include <fstream>
#include <sstream>

bool isDigit(char);
bool isValidNumber(const std::string&);
std::string getRawNumString(const std::string&);
void processNumber(const std::string&, const std::string &);

const std::string numMap[]{
    "",
    "",
    "ABC",
    "DEF",
    "GHI",
    "JKL",
    "MNO",
    "PQRS",
    "TUV",
    "VWXYZ"
};

int main(int argc, char const *argv[])
{
    // get number from cmdline
    std::string pnumber{argv[1]};
    std::string numString{};

    // validate number
    if(!isValidNumber(pnumber))
        std::cout << "That's an invalid number!!!\n";

    // process number
    numString = getRawNumString(pnumber);

    // write number to file
    processNumber(numString, pnumber);

    return 0;
}

bool isDigit(char d)
{
    short val{d - '0'};
    return (val >= 2 && val <= 9);
}

bool isValidNumber(const std::string& number)
{
    size_t i{0};
    if(number.length()!= 8) return false;

    for(; i < 3; ++i) if(!isDigit(number[i])) return false;

    if(number[i++] != '-') return false;

    for(; i < 8; ++i)if(!isDigit(number[i])) return false;

    return true;    
}

std::string getRawNumString(const std::string& number)
{
    std::stringstream ss;

    for (const char c : number)
        if(c != '-') ss << c;

    return ss.str();    
}

void processNumber(const std::string& number, const std::string & filename)
{
    size_t count{8};
    std::ofstream dst(filename);

    const std::string& one{numMap[number[0] - '0']};
    const std::string& two{numMap[number[1] - '0']};
    const std::string& three{numMap[number[2] - '0']};
    const std::string& four{numMap[number[3] - '0']};
    const std::string& five{numMap[number[4] - '0']};
    const std::string& six{numMap[number[5] - '0']};
    const std::string& seven{numMap[number[6] - '0']};

    for(char a : one)
    for(char b : two)
    for(char c : three)
    for(char d : four)
    for(char e : five)
    for(char f : six)
    for(char g : seven)
    {
        --count;
        dst << a << b << c << d << e << f << g << " ";
        if(!count)
        {
            dst << "\n";
            count = 8;
        }
    }
}