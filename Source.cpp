#include <iostream>
using namespace std;


int main() {
    int n1,
    int n2;
    int n3;
    int count = 0;
    while (true)
    {
        n1 = rand() % 9 + 1;
        n2 = rand() % 9 + 1;
        n3 = rand() % 9 + 1;

        cout << "Numbers are: " << n1 << " " << n2 << " " << n3;
        count++;

        if (n1 == 1 && n2 == 6 && n3 == 8)
        {
            cout << "Mr. Lucky is a grand prize winner after " << count << " draws!" << endl;
            break;
        }
        else {
            cout << "Better luck next time!" << endl;
        }
    }
}
