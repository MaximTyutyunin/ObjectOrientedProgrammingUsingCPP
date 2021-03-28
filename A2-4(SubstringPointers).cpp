#include<iostream>
using namespace std;

int indexOf(const  char *s1, const char *s2);

int main() 
{
	const char *s1 = "aaaaaabc";
	const char *s2 = "abc";
	cout << "s1 --> "<< s1 << "\ns2 --> "<< s2 << endl;
	cout << indexOf(s1, s2);
	return 0;
}

int indexOf(const char *s1, const char *s2)
{
	const char *copyS1 = s1;//to not to loose pointers when calculating sizes in two next small while loops
	const char *copyS2 = s2;
	int sizeS1 = 0;
	int sizeS2 = 0;

	while (*copyS1 != '\0') {//i couldnt find any better way to get sizes of strings for this case
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
	while (count < sizeS1) {//this loop goes over lettes in s1
		if (*s2 == letterInS1) {
			
			bool ok = true;
			int count2 = 0;
			int j = 0;
			char letterInS2 = *s2;
			while (count2 < sizeS2 ) {//this loop goes over lettes in s2 and compares them to letters in s1
				
				if (letterInS2 != letterInS1 ) { //if not equal --> then no match and no sence to check further
					ok = false;                    
					break;
				}			
				count2++;
				j++;
				letterInS2 = *(s2 + j);
				letterInS1 = *(s1 + i + j);// indexes of letters should match thats why s1 + i + j
			}

			if (ok == true) {//return index if evrything is ok
				return i;
			}

		}

		count++;//count == i but i dont want to risk it
		i++;
		letterInS1 = *(s1 + i);
	}
	
	
	return -1;//return -1 of no matches found
}
