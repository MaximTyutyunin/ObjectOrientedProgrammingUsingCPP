#include <iostream>  
#include <array>
using namespace std;
//cout << arr.size() if array liblary is included or use sizeof() if not including array liblary of end()-begin()
// initializing array with designed initializer works only on Linx GCC compiler 

int main()
{
    array <int, 1000> arr; // create and initialze array
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        arr[i] = 1;
    }

    for (unsigned int i = 2; i * i < arr.size(); i++) {
        if (arr[i] == 0) continue;//for example 4 is not valid because it is already a multiple of 2
        for (unsigned int j = 2; j < arr.size(); j++) {
            if (i * j >= arr.size()) {//other vice j will continue to go till the end of the array and cause out fo boundaries exeption
                break;
            }
            if (arr[j * i] != 0) {//this is ow i get multiples to cancel if the were not cancelled before
                arr[j * i] = 0;
            }
        }
    }

    for (unsigned int j = 0; j < arr.size(); j++) {
        if (arr[j] != 0) {
            cout << "  " << j << endl;
        }
    }

}