#pragma once
#ifndef RATIONAL_H// i just want to get use to them even tho i already ahve "pragma once" = bot of them
#define RATIONAL_H
class Rational
{

private:
	int numerator;//constructor will override these values but i can initialize rhem here as default
	int denominator;
	void red();//reduction

public:
	Rational(int num = 0, int den = 1);
	void add(const Rational &a);
	void sub(const Rational &a);
	void mul(const Rational &a);
	void divBy(const Rational &a);
	void toRationalString(); 
	void toDouble(); 

};
#endif

