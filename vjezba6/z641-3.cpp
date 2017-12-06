/**
 Korak 1:
 Ispis programa:
 	Upisite dva kompleksna broja (dva para vrijednosti):
	2 3 4 5
	Upisali ste brojeve
	 a=2+i*3
	 b=4+i*5
	a je manje od b!
	 c=2+i*3
 Koristeći preopterećeni operator >> upisujemo dva kompleksna broja. Preopterećenim
 operatorom < uspoređujemo unsene kompleksne brojeve te ispisujemo odgovarajuću
 poruku. Na kraju preopterećenim opratorom = spremamo vrijendost broja a u c.

 Korak 2:
	bool kompleks::operator > (const kompleks& c) {
		// operator uspoređuje dva komplexna broja koristeći člansku funkciju
		// na način da usporedi njihove apsolutne vrijednosti
		if( (pow(real,2)+pow(imag,2 ) ) > ( pow(c.real,2) + pow(c.imag, 2))) {
			return true;
		} else {
			return false;
		}
	}
 Ispis programa:
	Upisite dva kompleksna broja (dva para vrijednosti):
	4 6 1 2
	Upisali ste brojeve
	 a=4+i*6
	 b=1+i*2
	a je vece ili jednako b!
	a je vece ili jednako b!
	 c=4+i*6

 Korak 3:
	kompleks& kompleks::operator += (const kompleks& c) {
		real += c.real;
		imag += c.imag;

		return *this;
	}
 Ispis programa:
	Upisite dva kompleksna broja (dva para vrijednosti):
	1 2 3 4
	Upisali ste brojeve
	 a=1+i*2
	 b=3+i*4
	a je manje od b!
	a je manje od b!
	 c=1+i*2
	 c=2+i*4
*/

#include <iostream>
#include "math.h"
using namespace std;

class kompleks {
private:
	double real;
	double imag;

public:
	kompleks();
	kompleks(double r, double i);

// deklaracija operatora kao prijateljskih funkcija
	friend bool operator < (const kompleks& c1, const kompleks& c2);
	friend istream& operator >> (istream& s, kompleks& c1);

// deklaracija operatora kao članske funkcije
	kompleks& operator = (const kompleks& c);
	bool operator > (const kompleks& c);
	kompleks& operator += (const kompleks& c);

// pristupnici
	double getReal() {return real;};
	double getImag() {return imag;}; 

	void setReal(double r) {real = r;};
	void setImag(double i) {imag = i;};
};

kompleks::kompleks()
{
	real = 0.0;
	imag = 0.0;
}
kompleks::kompleks(double r, double i)
{
	real = r;
	imag = i;
}

// implementacija operatora < kao prijateljske funkcije
// primjetite da nema oznaku imenskog prostora kompleks::
bool operator < (const kompleks& c1, const kompleks& c2)
{
// operator uspoređuje dva kompleksna broja primljene kao argumente c1 i c2 
// na način da usporedi njihove apsolutne vrijednosti
	if( (pow(c1.real,2)+pow(c1.imag,2 ) ) < ( pow(c2.real,2) + pow(c2.imag, 2))) {
		return true;
	} else {
		return false;
	}
}

// implementacija operatora >> kao prijateljske funkcije
// primjetite da nema oznaku imenskog prostora kompleks::
istream& operator >> (istream &s, kompleks &c1)
{
// argument s je ulazni tok s kojeg funkcija čita kompleksni broj
// argument c1 je kompleksni broj u kojeg će se upisati ono što se pročita sa toka s
	double rtemp, itemp;

	if (s >> rtemp >> itemp) {	// čitam dva doublea sa toka s broja c1
		c1.real = rtemp;		// postavljam realni i imaginarni dio
		c1.imag = itemp;
	}

	return s;
}

// implementacija operatora = kao članske funkcije
// primjetite da ima oznaku imenskog prostora kompleks:: 
kompleks& kompleks::operator = (const kompleks& c)
{
	real=c.real;
	imag=c.imag;

	return *this;
}

bool kompleks::operator > (const kompleks& c)
{
	// operator uspoređuje dva komplexna broja koristeći člansku funkciju
	// na način da usporedi njihove apsolutne vrijednosti
	if( (pow(real,2)+pow(imag,2 ) ) > ( pow(c.real,2) + pow(c.imag, 2))) {
		return true;
	} else {
		return false;
	}
}

kompleks& kompleks::operator += (const kompleks& c)
{
	real += c.real;
	imag += c.imag;

	return *this;
}

int main()
{
// deklaracija dva objekta a i b klase kompleks
	kompleks a;
	kompleks b;
	
	cout << "Upisite dva kompleksna broja (dva para vrijednosti):" << endl;
// za čitanje a i b koristimo operator zahvaćanja u tok koji smo dodali klasi
	cin >> a;
	cin >> b;

	cout << "Upisali ste brojeve" << endl;
	cout<<" a="<<a.getReal()<<"+i*"<<a.getImag()<<endl;
	cout<<" b="<<b.getReal()<<"+i*"<<b.getImag()<<endl;

// za usporedbu a i b koristimo operator usporedbe koji smo dodali klasi
	if( a < b ) {
		cout << "a je manje od b!" << endl;
	} else {
		cout << "a je vece ili jednako b!" << endl;
	}

// za usporedbu a i b koristimo operator usporedbe koji smo dodali klasi
	if( a > b ) {
		cout << "a je vece ili jednako b!" << endl;
	} else {
		cout << "a je manje od b!" << endl;
	}

	kompleks c;
// pridruživanje vrijednosti a kompleksnom broju c koristimo operator 
// pridjele vrijednosti koji smo dodali klasi
	c = a;
	cout<<" c="<<c.getReal()<<"+i*"<<c.getImag()<<endl;

	c += a;
	cout<<" c="<<c.getReal()<<"+i*"<<c.getImag()<<endl;	

	return 0;
}