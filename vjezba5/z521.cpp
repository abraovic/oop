/**
 * Korak 1: Krug::~Krug()
 * 			{
 * 				cout << "Odoh ja" << endl;
 * 			}
 *
 * Korak 2: Povrsina: 3.14
 * 			Opseg: 6.28
 *			Odoh ja
 *			Destruktor se poziva na kraju programa kada se objekt k klase Krug
 *			uništi. Drugim riječima, destruktor se poziva kada se objekt uništava,
 *			tj. briše iz memorije.
 */

#include <iostream>
using namespace std;

class Krug {

private:
	double radijus;		// radijus je privatna varijabla
						// jer nesmije poprimiti negativnu vrijednost

public:
	Krug();
	Krug(float r);				// Korak 2: novi konstruktor
	bool SetRadijus(double r);	// pristupnik za radijus

	double izracunajPovrsinu();		// funkcija za površinu
	double izracunajOpseg();		// funkcija za opseg

	~Krug(); // Korak 1: definicija destruktora
};

Krug::Krug() {
	radijus=0.0;
}

Krug::Krug(float r)
{
	radijus = r;
}

// Korak 2: tijelo destruktora
Krug::~Krug()
{
	cout << "Odoh ja" << endl;
}

// u pristupniku radijusa se vrši kontrola
// vrijednosti na koju se radijus postavlja
bool Krug::SetRadijus(double r) {
	if ( r >= 0.0 ) {
		radijus = r;
		return true;
	} else {
		return false;
	}
}


double Krug::izracunajOpseg() {
	return radijus*6.28;
}

double Krug::izracunajPovrsinu() {
	return radijus*radijus*3.14;
}

int main() {
	Krug k(1.0);

	cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
	cout << "Opseg: " << k.izracunajOpseg() << endl;

	return 0;
}
