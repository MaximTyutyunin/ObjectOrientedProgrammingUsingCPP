#include<iostream>
using namespace std;

int main() {
	double sales = 0;

	while (1) {
		cout << "Enter sales in dollars (-1 to end) --> ";
			cin >> sales;
		if (sales != -1) {
			cout << "Salary is " << " $"<< sales * 0.09 + 200 << endl;
		}
		else {
			cout << "END";
			break;
		}
	}
	return 0;
}
