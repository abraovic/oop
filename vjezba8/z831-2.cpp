/**
 Korak 1:
 Program vraća veći od dva unesena broja preko funkcije maximum.
 Funkcija je napisana koristeći template.
 
 Korak 2:
     ...
     template <class T> T absolute(T a) {
        return abs(a);
     }
     ...
     int e=-1;
     double f=-6.7;
 
     cout << absolute(e) << endl;
     cout << absolute(f) << endl;
     ...
 */

#include <iostream>
#include <math.h>
using namespace std;

template <class T>  T maximum(T a, T b) {
    if( a > b ) {
        return a;
    } else {
        return b;
    }
}

template <class T> T absolute(T a) {
    return abs(a);
}

int main() {
    int a=3, b=5;
    double c=3.1, d=5.2;
    
    cout << maximum( a, b ) << endl;
    cout << maximum( c, d ) << endl;
    
    int e=-1;
    double f=-6.7;
    
    cout << absolute(e) << endl;
    cout << absolute(f) << endl;
    
    return 0;
}