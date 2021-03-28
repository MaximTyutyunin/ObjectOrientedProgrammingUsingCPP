#pragma once
#ifndef B_H// this one requires "#endif" after the class
#define B_H
#include "A.h"
class B : public A {
public:
	using A::A;// use "using" to access constructor in another class Severity or this happens	'initializing': cannot convert from 'initializer list' to 'B'	Project1	D : \VSProjects\Project1\ABTest.cpp	6

private:
	int y = 1;
};
#endif