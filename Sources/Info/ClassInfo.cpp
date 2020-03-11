#include "Info/ClassInfo.h"
#include "StringParser.h"
#include <fstream>

using namespace NMC::Info;

bool ClassInfo::Init(const std::string& inputFullPath)
{
    std::ifstream lInputStream(inputFullPath);
    if(lInputStream.is_open() == false)
        return false;

    std::string lLine;
    while (getline(lInputStream, lLine))
    {
        mMembers.push_back(StringParser::Parse(lLine));
    }
    
    lInputStream.close();
    return true;
}
