#pragma once

#include "Info/MemberInfo.h"

#include <string>

namespace NMC
{
    namespace StringParser
    {
        std::unique_ptr<IMemberInfo> Parse(const std::string& string);
    
        std::string RemoveFileExtension(const std::string& filename);
    }
}
