#include "StringParser.h"
#include <vector>
#include <sstream>
#include <iostream>

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
    
        void Parse(const std::string& string)
        {
            std::vector<std::string> lTokens = Utility::Tokenize(string, NMC_delimiter);
            std::for_each(lTokens.begin(), lTokens.end(), [](const std::string& token){ std::cout << token << std::endl; });
        }
    }
}
