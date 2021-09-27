#include "Header.h"

void f5(int bit, std::bitset<32U> binary_count)
{
	int mask = 0x80000000;
	std::bitset<32>mask_result(mask);

	std::cout << "mask: \n" << mask_result << std::endl;
	mask_result = mask_result >> 32 - bit;
	mask_result = ~mask_result;
	binary_count = binary_count & mask_result;
	std::cout << "число в двоичном ввиде после обнуление n бита: \n" << binary_count << std::endl;
}