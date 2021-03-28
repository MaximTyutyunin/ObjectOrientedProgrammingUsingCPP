#include "RationalWithOverride.h"
#include<iostream>
using namespace std;

RationalWithOverride::RationalWithOverride(int num, int den)
{
	if (!den <= 0) {
	numerator = num;
	denominator = den;
	red();
	}
	else {
		cout <<this<< " the denominator s wrong"<<endl;
	}
}

RationalWithOverride RationalWithOverride::operator+(const RationalWithOverride& a) const
{
	RationalWithOverride r;
	r.numerator = a.numerator * denominator;
	r.numerator += a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	return r;
}

RationalWithOverride RationalWithOverride::operator-(const RationalWithOverride& a) const
{
	RationalWithOverride r;
	r.numerator = a.numerator * denominator;
	r.numerator -= a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	return r;
}

RationalWithOverride RationalWithOverride::operator*(const RationalWithOverride& a) const
{
	RationalWithOverride r;
	r.numerator = a.numerator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	return r;
}

RationalWithOverride RationalWithOverride::operator/(const RationalWithOverride& a) const
{
	RationalWithOverride r;
	r.numerator = a.denominator * numerator;
	r.denominator = denominator * a.numerator;
	r.red();
	return r;
}

RationalWithOverride RationalWithOverride::operator>(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 > f2) {
		return true;
	}
	else {
		return false;
	}
}

RationalWithOverride RationalWithOverride::operator<(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 < f2) {
		return true;
	}
	else {
		return false;
	}
}

RationalWithOverride RationalWithOverride::operator>=(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 >= f2) {
		return true;
	}
	else {
		return false;
	}
}

RationalWithOverride RationalWithOverride::operator<=(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 <= f2) {
		return true;
	}
	else {
		return false;
	}
}

RationalWithOverride RationalWithOverride::operator!=(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 != f2) {
		return true;
	}
	else {
		return false;
	}
}

RationalWithOverride RationalWithOverride::operator==(const RationalWithOverride& a) const
{
	double f1 = numerator / double(denominator);
	double f2 = a.numerator / double(a.denominator);
	if (f1 == f2) {
		return true;
	}
	else {
		return false;
	}
}

void RationalWithOverride::add(const RationalWithOverride& a)
{
	RationalWithOverride r;
	r.numerator = a.numerator * denominator;
	r.numerator += a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	r.toRationalWithOverrideString();

}

void RationalWithOverride::sub(const RationalWithOverride& a)
{
	RationalWithOverride r;
	r.numerator = a.numerator * denominator;
	r.numerator -= a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	r.toRationalWithOverrideString();
}

void RationalWithOverride::mul(const RationalWithOverride& a)
{
	if (a.numerator == 0 || numerator == 0) {
		cout << 0 << endl;
	}
	else {
		RationalWithOverride r;
		r.numerator = a.numerator * numerator;
		r.denominator = a.denominator * denominator;
		r.red();
		r.toRationalWithOverrideString();
	}
}

void RationalWithOverride::divBy(const RationalWithOverride& a)
{
	if (numerator == 0) {
		cout << 0 << endl;
	}
	else if (a.numerator == 0) {
		cout << "Divison by zero detected" << endl;
	}
	else {
		RationalWithOverride r;
		r.numerator = a.denominator * numerator;
		r.denominator = denominator * a.numerator;
		r.red();
		r.toRationalWithOverrideString();
	}
}





void RationalWithOverride::toRationalWithOverrideString()
{
	if (denominator == 0) {
		cout << "Divison by zero" << endl;
	}
	else {
		cout << numerator << '/' << denominator << endl;
	}
}

void RationalWithOverride::toDouble()
{
	double d = 0;
	cout << numerator * 1.00 / denominator << endl;//or static_cast<double>(numerator)
}

void RationalWithOverride::red()
{
	{
		int greatest;
		greatest = numerator > denominator ? numerator : denominator;


		int gcd = 0;
		for (int i = 2; i <= greatest; i++) {
			if (numerator % i == 0 && denominator % i == 0)
				gcd = i;
		}

		if (gcd != 0)
		{
			numerator /= gcd;
			denominator /= gcd;
		}
	}
}

RationalWithOverride::RationalWithOverride(int num, int den)
{
}
