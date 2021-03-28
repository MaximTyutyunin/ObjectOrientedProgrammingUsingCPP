#pragma once
#include "Point.h"
class Circle : public Point // here x,y will be accessed directly if they are proteted in Point class
{
public: 
	double radius{ 0 };
	//Circle(){}
	Circle(int a, int b, double d) {
		x = a;
		y = b;
		Circle::radius = d;
	}
	void setRadius(double d) {
		Circle::radius = d;
	}

};

