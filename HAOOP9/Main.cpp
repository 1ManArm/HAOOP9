#include <iostream>
#include <string>
#include <vector>
#include "fractions.h"



int main() {
	setlocale(LC_ALL, "Russian");

    std::cout << "Задача с дробями. Первый день догонялок.\n";

    fraction fr1(7, 21);
    fraction fr2(65, 13);
    fr1.GetDiv();
    fr1.GetDivRev();
    std::cout << std::endl;
    fr1.GetDivF();
    fr1.GetDivRevF();

    std::cout << std::endl;

    fr2.GetDiv();
    fr2.GetDivRev();
    std::cout << std::endl;
    fr2.GetDivF();
    fr2.GetDivRevF();

	return 0;
}