#include "fractions.h"

fraction::fraction(double numerator, double denominator){
	_numerator = numerator;
	_denominator = denominator;
}

void fraction::GetSum()
{
	std::cout << _numerator << " + " << _denominator << " = " << _numerator + _denominator << std::endl;
}

void fraction::GetDiff()
{
	std::cout << _numerator << " - " << _denominator << " = " << _numerator - _denominator << std::endl;
}

void fraction::GetDiv()
{
	std::cout << _numerator << " / " << _denominator << " = " << _numerator / _denominator << std::endl;
}

void fraction::GetDivF()
{
	std::cout << _numerator << " / " << _denominator << " = " << int(_numerator) / int(_denominator) << std::endl;
}

void fraction::GetMult()
{
	std::cout << _numerator << " * " << _denominator << " = " << _numerator * _denominator << std::endl;
}

void fraction::GetDiffRev()
{
	std::cout << _denominator << " - " << _numerator << " = " << _denominator - _numerator << std::endl;
}

void fraction::GetDivRev()
{
	std::cout << _denominator << " / " << _numerator << " = " << _denominator / _numerator << std::endl;
}

void fraction::GetDivRevF()
{
	std::cout << _denominator << " / " << _numerator << " = " << int(_denominator) / int(_numerator) << std::endl;
}

