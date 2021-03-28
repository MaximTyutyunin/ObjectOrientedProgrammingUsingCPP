#pragma once
#include<iostream>
#include"Account.h"

//friend functions are not inherited
class Checking : public Account {
public:
	Checking(double, double);

	void credit(double);
	bool debit(double);
	void takeFee();
private:
	double feePerTransaction;
};

Checking::Checking(double balance, double fee) : Account(balance){
	Account::balance = balance;
	feePerTransaction = fee;
}

void Checking::credit(double fee) {
	Account::credit(fee);
	takeFee();
}


bool Checking::debit(double fee) {

	if (Account::debit(fee)) {
		takeFee();
		return true;
	}
	else {
		return false;
	}
}

// take transaction fee
void Checking::takeFee() {
	Account::setBalance(Account::balance - feePerTransaction);
}