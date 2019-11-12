/**
 * Korak 1: Program računa površinu kruga pomoću članske funkcije klase krug. Klasa krug
 *			sadrži šlansku varijablu radijus i člansku funkciju Povrsina().
 *
 * Korak 2: Funkcija Površina() računa površinu kruga. Ona to može jer sve članske
 *			funkcije neke klase imaju pristup varijablama te klase, bez obzira radi
 *			li se o private ili public varijablama.
 *
 * Korak 3: Ispis: 	Povrsina treceg kruga: 12.56
 * 					Povrsina cetvrtog kruga: 12.56
 *			Program normalno radi iako je unesen negativan radijus.
 */

#include <iostream>
using namespace std;

class krug				// definicija klase
{
	public:				

		double radijus;	// radijus kruga

		double Povrsina();
};

double krug::Povrsina() {
	return 3.14 * radijus * radijus;
}

int main(void) {
	krug k1;				// napravi objekt imena k1 klase krug
	krug k2;				// napravi objekt imena k2 klase krug
	double d;	

	cout << "Upisite radijus prvog kruga:" << endl;
	cin >> d;
	k1.radijus = d;			// podešavanje varijable radijus objekta k1

	cout << "Upisite radijus drugog kruga:" << endl;
	cin >> d;
	k2.radijus = d;			// podešavanje varijable radijus objekta k2

	cout << "Povrsina prvog kruga: " << k1.Povrsina() << endl;	// ispis na ekran
	cout << "Povrsina prvog kruga: " << k2.Povrsina() << endl;	// ispis na ekran

	//Korak 3:
	krug k3;
	krug k4;

	cout << "Upisite radijus trećeg kruga:" << endl;
	cin >> d;
	k3.radijus = d;			// podešavanje varijable radijus objekta k3

	cout << "Upisite radijus četvrtog kruga:" << endl;
	cin >> d;
	k4.radijus = d;			// podešavanje varijable radijus objekta k4

	cout << "Povrsina treceg kruga: " << k3.Povrsina() << endl;	// ispis na ekran
	cout << "Povrsina cetvrtog kruga: " << k4.Povrsina() << endl;	// ispis na ekran



	return 0;
}

