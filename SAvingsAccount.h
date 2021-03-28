#pragma once

static double annualInterestRate;// should be declared outside the class
class SavingsAccount
{
private:
	double savingsBalance{ 0 };

public:
	SavingsAccount(double savings = 0)
	{
		savingsBalance = savings;
	}
	double calculateMonthlyInterest() {
		savingsBalance += savingsBalance * (annualInterestRate / 12);
		return savingsBalance;

	}
	static void setInterestRate(int newInterest) {
		annualInterestRate = newInterest/100.00;
	}
};



