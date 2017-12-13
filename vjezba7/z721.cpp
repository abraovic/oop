/**
 Korak 1:
 Ispis programa
	Upisite dva kompleksna broja (dva para vrijednosti):
	1 2 3 4
	Upisali ste brojeve
	 a=1+i*2
	 b=3+i*4
	a je manje od b!
 Koristeći klasu kompleks kreiramo dva objekta. Preopterećenim operatorom toka >>
 upisujemo dva kompleksna broja (dva para vrijednosti). Ispisujemo ih u pravilnom
 obliku. Vršimo usporedbu koristeći preopterećeni operator < i ispisujemo odgovarajuću
 poruku
*/

#include <iostream>
#include <cmath>

using namespace std;

class kompleks
{
private:
	double real;
	double imag;

public:
	kompleks();
	kompleks(double r, double i);

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

bool operator < (kompleks &c1, kompleks &c2)
{
	if( ( pow(c1.getReal(),2) + pow(c1.getImag(),2 ) < ( pow( c2.getReal(), 2) + pow( c2.getImag(), 2) ) ) )
		return true;
	else
		return false;
} 

istream& operator >> (istream &s, kompleks &c1)
{
	double rtemp, itemp;

	if (s >> rtemp >> itemp){
		c1.setReal(rtemp);
		c1.setImag(itemp);
	}
	return s;
}

ostream& operator << (ostream &s, kompleks &c)
{
	s << c.getReal() << " + i*" << c.getImag() <<endl;
	return s;
}

int main()
{
	kompleks a;
	kompleks b;

	cout << "Upisite dva kompleksna broja (dva para vrijednosti):" << endl;
	cin >> a;
	cin >> b;

	cout << "Upisali ste brojeve" << endl;
	cout << a;
	cout << b;

	if( a < b )
		cout << "a je manje od b!" << endl;
	else
		cout << "a je vece ili jednako b!" << endl;

	return 0;
}