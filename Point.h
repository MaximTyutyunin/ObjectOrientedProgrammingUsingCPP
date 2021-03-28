#pragma once
#include <iostream>
#ifndef POINT_H// this one requires "#endif" after the class
#define POINT_H

/*Base-pointer points to base-object, derived-pointer points to derived-object.

Base-pointer points to derived object.
	Can only call base-class functions.
Derived-pointer points to base-object.
	Compiler error
*/
class Point
{
public://this ones a re headers/prototypes
	Point() {}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}//default constructor
	void setX(int x);//actually "x" is not important we can use just " int " and be good
	int getX() const;//const for people not computer
	void setY(int);
	int getY() const;
	//virtual void fun() = 0;
	virtual void print() const {//<-- this one is a regular virtual function coz it got implementation
		/*pure" virtual function
		virtual void fun() = 0; <-- this one, NO IMPLEMENTATION, if at least one of these is in a class the class is abstract
*/
		std::cout << x << " " << y;
	}
protected:
	int x{ 0 };
	int y = 0;

};
#endif
