#include <iostream>
#include <fstream>

void printUsage()
{
    std::cout << "Usage: fileCopy.exe <srcFilename> <dstFilename>\n";
}

void fileCopy(const std::string& srcFilename, const std::string& dstFilename)
{
    char buffer[4096];

    std::ifstream src(srcFilename, std::ios::in | std::ios::binary);
    if(!src) throw std::runtime_error("could not open src file");

    std::ofstream dst(dstFilename, std::ios::out | std::ios::binary);

    while(src)
    {
        src.read(buffer, sizeof buffer);

        dst.write(buffer, src.gcount());
    }

    src.close();
    dst.close();
}

int main(int argc, char const *argv[])
{
    // if(argc != 3)
    // {
    //     printUsage();
    //     exit(1);
    // }

    fileCopy("Car2.jpeg", "Car2.jpeg");

    return 0;
}