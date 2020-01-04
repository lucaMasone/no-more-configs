#pragma once

#include <string>

namespace nmc
{

class NoMoreConfigs
{
public:
    bool Create(const std::string& inputFile, const std::string& outputDir);
    
private:
    bool ReadFileData(const std::string& inputFullPath);
};

}
