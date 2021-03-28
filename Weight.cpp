#include "Weight.h"
using namespace std;
int main() {
	Weight w1;
	Weight w2;

	w1.setPounds(2).setOunces(7);

	cin >> w1;
	cout << w1;
	cout << w1 + w1;
}
