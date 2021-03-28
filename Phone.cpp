#include "Phone.h"

ostream& operator<<(ostream& output, const PhoneNumber& number) {
    output << "(" << number.areaCode << ") "
        << number.exchange << "-" << number.line;
    return output;     // enables cout << a << b << c;                                                                        
}

istream& operator>>(istream& input, PhoneNumber& number) {

    input.ignore();                     // skip (          
    input >> number.areaCode; // input area code 
    input.ignore(2);                  // skip ) and space
    input >>  number.exchange; // input exchange  
    input.ignore();                     // skip dash (-)   
    input >> number.line;     // input line      

    return input;      // enables cin >> a >> b >> c;
}

