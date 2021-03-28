
#pragma once
#ifndef RATIONAL_H// i just want to get use to them even tho i already ahve "pragma once" = bot of them
#define RATIONAL_H
class RationalWithOverride
{

private:
	int numerator;//constructor will override these values but i can initialize rhem here as default
	int denominator;
	void red();//reduction

public:
	RationalWithOverride(int num = 0, int den = 1);
	RationalWithOverride operator+(const RationalWithOverride& c) const;
	RationalWithOverride operator-(const RationalWithOverride&) const;
	RationalWithOverride operator*(const RationalWithOverride&) const;
	RationalWithOverride operator/(const RationalWithOverride&) const;
	RationalWithOverride operator>(const RationalWithOverride&) const;
	RationalWithOverride operator<(const RationalWithOverride&) const;
	RationalWithOverride operator>=(const RationalWithOverride&) const;
	RationalWithOverride operator<=(const RationalWithOverride&) const;
	RationalWithOverride operator!=(const RationalWithOverride&) const;
	RationalWithOverride operator==(const RationalWithOverride&) const;
	//i keep these ones to compare later
	void add(const RationalWithOverride& a);
	void sub(const RationalWithOverride& a);
	void mul(const RationalWithOverride& a);
	void divBy(const RationalWithOverride& a);
	void toRationalWithOverrideString();
	void toDouble();

};
#endif
