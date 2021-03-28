#include "Complex.h"
#include<string>
#include<iostream>
using namespace std;
int Complex::count = 0;
Complex::Complex(double realPart, double imaginaryPart) 
	:real{ realPart}, //outside part is the way to initialize constant variables
	 imaginary{ imaginaryPart }
{
	/*real = realPart; it is inside
	 imaginary = imaginaryPart;*/ 
}


Complex Complex::operator+(const Complex c) const {
	return Complex{ real + c.real, imaginary + c.imaginary };
}

Complex Complex::operator-(const Complex& c) const {
	return Complex{ real - c.real, imaginary - c.imaginary };
}

Complex Complex::operator*(const Complex& c) const
{
	return Complex((real * c.real) + (imaginary * c.imaginary), (real * c.imaginary) + (imaginary * c.real));
}

Complex Complex::operator=(const Complex& c)
{
	real = c.real; imaginary = c.imaginary; 
	return *this;
}

bool Complex::operator==(const Complex& c) const
{
	return (c.real == real) && (c.imaginary == imaginary);
}

bool Complex::operator!=(const Complex& c) const
{
	return !(*this == c);
}

void Complex::increase(int c)
{
	count += c;
}

//string Complex::toString() const {
//	return "(" + to_string(real) + ", "s + to_string(imaginary) + ")"s;
//}

ostream& operator<<(ostream& output, const Complex& c) { 
	output << "(" << c.real << ", " << c.imaginary << ")"; //c.real doesnt work without using namespace std in the header class for some reason
	return output; 
}

istream& operator>>(istream& input, Complex& c) {
	
	input.ignore();
	input >> c.real; 
	input.ignore(2); 
	input >> c.imaginary; 
	input.ignore(); 
	return input; 
}
