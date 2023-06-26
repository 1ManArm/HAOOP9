#include "Complex.h"

Complex::Complex()
{
}

Complex::Complex(double z, double i) : _z(z), _i(i) {}

void Complex::operator+(Complex& complex)
{
	double z1 = _z + complex._z;
	double i1 = _i + complex._i;
	Complex com(z1, i1);
	com.PrintComplex();
}

void Complex::operator-(Complex& complex)
{
	double z1 = _z - complex._z;
	double i1 = _i - complex._i;
	Complex com(z1, i1);
	com.PrintComplex();
}

void Complex::operator*(Complex& complex)
{
	double z1 = (_z * complex._z) - (_i * complex._i);
	double i1 = (_i * complex._z) + (_z * complex._i);
	Complex com(z1, i1);
	com.PrintComplex();
}

void Complex::operator/(Complex& complex)
{
	double z1 = ((_z * complex._z) + (_i * complex._i)) / ((complex._z * complex._z) + (complex._i * complex._i));
	double i1 = ((_i * complex._z) - (_z * complex._i)) / ((complex._z * complex._z) + (complex._i * complex._i));
	Complex com(z1, i1);
	com.PrintComplex();
}

void Complex::PrintComplex()
{
	std::cout << _z << " + i(" << _i << ")\n";
}

