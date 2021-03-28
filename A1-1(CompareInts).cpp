#include<iostream>
using namespace std;

string compare(int a, int b) {
	string res = (a == b) ? "a and b are equal" : (a > b) ? "a is larger" : "b is larger";

	return res;
}

int main() {
	int a;
	int b;

	// i did while(){} just for the sake of ease
	while (1) {
		cout << "Enter 2 numbers a and b: ";
		cin >> a >> b;
		cout << compare(a, b) << endl;
	}

}

