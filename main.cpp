#include "NoMoreConfigs.h"

int main()
{
    NMC::NoMoreConfigs lNoMoreConfigs;
    lNoMoreConfigs.Create(
                          "../../Resources/Data/TestClass.nmc",
                          "../../Resources/Output/");
    
	return 0;
}
