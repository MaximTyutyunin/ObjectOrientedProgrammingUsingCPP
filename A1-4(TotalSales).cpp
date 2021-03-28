#include<iostream>
using namespace std;

int main() {
	int number = 0;
	int quantity = 0;
	double total = 0;

	cout << "Enter product number and quantity sold in the according order" << endl << "Enter -1 for number and any quantity to stop" << endl;
	cout << "Enter: ";
	while (number != -1) {
		cin >> number >> quantity;
		cout << "Enter: ";

		switch (number) {
		case 1:
			total += quantity * 2.98;
			continue;
		case 2:
			total += quantity * 4.5;
			continue;
		case 3:
			total += quantity * 9.98;
			continue;
		case 4:
			total += quantity * 4.49;
			continue;
		case 5:
			total += quantity * 6.87;
			continue;
		default:
			cout << "Done with products" << endl;
		}

		cout << "The total retail price is $" << total;
	}



}