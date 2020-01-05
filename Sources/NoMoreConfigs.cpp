#include "NoMoreConfigs.h"

#include "StringParser.h"

#include <fstream>

using namespace NMC;

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
        StringParser::Parse(lLine);
    }
    
    lInputStream.close();
    
    return true;
}
