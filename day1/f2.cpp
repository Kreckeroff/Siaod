#include "Header.h"

void f2()
{
	int count = 0x0;
	int mask = 0xFFFFFFC3;
	std::bitset<32> result(count);
	std::bitset<32> resmask(mask);
	std::cout << "маска в двоичном ввиде: \n" << resmask << std::endl;
	std::cout << "число в двоичном ввиде: \n" << result << std::endl;
	result = ~result;
	std::cout << "число в двоичном ввиде после инверсии: \n" << result << std::endl;
	result = result & resmask;
	std::cout << "число с нулями с 5-го по 3 справа бита от него: \n" << result << std::endl;
}