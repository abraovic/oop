/**
 Zadatak 4.

 Definirana je klasa Kut:

 class Kut {
	public:
		Kut();
		Kut(double x);
		Kut(const Kut& x);
		void SetKut (double x);
		double GetKut();
		Kut& operator=(const Kut& c);
	private:
		double deg;		// kut u stupnjevima
						// mora biti >= 0 i < 360
 }

 koja pohranjuje kut u stupnjevima.
 Koristeći ovu deklaraciju:
 	a) napišite default konstruktor kojim se kut postavlja na nulu
 	b) napišite funkcije SetKut i GetKut koje postavljaju, odnosno vraćaju kut u
 	   stupnjevima
 	c1) napišite kopirni konstruktor za klasu Kut
    c2) napišite operator = za klasu kut
 	d) napišite primjer main funkcije u kojoj ćete iskoristiti klasu Kut i sve napisane
 	   funkcije
 
 NAPOMENA: Ukoliko korisnik pokuša postaviti kut koji je van intervala [0;360) potrebno
 je takav kut svesti na njegov ekvivalentni kut, unutar intervala [0;360) i to dodavanjem
 odnosno oduzimanjem 360.
*/

#include <iostream>
using namespace std;

class Kut {
public:
    Kut();
    Kut(double x);
    Kut(const Kut& x);
    void SetKut (double x);
    double GetKut();
    Kut& operator=(const Kut& c);
    
    friend void swapKut(Kut& a, Kut& b);
private:
    double deg;     // kut u stupnjevima
                    // mora biti >= 0 i < 360
};

// a) default konstruktor kojim se kut postavlja na nulu
Kut::Kut() {
    deg = 0.0;
}

// b) funkcije SetKut i GetKut koje postavljaju, odnosno vraćaju kut u stupnjevima
void Kut::SetKut(double x) {
    
    int step = 360;
    if (x >= 0) {
        step *= -1;
    }
    
    while (x < 0 || x >= 360) {
        x = step + x;
    }
    
    deg = x;
}

double Kut::GetKut() {
    return deg;
}

// c1) kopirni konstruktor za klasu Kut
Kut::Kut(const Kut& x) {
    deg = x.deg;
}

// c2) napišite operator = za klasu kut
Kut& Kut::operator=(const Kut& c) {
    deg = x.deg;
    return *this
}

// d) primjer main funkcije u kojoj ćete iskoristiti klasu Kut i sve napisane funkcije
int main () {
    
    Kut a;
    a.SetKut(-4000.1);
    cout << "Primjer korištenja GetKut metode: " << a.GetKut() << endl;
    
    Kut b = a; // pozivanje kopirnog konstruktora

    Kut c;
    c = a; // pozivanje operatora =
    cout << "Primjer korištenja GetKut metode: " << c.GetKut() << endl;
    
    return 0;
}
