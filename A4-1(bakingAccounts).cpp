#include<iostream>
#include<iomanip>
#include"Account.h"
#include"Savings.h"
#include"Checking.h"
using namespace std;

int main() {
	Account a1(40.0); 
	Savings a2(25.0, 0.2); 
	Checking a3(10.0, 2.0); 

	cout << setprecision(2);

	//initial amount 
	cout << "a1 amount: " << a1.getBalance() << endl;
	cout << "a2 amount: " << a2.getBalance() << endl;
	cout << "a3 amount: " << a3.getBalance() << endl;

	cout << endl;
	cout << "debit $14.00 from a1" << endl;
	a1.debit(14.0); 
	cout << endl;
	cout << "debit $67.00 from a2" << endl;
	a2.debit(67.0); 
	cout << endl;
	cout << "debit $34.00 from a3" << endl;
	a3.debit(34.0); 

	//amounts
	cout << endl;
	cout << "a1 amount: " << a1.getBalance() << endl;
	cout << "a2 amount: " << a2.getBalance() << endl;
	cout << "a3 amount: " << a3.getBalance() << endl;

	cout << endl;

	cout << "Credit $30.00 from a1" << endl;
	a1.credit(30.0); 
	cout << "Credit $55.00 from a2" << endl;
	a2.credit(55.0); 
	cout << "Credit $14.00 from a3" << endl;
	a3.credit(14.0); 

	// amounts
	cout << endl;
	cout << "a1 amount: " << a1.getBalance() << endl;
	cout << "a2 amount: " << a2.getBalance() << endl;
	cout << "a3 amount: " << a3.getBalance() << endl;

	// add interest to a2
	cout << endl;
	a2.credit(a2.calculateInterest());
	cout << "New a2 amount: " << a2.getBalance() << endl;
}