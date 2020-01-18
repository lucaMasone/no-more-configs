#pragma once

#include "Data/MemberInfo.h"

#include <string>
#include <memory>
#include <vector>

class ClassInfo final
{
public:
    ClassInfo(const std::string& name, std::vector<std::unique_ptr<IMemberInfo>> members):
        mName(name),
        mMembers(std::move(members))
    {
        
    }
    
    ~ClassInfo()
    {
        mMembers.clear();
    }
    
    ClassInfo(const ClassInfo& other) = delete;
    ClassInfo& operator=(const ClassInfo& other) = delete;
    
    std::string GetName() const
    {
        return mName;
    }
    
    
private:
    std::string mName;
    std::vector<std::unique_ptr<IMemberInfo>> mMembers;
};
