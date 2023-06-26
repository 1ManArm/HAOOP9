#include <iostream>
#include <string>
#include <vector>
#include "fractions.h"
#include "complex.h"



int main() {
	setlocale(LC_ALL, "Russian");

    std::cout << "Задача с дробями. Первый день догонялок.\n";

	fraction fr1(3.0, 5.0);
	fraction fr2(1.0, 2.0);
	fraction fr3;

	std::cout << "Начальные значения дробей:\n\n";

	fr1.GetFractionData();
	fr2.GetFractionData();

	std::cout << "________________________\n\n";

	std::cout << "Результат сложения дробей:\n\n";
	fr3 = fr1 + fr2;
	fr3.GetFractionData();
	std::cout << "________________________\n\n";

	std::cout << "Результат вычитания дробей:\n\n";
	fr3 = fr1 - fr2;
	fr3.GetFractionData();

	std::cout << "________________________\n\n";

	std::cout << "Результат умножения дробей:\n\n";
	fr3 = fr1 * fr2;
	fr3.GetFractionData();

	std::cout << "________________________\n\n";

	std::cout << "Результат деления дробей:\n\n";
	fr3 = fr1 / fr2;
	fr3.GetFractionData();
	std::cout << "________________________\n\n";

	std::cout << "Примеры комплексных чисел:\n\n";

	Complex complex1(5, 3);
	Complex complex2(4, 8);
	complex1 + complex2;
	complex1 - complex2;
	complex1* complex2;
	complex1 / complex2;

	return 0;
}