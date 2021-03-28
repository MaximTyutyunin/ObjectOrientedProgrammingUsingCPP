#include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include <cstdlib>  
#include <string>  // for "getline" function
using namespace std;
// i left some code comented because i wanted to format the file input but i couldnt get how to do it

void outputLine(const string& s, int i) {// "const" just for others to see, 
	cout << s << right << setw(10) << i << endl;
}

int main() {

	ofstream outFile{"size.dat", ofstream::trunc };
	if (!outFile) {  
		cerr << "File could not be opened" << endl;
		exit(1);
	}
	
	outFile << left << setw(20) << "char"  << sizeof(char) << endl;
	outFile << left << setw(20) << "unsigned char" << sizeof(unsigned char) << endl;
	outFile << left << setw(20) << "short int"  << sizeof(short int) << endl;
	outFile << left << setw(20) << "unsigned short int"  << sizeof(unsigned short int) << endl;
	outFile << left << setw(20) << "int"  << sizeof(int) << endl;
	outFile << left << setw(20) << "unsigned int"  << sizeof(unsigned int) << endl;
	outFile << left << setw(20) << "long int"  << sizeof(long int) << endl;
	outFile << left << setw(20) << "unsigned long int"  << sizeof(unsigned long int) << endl;
	outFile << left << setw(20) << "double"  << sizeof(double) << endl;
	outFile << left << setw(20) << "long double"  << sizeof(long double) << endl;

	outFile.close();//to avoid corruption of info in file

	ifstream inFile{ "size.dat", ios::in };
	if (!inFile) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}
	string word;
	int number;
	while (getline(inFile,word)) {
		cout << word << endl;
		
	}

	//what i wanted to do but it prints inly one line, i also dont understand how to 
	//print lines like "unsigned short int" where i have multiple spaces
	/*string word;
	int number;
	while (inFile >> word >> nunber) {
		outputLine(word, number);
		inFile.ignore(1);
	}*/

}
