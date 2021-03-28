#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;
int main() {
	SavingsAccount s1(2000.00);
	SavingsAccount s2(3000.00);
	SavingsAccount::setInterestRate(3);
	cout << "s1: $" << s1.calculateMonthlyInterest() << endl;
	cout << "s2: $" << s2.calculateMonthlyInterest() << endl;

	SavingsAccount::setInterestRate(4);
	cout << "s1: $" << s1.calculateMonthlyInterest() << endl;
	cout << "s2: $" << s2.calculateMonthlyInterest() << endl;
}