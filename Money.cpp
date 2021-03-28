#include<iostream>
using namespace std;

void addAmount(int arr[], int add, int person) {

	arr[person] += add;
}

void subAmount(int arr[], int amount, int person) {
	if (amount <= arr[person]) {
		arr[person] -= amount;
	}
	else {
		cout << "Your number is too large";
	}
}

void getAmount(int arr[], int person) {
	cout << arr[person] << "\n";
}

int main() {
	int money[10] = { 100,100,100,100,100,100,100,100,100,100 };
	int person;
	char command;
	int amount;//amount to add or sub

	while (true) {
		cout << "Enter command and persons number --> ";
		cin >> command >> person;
		if (person > 10) {
			cout << "Wrong person\n";//tut nado pisat' "continue"?
			continue;
		}
		person--;//because starts with 0

		switch (command) {
		case 'a':
			cout << "Enter amount to add --> ";
			cin >> amount;
			addAmount(money, amount, person);
			break;
		case 'v':
			getAmount(money, person);
			break;
		case 'w':
			cout << "Enter amount to sub --> ";
			cin >> amount;
			subAmount(money, amount, person);
			break;
		}
	}


}