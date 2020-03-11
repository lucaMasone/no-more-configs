#pragma once

#include "Info/MemberInfo.h"

#include <string>
#include <memory>
#include <vector>

namespace NMC {
    namespace Info{
        class ClassInfo final
        {
        public:
            ClassInfo(const std::string& inputFullPath)
            {
                Init(inputFullPath);
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
            bool Init(const std::string& inputFullPath);
            
            std::string mName;
            std::vector<std::unique_ptr<IMemberInfo>> mMembers;
        };
    }
}
