#pragma once
#include <iostream>
#include <string>
#include <vector>

class fraction {
private:
    double _numerator;
    double _denominator;
public:
    fraction();

    fraction(double numerator, double denominator);

    void GetSum();

    void GetDiff();

    void GetDiv();

    void GetDivF();

    void GetMult();

    void GetDiffRev();

    void GetDivRev();

    void GetDivRevF();

    fraction operator+(fraction fr2);

    fraction operator-(fraction fr2);

    fraction operator*(fraction fr2);

    fraction operator/(fraction fr2);

    void GetFractionData();
};