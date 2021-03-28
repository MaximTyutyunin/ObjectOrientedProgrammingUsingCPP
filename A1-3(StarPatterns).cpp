#include<iostream>
using namespace std;

int main() {

	// * --> **********
	int important = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= important; j++) {
			cout << "*";
		}
		important++;
		cout << endl;
	}

	cout << endl;
	// ********** --> *
	important = 10;
	for (int i = 0; i < 10; i++) {
		for (int j = important; j > 0; j--) {
			cout << "*";
		}
		important--;
		cout << endl;
	}

	cout << endl;

	// ********* --> spase * 
	important = 10;
	for (int i = 0; i < 10; i++) {

		for (int k = 0; k < 10 - important; k++) {
			cout << " ";
		}

		for (int j = 0; j < important; j++) {
			cout << "*";
		}

		important--;
		cout << endl;
	}

	cout << endl;

	//spase * --> *********
	important = 0;
	for (int i = 0; i < 10; i++) {

		for(int k = 0; k < 9 - important; k++) {
			cout << " ";
		}

		for (int j = 0; j <= important; j++) {
			cout << "*";
		}
		important++;
		cout << endl;
	}

	
}