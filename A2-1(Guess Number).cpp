/**
Maim Tyutyunin
cosc 2947A
*/
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

	srand(time(0));//srand is a seed creator for pseudo rundom number <-- comment for future me 0 or NULL are accepted
	int guess;
	int random;
	char flag;
	int i;

	i = 1;
	while (i) {
		random = (rand() % 1000) + 1;//the pseudo rundom number generator
		cout << endl << "RANDOM NUMBER --> "<< random << endl;//for ease of checking 

		string prompt = "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ";
		cout << prompt;//just using another way to not to forget it
		cin >> guess;

		
		while (1) { // i dont get how to write it in a better way without "i"
			if (guess == random) {
				cout << "Exceelnt! You got the number!\nWould you like to play again? (y/n): ";
				cin >> flag;
				if (flag == 'n') i = 0;
				break;
			}
			else if (guess < random) {
				cout << "Too low. Try again: ";
				cin >> guess;
			}
			else {
				cout << "Too high. Try again: ";
				cin >> guess;
			}
		}

	}
	cout << "END";
	
	return 0;
}