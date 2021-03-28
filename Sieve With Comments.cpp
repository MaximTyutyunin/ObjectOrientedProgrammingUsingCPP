#include<iostream>
using namespace std;

int indexOf(const  char* s1, const char* s2);

int main()
{
	const char* s1 = "abc";
	const char* s2 = "abc";
	//cout << *(s1 + 1) << "  "<< *(s1 + 2);
	cout << indexOf(s1, s2);
	return 0;
}

int indexOf(const char* s1, const char* s2)
{
	const char* copyS1 = s1;//to not to loose pointers
	const char* copyS2 = s2;
	int sizeS1 = 0;
	int sizeS2 = 0;

	while (*copyS1 != '\0') {
		sizeS1++;
		copyS1++;
	}
	while (*copyS2 != '\0') {
		sizeS2++;
		copyS2++;
	}

	int count = 0;
	int i = 0;
	char letterInS1 = *s1;
	while (count < sizeS1) {
		if (*s2 == letterInS1) {
			//cout << "i = " << i << endl;

			bool ok = true;
			int count2 = 0;
			int j = 0;
			char letterInS2 = *s2;
			while (count2 < sizeS2) {
				//cout << letterInS2 << " " << letterInS1 << endl;
				if (letterInS2 != letterInS1) { //b b a b c
					ok = false;                      //a b c
					//cout << "not good j ="<< j  << endl;
					break;
				}

				count2++;
				j++;
				letterInS2 = *(s2 + j);
				letterInS1 = *(s1 + i + j);

			}
			if (ok == true) {
				//cout << "ok at" << i;
				return i;
			}
		}
		count++;
		i++;
		letterInS1 = *(s1 + i);
	}
	//cout << sizeS1 << " " << sizeS2;

	return -1;
}
