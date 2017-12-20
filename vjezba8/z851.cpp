/**
 Korak 1:

    bool isPalindrome(TString string) {
        
        TString reverseString;
        for (int i=0; i<string.length(); i++) {
            reverseString += string[string.length() - (i+1)];
        }
        
        return string == reverseString;
    }

*/
#include <iostream>
// biblioteka sa klasom tstring - otvoriti za detalje
#include "tstring.h"

using namespace std;

bool isPalindrome(TString string) {
    
    TString reverseString;
    for (int i=0; i<string.length(); i++) {
        reverseString += string[string.length() - (i+1)];
    }
    
    return string == reverseString;
}

int main(void)
{
    // deklaracija stringova u C++ stilu
    TString input;
    cout << "Unesi string: " << endl;
    cin >> input;
    
    if (isPalindrome(input)) {
        cout << "DA" << endl;
    } else {
        cout << "NE" << endl;
    }
    
    return 0;
}