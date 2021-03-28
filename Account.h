#pragma once
#include<iostream>
// i used this form "std::endl" just to remember that i can do it 
class Account {
public:
	Account(double);

	void credit(double);
	bool debit(double);
	void setBalance(double);
	double getBalance();
protected:
	double balance;//eventhough i can initialize it here, since can 
				   //be initialized differently in each of three different constructors, 
				   //so they are initialized inside the constructors
};

Account::Account(double initialBalance = 0) {
	//i wanted to throw an custom error here but not shure if it is a propper way  to controll the input
	if (initialBalance <= 0.0) {
		std::cout << "Invalid input";
	}
	else {
		balance = initialBalance;
	}

}

void Account::credit(double amount) {
	balance += amount;
}

bool Account::debit(double amount) {
	if (amount > balance) {
		std::cout << "The amount exceeds the balance" << std::endl;
		return false;
	}
	else {
		balance -= amount;
		return true;
	}
}

void Account::setBalance(double amount) {
	balance = amount;
}
double Account::getBalance() {
	return balance;
}
