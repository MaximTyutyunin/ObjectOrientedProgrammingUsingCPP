#include<iostream>
#include <iomanip>
#include <bitset>// for binaries

using namespace std;

// bell manipulator (using escape sequence \a) 
ostream& bell(ostream& output) {

    return output << '\a';  // issue system beep
}

// carriageReturn manipulator (using escape sequence \r)
ostream& carriageReturn(ostream& output) {//go to the beginning og line not next line

    return output << '\r';  // issue carriage return     
}

// tab manipulator (using escape sequence \t)
ostream& tab(ostream& output) {

    return output << '\t';  // issue tab      
}

ostream& endLine(ostream& out) {
    return out <<  '\n' << flush; // end line
}


int main() {
    int y = 2;
    y <<= 1;
    cout << y << endl;
    int x = 2;
    cout << x << endLine;
    cout << bitset<8>(x)<< " <-- " << x <<endLine;
    cout << bitset<8>(~x) <<" <-- " << ~x << endLine;
  //******************************************************************************************

  //  // use tab and endLine manipulators
  //  cout << "Testing the tab manipulator:" << endl
  //      << 'a' << tab << 'b' << tab << 'c' << endl;

  //  cout << "Testing the carriageReturn and bell manipulators:"
  //      << endLine << "..........";

  //  //cout << bell;// use bell manipulator
  //  //cout << '\a'; //same but direct 
  // 

  //// use carriageReturn and endLine manipulators
  //  cout << carriageReturn << "-----" <<endLine;


    //*******************************************************************************************
 //   //to commemt out and back use ctrl+shift+ /
	//int c;
	//cout << cin.eof() << endl;
	////thise following loop reads all chars
	//while ((c = cin.get()) != EOF) {
	//	cout.put(c);
	//}
	//cout << c << endl;
	//cout << cin.eof();// 1 = true, means that eof is reached

//*******************************************************************************************


//    int character; // use int, because char cannot represent EOF
//
//// prompt user to enter line of text
//    cout << "Before input, cin.eof() is " << cin.eof() << endl
//        << "Enter a sentence followed by end-of-file:" << endl;//end-of-file: ctrl+z
//
//    // use get to read each character; use put to display it
//    while ((character = cin.get()) != EOF)
//        cout.put(character);
//
//    // display end-of-file character
//    cout << "\nEOF in this system is: " << character << endl;
//    cout << "After input, cin.eof() is " << cin.eof() << endl;

//*******************************************************************************************

    //const int SIZE{ 80 };
    //char buffer1[SIZE];
    //char buffer2[SIZE];

    //// use cin to input characters into buffer1 not preserving " " spaces
    //cout << "Enter a sentence:" << endl;
    //cin >> buffer1;//cin will only read until the first whitespace(space " ") char

    //// display buffer1 contents
    //cout << "\nThe string read with cin was:" << endl
    //    << buffer1 << endl << endl;

    //// use cin.get to input characters into buffer2 preserving " " spases
    //cin.get(buffer2, SIZE);//No delimiter specified, so the default (\n) is used

    //// display buffer2 contents
    //cout << "The string read with cin.get was:" << endl
    //    << buffer2 << endl;

//*******************************************************************************************

    //const int SIZE{ 80 };
    //char buffer[SIZE]; // create array of 80 characters

    //// input characters in buffer via cin function getline
    //cout << "Enter a sentence:\n";
    //cin.getline(buffer, SIZE);

    //// display buffer contents
    //cout << "\nThe sentence entered is:\n" << buffer << endl;

//*******************************************************************************************
    //char buffer[] = "sfsfs sfsefse";
    //cout.write(buffer, 10);//read, gcount treat everythind as a byte
    //cout << endl;
    //string s;
    //char buffer1[34];
    //cin.read(buffer1,12);
    //cout << cin.gcount();

//*******************************************************************************************
    //cout.fill('*');
    //cout << 4;//also "internal, right"
    //cout << left << showpos << setw(10) << 123 << endl;// if at least once show pos is used it will work for all "cout"s
    //cout << 34;
    //cout << 23 << 232;
    //cout << 9 << right << setw(10) << 123 << endl;

//*******************************************************************************************

   // cout << setw(23) << "WDQWQWE";
    //int widthValue{ 4 };
    //char sentence[10];//= { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o' };//array of chars

    //cout << "Enter a sentence: \n";
    //cin.width(5); // input only 4 characters from sentence

    //// set field width, then display characters based on that width 
    //while (cin >> sentence) {
    //   cout.width(widthValue++);
    //    cout << sentence << "\n";
    //    cin.width(5); // reset to 4 chars coz the 5th one os not counted
    //}



}