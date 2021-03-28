#include<iostream>
using namespace std;

int main() {
	int i = 4;
	int* k = &i;
	/*cout << "*k: " << *k << endl;
	k += 4;
	cout << "k: " << k << endl;
	cout << "&i: " << &i << endl;
	cout << "k+= 4: " << *k << endl;*/
	cout << "k: " << k << endl;
	k += 2;
	cout << "k += 4: " << k << endl;
	cout << "*k += 4: " << *k << endl;

	/* an array with 5 elements */
	//double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	//double* p;
	//int i;

	//p = balance;

	///* output each array element's value */
	//printf("Array values using pointer\n");

	//for (i = 0; i < 5; i++) {
	//	printf("*(p + %d) : %f\n", i, *(p + i));
	//}

	//printf("Array values using balance as address\n");

	//for (i = 0; i < 5; i++) {
	//	printf("*(balance + %d) : %f\n", i, *(balance + i));
	//}
	
}