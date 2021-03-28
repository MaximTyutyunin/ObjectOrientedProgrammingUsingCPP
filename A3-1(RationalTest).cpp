#include <iostream>
#include "Rational.h"
using namespace std;

int main() {

	Rational r1(4, 2);
	Rational r2(2,7);
	r2.toDouble();
	r2.add(r1);
	r2.sub(r1);
	r2.mul(r1);
	r2.divBy(r1);

}