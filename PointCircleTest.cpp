#include"Point.h"
#include"Circle.h"
#include<iostream>
using namespace std;

template <typename T> T maxim(T a, T b) {// this is a generic type function from java, here they call it "template"
	T max = b;
	if (a >= b) {
		max = a;
		return max;
	}
	else {
		return max;
	}
}

int main() {
	Point p{ 30, 50 };
	Point* pointPtr;    // declare pointer to  base-class

	Circle c{ 120, 89, 2.7 };
	Circle* circlePtr;  // declare  pointer to derived-class

	pointPtr = &p;//initialize piter to base, use '&" to give it address
	pointPtr->print();  // invokes Point's print

	circlePtr = &c;
	circlePtr->print();  // invokes Circle's print

	pointPtr = &c;//use child class address on base class pointer to base "print" function
	pointPtr->print();  // invokes Point's print


	cout << endl;
	cout << maxim(2.3,4.5);


	
	cin.get();

	cin.eof();//returns true if end of file is encountered
	//cout.put('dfgr');//this shit is only for char's, if use a number it will use it as asci code for a char and try to print it
	//Point p = new Circle{ 2,3,4.5 };

	/*
	// errors
	pointPtr->setRadius(3.33);//
	circlePtr = &p;//dirived class cant access base class via pointer and throws exeptions
	BUT IF THE "PRINT" FUNCTION in the base class IS MARKED "virtual" THRE WILL BE "polymorphism"
	*/
}