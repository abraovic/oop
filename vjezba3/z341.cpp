/**
 * Korak 1: Ispis programa: funkcija: f1=2
 * 			Prilikom izvršavanja izraza f1 = i1 / i2 naprije se računa i1 / i2. A obzirom da su i
 * 			i1 i i2 integeri tada je i rezultat operacije dijeljenja integer. Obzirom da integer
 * 			ne može raditi s decimalnim brojevima, pohranjen je samo cijeli dio rezultata.
 * 
 * Korak 2: Ispis programa: funkcija: f1=2.5
 */

#include <iostream>
using namespace std;

int main() {
	int i1 = 10, i2 = 4;
	float f1;

	// Korak 2 ispravka
	f1 = (float)i1 / i2;
	cout << "funkcija: f1=" << f1 << endl;

	return 0;
}