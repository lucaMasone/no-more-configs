#pragma once

#include <string>

class IMemberInfo
{
    std::string mName;
};

template<typename T>
class MemberData : public IMemberInfo
{
    T mValue;
};

