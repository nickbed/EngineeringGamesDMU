#include <iostream>

#include "Funcs.h"

int main()
{
	int thing = 0;
	std::cout << std::hex << "0x" << GetAddress(&thing) << std::endl;
	system("pause");
	return 0;
}