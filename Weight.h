#pragma once
#include <iostream>
using namespace std;
class Weight
{
	
public:
	Weight() {	
			pounds = 0;
			ounces = 0;
	}

	Weight(int p, int o) {
		if(o < 16 && p >=0 && o >= 0){
			pounds = p;
			ounces = o;
		}
		else {
			cout << "wrong input";
		}
	}

	Weight setPounds(int p) {
		if (p >= 0) {
			this->pounds = p;
		}
		return *this;
	}
	Weight setOunces(int o) {
		if (o < 16 && o >= 0) {
			this->ounces = o;
		}
		return *this;
	}
	int getPounds(int p) {
		return pounds;
	}
	int getOunces(int o) {
		return ounces;
	}

	friend ostream& operator<<(ostream& output, Weight& weight) {
		output << weight.pounds<< "lb " << weight.ounces << "oz";
		return output;
	}

	friend istream& operator>>(istream& input, Weight& weight) {
		input >> weight.pounds >> weight.ounces;
		return input;
	}

	friend Weight operator+(const Weight& weight)
	{
		Weight w;
		w.ounces = weight.ounces + w.ounces;

		int sP = weight.ounces / 16;
		w.ounces %= 16;
		w.pounds = weight.pounds + weight.pounds + sP;
		return w;
	}

	operator int() const {
		return pounds;
	}



private:
	int pounds{0};
	int ounces{0};
};

