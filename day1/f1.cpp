#include "Header.h"

void f1()
{
	int count = 0x0;
	int mask = 0x28002;
	std::bitset<32> result(count);
	std::bitset<32> resmask(mask);
	std::cout << "маска в двоичном ввиде: \n" << resmask << std::endl;
	std::cout << "число в двоичном ввиде: \n" << result << std::endl;
	result = ~result;
	std::cout << "число в двоичном ввиде после инверсии: \n" << result << std::endl;
	result = result & resmask;
	std::cout << "число с 1-цами в 17-ом, 15-ом, 1-ом разряде: \n" << result << std::endl;
}