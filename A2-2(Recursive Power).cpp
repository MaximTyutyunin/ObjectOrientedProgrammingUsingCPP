/**
Maim Tyutyunin
cosc 2947A
*/
#include <iostream>
using namespace std;

int power(int, int);

int main() {
	cout << "3^4 = ";
	cout << power(3, 4) << endl;

	cout << "2^6 = ";
	cout << power(2, 6) << endl;;

	cout << "5^1 = ";
	cout << power(5, 1) << endl;;

	cout << "1^0 = ";
	cout << power(1, 0) << endl;;

	return 0;
}

int power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	if (exponent == 1) {
		return base;
	}else {
		return base * power(base, exponent - 1);
	}
}
