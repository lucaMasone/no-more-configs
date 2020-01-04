#include "NoMoreConfigs.h"

#include <fstream>

using namespace nmc;

bool NoMoreConfigs::Create(const std::string& inputFile, const std::string& outputDir)
{
    bool lReturnValue = false;
    lReturnValue = ReadFileData(inputFile);
    return lReturnValue;
}

bool NoMoreConfigs::ReadFileData(const std::string& inputFullPath)
{
    std::ifstream lInputStream(inputFullPath);
    if(lInputStream.is_open() == false)
        return false;
    
    std::string lLine;
    while (getline(lInputStream, lLine)) {
        printf("%s", lLine.c_str());
    }
    lInputStream.close();
    
    return true;
}
