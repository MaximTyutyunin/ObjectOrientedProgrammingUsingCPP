#include <iostream>
using namespace std;

int main() {
	//int* iPtr;
	//int g = 5;
	//int *iPtr = &g;
	//cout << iPtr << endl;

	//NULL POINTER
	int* iPtr = 0;         // Declare an int pointer, and initialize the pointer to point to nothing
	cout << *iPtr << endl;  // ERROR! STATUS_ACCESS_VIOLATION exception
	int* p = NULL;         // Also declare a NULL pointer points to nothing
//REASSIGNING
	int number = 88;
	int *pNumber = &number;  // Declare and assign the address of variable number to pointer pNumber (0x???????)
	cout << pNumber << endl;   // Print the content of the pointer variable, which contain an address (0x???????)
	cout << *pNumber << endl; // Print the value "pointed to" by the pointer, which is an int (88)
	*pNumber = 99;            // Assign a value to where the pointer is pointed to, NOT to the pointer variable
	cout << *pNumber << endl; // Print the new value "pointed to" by the pointer (99)
	cout << number << endl;   // The value of variable number changes as well (99)


//***************************************************************************
	//EXAMPLE: difference between reference and pointer

	int* pNumber1 = &number1;  // Explicit referencing
	*pNumber1 = 99;             // Explicit dereferencing
	cout << *pNumber1 << endl;  // 99
	cout << &number1 << endl;   // 0x22ff18
	cout << pNumber1 << endl;   // 0x22ff18 (content of the pointer variable - same as above)
	cout << &pNumber1 << endl;  // 0x22ff10 (address of the pointer variable)
	pNumber1 = &number2;        // Pointer can be reassigned to store another address

	// Create a reference (alias) to number1
	int& refNumber1 = number1;  // Implicit referencing (NOT &number1)
	refNumber1 = 11;             // Implicit dereferencing (NOT *refNumber1)
	cout << refNumber1 << endl;  // 11
	cout << &number1 << endl;    // 0x22ff18
	cout << &refNumber1 << endl; // 0x22ff18
	//refNumber1 = &number2;     // Error! Reference cannot be re-assigned
								 // error: invalid conversion from 'int*' to 'int'
	refNumber1 = number2;        // refNumber1 is still an alias to number1.
								 // Assign value of number2 (22) to refNumber1 (and number1).
	number2++;
	cout << refNumber1 << endl;  // 22
	cout << number1 << endl;     // 22
	cout << number2 << endl;     // 23
};