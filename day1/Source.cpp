#include "Header.h"

unsigned int Inputint(int m, unsigned int M) {
    for (;;) {
        unsigned int valuea;
        std::cout << "Введите число. \n";
        if ((std::cin >> valuea).good() && (m <= valuea) && (valuea <= M) && (floor(valuea) == valuea)) {
            return valuea;
            break;
        }
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "Неверный ввод, повторите. \n";

        }
        else {
            std::cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
}
