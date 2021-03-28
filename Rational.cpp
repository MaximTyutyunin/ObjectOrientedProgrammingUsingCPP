#include<iostream>
#include "Rational.h"
using namespace std;

Rational::Rational(int num, int den)
{
	numerator = num;
	denominator = den;
	red();
}

void Rational::add(const Rational& a)
{
	Rational r;
	r.numerator = a.numerator * denominator;
	r.numerator += a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	r.toRationalString();
	
}


void Rational::sub(const Rational& a)
{
	Rational r;
	r.numerator = a.numerator * denominator;
	r.numerator -= a.denominator * numerator;
	r.denominator = a.denominator * denominator;
	r.red();
	r.toRationalString();
}

void Rational::mul(const Rational& a)
{
	if (a.numerator == 0 || numerator == 0) {
		cout << 0 << endl;
	}
	else {
		Rational r;
		r.numerator = a.numerator * numerator;
		r.denominator = a.denominator * denominator;
		r.red();
		r.toRationalString();
	}
}

void Rational::divBy(const Rational& a)
{
	if (numerator == 0 ) {
		cout << 0 << endl;
	}
	else if(a.numerator == 0){
		cout << "Divison by zero detected" << endl;
	}
	else {
		Rational r;
		r.numerator = a.denominator * numerator;
		r.denominator = denominator * a.numerator;
		r.red();
		r.toRationalString();
	}
}





void Rational::toRationalString()
{
	if (denominator == 0) {
		cout << "Divison by zero" << endl;
	}
	else {
		cout << numerator << '/' << denominator << endl;
	}
}

void Rational::toDouble()
{
	double d = 0;
	cout << numerator*1.00 / denominator << endl;//or static_cast<double>(numerator)
}

void Rational::red()
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
