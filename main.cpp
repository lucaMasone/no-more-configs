#include "NoMoreConfigs.h"

int main()
{
    nmc::NoMoreConfigs lNoMoreConfigs;
    lNoMoreConfigs.Create(
                          "../../Resources/Data/TestClass.nmc",
                          "../../Resources/Output/");
    
	return 0;
}
