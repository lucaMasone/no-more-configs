#include "StringParser.h"
#include "Data/MemberInfo.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <string>

constexpr char NMC_delimiter = ':';

using namespace NMC::StringParser;

namespace NMC
{
    namespace StringParser
    {
        namespace Utility
        {
            std::vector<std::string> Tokenize(const std::string& s, char delimiter)
            {
               std::vector<std::string> lTokens;
               std::string lToken;
               std::istringstream lTokenStream(s);
               while (std::getline(lTokenStream, lToken, delimiter))
               {
                  lTokens.push_back(lToken);
               }
               return lTokens;
            }
        }
    
        std::unique_ptr<IMemberInfo> Parse(const std::string& string)
        {
            std::vector<std::string> lTokens = Utility::Tokenize(string, NMC_delimiter);
            //I'll do a factory
            std::unique_ptr<IMemberInfo> lMemberInfo = nullptr;
            auto lMemberType = lTokens[0];
            auto lMemberName = lTokens[0];
            if (lTokens[0] == "bool")
            {
                auto lBoolData = std::make_unique<MemberData<bool>>();
                lMemberInfo = std::move(lBoolData);
            }
            else if (lTokens[0] == "int")
            {
                auto lIntData = std::make_unique<MemberData<int>>();
                lMemberInfo = std::move(lIntData);
            }
            else if (lTokens[0] == "float")
            {
                auto lFloatData = std::make_unique<MemberData<float>>();
                lMemberInfo = std::move(lFloatData);
            }
            else if (lTokens[0] == "double")
            {
                auto lDoubleData = std::make_unique<MemberData<double>>();
                lMemberInfo = std::move(lDoubleData);
            }
            else if (lTokens[0] == "string")
            {
                auto lStringData = std::make_unique<MemberData<std::string>>();
                lMemberInfo = std::move(lStringData);
            }
            lMemberInfo->mName = lMemberName;
            return lMemberInfo;
        }
    }
}
