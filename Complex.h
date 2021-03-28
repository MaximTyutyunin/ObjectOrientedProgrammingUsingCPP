#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include<string>
#include<iostream>
using namespace std; //std::cout<<  <-- ostream&, istream& wont work without it
//&(to get the original object) is not important because we still get same values even from the copy but it speeds up the process 
//since we dont waste time on creating a copy
class Complex
{
public:
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
	explicit Complex(double = 0.0, double = 0.0);
	Complex operator+(const Complex) const;//second const shows that function doesnt doesnt modify any data members
	Complex operator-(const Complex&) const;//operator functions cant be static
	Complex operator*(const Complex&) const; 
	Complex operator=(const Complex&); 
	bool operator==(const Complex&) const; 
	bool operator!=(const Complex&) const;
	static void increase(int c);
	//std::string toString() const;
private:
	static int count;
	double real;
	double imaginary;
};
//int Complex::count = 0; //tvariablehe way to initialize static 
#endif

