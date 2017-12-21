/**
 Zadatak 1.

 Preradite slijedeći kod iz C jezika u standardni C++ zapis. Funkcije
 UdvostruciInt() i UdvostruciFloat() treba preraditi tako da budu preopterećene
 funkcije istog imena Udvostruci(). Također treba promjeniti način komuniciranja s konzolom -
 umjesto scanf() i printf() funkcija treba koristiti unos/ispis pomoću operatora >> i <<.
 Navedite i potrebnu datoteku zaglavlja ta rad s ulazno/izlaznim objektima.

 #include <stdio.h>

 int UdvostruciInt(int i) { return 2 * i; }
 float UdvostruciFloat(float f) { return 2 * f; }

 int main () {
	int a; float b;

	printf("Upisite cijeli broj:\n");
	scanf("%d", &a);
	printf("Dvostruka vrijednost je %d.\n", UdvostruciInt(a));
	printf("Upisite decimalni broj:\n");
	scanf("%f", &b);
	printf("Dvostruka vrijednost je %f.\n", UdvostruciFloat(b));

	return 0;
 }
*/

#include <iostream>
using namespace std;

int Udvostruci(int i) { return 2 * i; }
float Udvostruci(float f) { return 2 * f; }

int main () {
    int a; float b;
    
    cout << "Upisite cijeli broj:" << endl;
    cin >> a;
    cout << "Dvostruka vrijednost je " << Udvostruci(a) << endl;
    cout << "Upisite decimalni broj:" << endl;
    cin >> b;
    cout << "Dvostruka vrijednost je " << Udvostruci(b) << endl;
    
    return 0;
}