/**
 Korak 1:
 Program kreira novi objekt (k) klase Krug. Tom objektu postavlja privatnu varijablu
 radijus na vrijednost 1.0 koristeći metodu za postavljanje radijusa. Koristeći postojeće
 metode računa i ispisuje površinu i opseg za objekt (k). Na kraju ispisuje liniju "Prije
 kraja programa".
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
}; 

Krug::Krug()
{
       radijus=0.0;
}

// u pristupniku radijusa se vrši kontrola
// vrijednosti na koju se radijus postavlja
bool Krug::postaviRadijus(double r)
{
       if ( r >= 0.0 ) {
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
	Krug k; 				// deklaracija objekta 
	k.postaviRadijus(1.0); 	// postavljanje radijusa pomoću pristupnika
	cout << "Povrsina: " << k.izracunajPovrsinu() << endl; 
	cout << "Opseg: " << k.izracunajOpseg() << endl;

	cout << "Prije kraja programa!" << endl; 
	return 0;
}
