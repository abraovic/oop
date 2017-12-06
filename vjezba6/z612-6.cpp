/**
 Korak 2:
 Linije koje je trebalo izmijeniti i dodati su:
	Krug* k = new Krug(); 	// dinamička alokacija memorije
	delete k;				// dealokacija dinamičke memorije

 Korak 4:
 Za poziv umjesto točka (.) operatora koristimo strelica (->) operator:
 	k->postaviRadijus(1.0)
 	k->izracunajPovrsinu()
 	k->izracunajOpseg()

 Korak 5:
 Destruktor

 Korak 6:
 Kod destruktora:
 	Krug::~Krug() {
		cout << "Pozvan destruktor" << endl;
	}
 Ispis programa:
	Povrsina: 3.14
	Opseg: 6.28
	Pozvan destruktor
	Prije kraja programa!
*/

#include <iostream>
using namespace std;

class Krug {
private:
       double radijus; 	// radijus je privatna varijabla
       					// jer nesmije poprimiti negativnu vrijednost
public:
       Krug();
       bool postaviRadijus(double r);	// pristupnik za radijus

       double izracunajPovrsinu();		// funkcija za površinu
       double izracunajOpseg();			// funkcija za opseg

       ~Krug();
}; 

Krug::Krug()
{
       radijus=0.0;
}

Krug::~Krug()
{
	cout << "Pozvan destruktor" << endl;
}

// u pristupniku radijusa se vrši kontrola
// vrijednosti na koju se radijus postavlja
bool Krug::postaviRadijus(double r)
{
       if (r >= 0.0) {
            radijus = r;
            return true;
		} else {
			return false;
		}
} 

double Krug::izracunajOpseg()
{
	return radijus*6.28;
}

double Krug::izracunajPovrsinu()
{
	return radijus*radijus*3.14;
}

int main()
{
	Krug* k = new Krug(); 		// dinamička alokacija memorije
	k->postaviRadijus(1.0); 	// postavljanje radijusa pomoću pristupnika
	cout << "Povrsina: " << k->izracunajPovrsinu() << endl; 
	cout << "Opseg: " << k->izracunajOpseg() << endl;

	delete k; // dealokacija dinamičke memorije

	cout << "Prije kraja programa!" << endl; 
	return 0;
}
