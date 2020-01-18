#include "NoMoreConfigs.h"
#include "StringParser.h"
#include "Data/MemberInfo.h"
#include <fstream>
#include <vector>
#include <memory>

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
    std::vector<std::unique_ptr<IMemberInfo>> lMembers;
    while (getline(lInputStream, lLine))
    {
        lMembers.push_back(StringParser::Parse(lLine));
    }
    lInputStream.close();
    
    return true;
}
