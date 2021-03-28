#include<iostream>
#include <iomanip>

using namespace std;

double convert(double far) {
	return 5.0 / 9.0 * (far - 32);
}

int main() {
	int f = 0;
	cout << "Enter temperature in fahrenheight" << endl;
	//cout.fill('*');// i left this one here to not to forget  
	cout.precision(2);
	while (cin >> f) {
		cout << right << setw(7) << "F" << setw(15) << "C" << endl;
		cout << right << setw(7) << f << setw(15) << convert(f) << endl;
	}

}