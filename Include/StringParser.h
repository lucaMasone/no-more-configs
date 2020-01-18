#pragma once

#include <string>
class IMemberInfo;

namespace NMC
{
    namespace StringParser
    {
        std::unique_ptr<IMemberInfo> Parse(const std::string& string);
    }
}
