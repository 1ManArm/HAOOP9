#pragma once
#include<iostream>

class Complex
{
private:
	double _z;
	double _i;
public:
	Complex();

	Complex(double z, double i);

	void operator+(Complex& complex);
	void operator-(Complex& complex);
	void operator*(Complex& complex);
	void operator/(Complex& complex);

	void PrintComplex();
};