#pragma once
#include<iostream>
#include"Account.h"

//friend functions are not inherited
class Savings : public Account{
public:
	Savings(double, double);

	double calculateInterest();
private:
	double interestRate;
};
Savings::Savings(double balance, double interest) : Account(balance) {//": Account(balance)" is neded so invalid input wont be printed
	if (interest >= 0.0) {											  // as i get it, i call account class constructor but i dont get how it works
		Account::balance = balance;
		interestRate = interest;
	}
	else {
		throw std::invalid_argument::invalid_argument("Invalid interest");// initially i had just this "invalid_argument("Invalid interest")"
	}																		// but compiler changed it, i dont understand why
}

double Savings::calculateInterest() {
	return interestRate * Account::balance;// balance is protected so can be accessed like this in any type of code
}
