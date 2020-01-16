#pragma once

#include <string>
class IMemberInfo;

namespace NMC
{
    namespace StringParser
    {
        IMemberInfo* Parse(const std::string& string);
    }
}
