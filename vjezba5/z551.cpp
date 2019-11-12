/**
 * Prvi ispis: broj deklariranih objekata klase Krug: 1
 * Drugi ispis: broj deklariranih objekata klase Krug: 2
 * Treći ispis: broj deklariranih objekata klase Krug: 3
 */

#include <iostream>
using namespace std;

class Krug {

	private:
		double radijus;

	public:
		static int br;

		Krug();
		bool postaviRadijus(double tempR);

		double izracunajPovrsinu();
		double izracunajOpseg();

};

bool Krug::postaviRadijus(double tempR) {
	if ( tempR >= 0.0 ) {
		radijus = tempR;
		return true;
	} else 
		return false;
}

Krug::Krug() {
	br++;
	radijus = 0.0;
}

double Krug::izracunajOpseg() {
	return radijus*6.28;
}

double Krug::izracunajPovrsinu() {
	return radijus*radijus*3.14;
}

int Krug::br = 0;

int main() {

	//Krug k, k1;
	Krug k[3];
	
	cout << "broj deklariranih objekata klase Krug: " << Krug::br << endl;

	/*
	double rad;
	cout << "Upisite radijus:";
	cin >> rad;
	if( k.postaviRadijus(rad) ) {
		cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
		cout << "Opseg: " << k.izracunajOpseg() << endl;
	} else
		cout << "Greska: unjeli ste negativan radijus!" << endl;
	*/


	return 0;
}
