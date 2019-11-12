/**
 * Korak 1: Ispis 	Upisite radijus kruga:
 * 					2
 * 					Radijus kruga je:     2
 * 					Povrsina prvog kruga: 12.56
 * 
 * Korak 2: Program ne može izračunati površinu kruga jer smo unijeli negativnu vrijednost.
 * 			Obzirom da je u ovom primjeru radijus privatna varijabla klase, koristimo funkciju
 * 			SetRadijus() koja služi za postavljanje varijable radijus. Unutar te funkcije se
 *			vrši provjera je li uneseni radijus pozitivan broj. Ukoliko je sve OK, a ako nije
 * 			ispiše se greška i članska varijabla klase radijus se ne postavlja.
 *
 * Korak 3: U ovom slučaju unutar konstruktora se potavlja vrijednost radijusa na 0. Zbog toga,
 *			obzirom da se u funkciji SetRadijus() u slučaju negativnog radijusa ne postavlja
 *			vrijednost, radijus ima vrijednost 0.
 *
 * Korak 4: Ispis 	Pozvan konstruktor
 * 					Upisite radijus kruga:
 * 					2
 * 					Radijus kruga je:     2
 * 					Povrsina prvog kruga: 12.56
 *			Konstruktor se poziva u trenutku kreiranja objekta klase.
 */

#include <iostream>
using namespace std;

class krug								// definicija klase
{
	private:

		double radijus;					// radijus kruga

	public:				
		krug();							// konstruktor

		double Povrsina();				// funkcija za izraèun površine

		double GetRadijus();			// pristupnici za radijus
		void SetRadijus( double tempR );
};

krug::krug() {
	radijus = 0.0;
	// Korak 4:
	cout << "Pozvan konstruktor" << endl;
}

double krug::Povrsina() {
	return 3.14 * radijus * radijus;
}

double krug::GetRadijus() {
	return radijus;
}

void krug::SetRadijus( double tempR ) {
	if( tempR >= 0.0 ) {
		radijus = tempR;
	} else {
		cout << "Greska! Radijus ne moze biti negativna vrijednost!" << endl;
	}
}

int main(void) {
	krug k1;				// napravi objekt imena k1 klase krug - Korak 4: tu je pozvan konstruktor
	double d;	

	cout << "Upisite radijus kruga:" << endl;
	cin >> d;
	k1.SetRadijus( d );			// podešavanje varijable radijus objekta k1

	cout << "Radijus kruga je:     " << k1.GetRadijus() << endl;	// ispis na ekran
	cout << "Povrsina prvog kruga: " << k1.Povrsina() << endl;	// ispis na ekran

	return 0;
}