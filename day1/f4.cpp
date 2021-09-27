#include "Header.h"
void f4(std::bitset<32U> binary_count)
{
	int mult = 64;
	std::bitset<32> mult_result(mult);
	std::cout << "mult: \n" << mult_result << std::endl;
	while (mult_result != 1)
	{
		mult_result = mult_result >> 1;
		binary_count = binary_count >> 1;
	}
	std::cout << "чиcло в двоичной СС c сдвигом на 6 битов\n" << binary_count << std::endl;
}