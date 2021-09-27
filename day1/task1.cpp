#include "Header.h"

int main(int argc,char **argv)
{
	(void)argc;
	(void)**argv;
	setlocale(LC_ALL, "Russian");
	bool boolean = true;
	do {
		int symbols;
		std::cout << "Для просмотра заданий введите номер задания (0-5)" << std::endl;
		std::cout << std::endl;
		std::cout << "№1 - 1 задание\n";
		std::cout << "№2 - 2 задание\n";
		std::cout << "№3 - 3 задание\n";
		std::cout << "№4 - 4 задание\n";
		std::cout << "№5 - 5 задание\n";
		std::cout << "№0 - выйти из программы \n\n";
		std::cout << "Введите число программы, которую хотите запустить.\n";
		symbols = Inputint(0, 5);
		switch (symbols) {
		case 1: {
			std::cout << "Вы выбрали 1 задание.\n";
			f1();
			break;

		}
		case 2: {
			std::cout << "Вы выбрали 2 задание.\n";
			f2();
			break;

		}
		case 3: {
			unsigned int count;

			std::cout << "Вы выбрали 3 задание.\n";
			std::cout << "Введите число в десятичной СС.\n";
			count = Inputint(0, 4294967295);
			std::bitset<32> binary_count(count);
			std::cout << "чиcло в двоичной СС:\n" << binary_count << std::endl;
			f3(binary_count);
			break;
		}
		case 4: {
			unsigned int count;

			std::cout << "Вы выбрали 4 задание.\n";
			std::cout << "Введите число в десятичной СС.\n";
			count = Inputint(0, 4294967295);
			std::bitset<32> binary_count(count);
			std::cout << "чиcло в двоичной СС:\n" << binary_count << std::endl;
			f4(binary_count);
			break;

		}
		case 5: {
			unsigned int count;
			int bit;
			std::cout << "Вы выбрали 5 задание.\n";
			std::cout << "Введите число в десятичной СС.\n";
			count = Inputint(0, 4294967295);
			std::bitset<32> binary_count(count);
			std::cout << "чиcло в двоичной СС:\n" << binary_count << std::endl;
			std::cout << "Введите бит, который хотите обнулить.\n";
			std::cin >> bit;
			f5(bit, binary_count);
			break;
		}
		case 0: {
			boolean = false;
			break;
		}

		}

	} while (boolean);
	return(0);
}