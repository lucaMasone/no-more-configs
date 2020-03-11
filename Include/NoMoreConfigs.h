#pragma once

#include <string>

namespace NMC
{
    namespace Info
    {
        class ClassInfo;
    }

    class NoMoreConfigs
    {
    public:
        bool Create(const std::string& inputFile, const std::string& outputDir);
        
    private:
        bool ReadFileData(const std::string& inputFullPath, std::vector<Info::ClassInfo>& classInfos);
    };
}
