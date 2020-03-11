#include "NoMoreConfigs.h"
#include "StringParser.h"
#include "Info/ClassInfo.h"
#include "Info/MemberInfo.h"
#include <vector>
#include <memory>

using namespace NMC;

bool NoMoreConfigs::Create(const std::string& inputFile, const std::string& outputDir)
{
    bool lReturnValue = false;
    std::vector<Info::ClassInfo> mClassInfos;
    lReturnValue = ReadFileData(inputFile, mClassInfos);
    
    return lReturnValue;
}

bool NoMoreConfigs::ReadFileData(const std::string& inputFullPath, std::vector<Info::ClassInfo>& classInfos)
{
    Info::ClassInfo classInfo(inputFullPath);
    
    return true;
}
