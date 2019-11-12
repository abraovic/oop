/**
 * Korak 1: Koristeći klasu krug i njene članske funkcije program računa površinu i
 *			opseg kruga za postavljeni radijus.
 *
 * Korak 2: Krug::Krug(float r)
 * 			{
 * 				radijus = r;
 *			}
 *
 * Korak 3: Krug k(1.0);
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
};

Krug::Krug() {
	radijus=0.0;
}

// Korak 2: novi konstruktor
Krug::Krug(float r)
{
	radijus = r;
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
	//Krug k;					// deklaracija objekta
	//k.SetRadijus(1.0);	// postavljanje radijusa pomoæu pristupnika

	Krug k(1.0); // Korak 3: korištenje novog, propterećenog konstruktora

	cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
	cout << "Opseg: " << k.izracunajOpseg() << endl;

	return 0;
}
