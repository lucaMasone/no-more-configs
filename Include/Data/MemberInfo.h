#pragma once

#include <string>

//ToDo:
// -getter and setter

class IMemberInfo
{
public:
    IMemberInfo() = default;
    ~IMemberInfo() = default;
    
    std::string mName;
};

template<typename T>
class MemberData : public IMemberInfo
{
public:
    T mValue;
};

