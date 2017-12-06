/**
 Korak 1:
 Ispis programa:
 	a = 6.6 + i * 4.7
	b = 2.6 + i * 3.4
	c = a + b
	c = 9.2 + i * 8.1
 Program kreia dva objekta klase komplex (a, b), ispisuje ih u pravilnom obliku
 kao real + i * imag. Korištenjem preopterećenog operatora + program zbraja dva
 kompleksna broja i ispisuje zbroj u pravinom obliku.

 Korak 2:
	// implementacija operatora oduzimanja dva kompleksna broja
	kompleks kompleks::operator - (const kompleks& d) { 
		kompleks razlika(real - d.real, imag - d.imag); 
		return razlika;
	}
*/

#include <iostream>
using namespace std;
// deklaracija klase za kompleksni broj
class kompleks {
private:
	double real;
	double imag;
public:
// deklaracija podrazumjevanog konstruktora
	kompleks();
// deklaracija konstruktora sa argumentima
	kompleks(double r, double i);
// deklaracija operatora zbrajanja dva kompleksna broja
	kompleks operator + (const kompleks& d); 
// deklaracija operatora oduzimanja dva kompleksna broja
	kompleks operator - (const kompleks& d);

	double getReal() {return real;};
	double getImag() {return imag;};
};

// implementacija podrazumjevanog konstruktora
kompleks::kompleks()
{
       real = 0.0;
       imag = 0.0;
}

// implementacija konstruktora sa argumentima
kompleks::kompleks(double r, double i)
{ 
	real = r;
	imag = i;
}

// implementacija operatora zbrajanja dva kompleksna broja
kompleks kompleks::operator + (const kompleks& d)
{ 
	kompleks zbroj(real + d.real, imag + d.imag); 
	return zbroj;
}

// implementacija operatora oduzimanja dva kompleksna broja
kompleks kompleks::operator - (const kompleks& d)
{ 
	kompleks razlika(real - d.real, imag - d.imag); 
	return razlika;
}

int main()
{
// deklaracija objekta uz posziv konstruktora s argumentima
	kompleks a(6.6, 4.7);
	kompleks b(2.6, 3.4);
// deklaracija objekta uz poziv podrazumjevanog konstruktora
	kompleks c;
// ispis dvaju kompleksnih brojeva
	cout << "a = " << a.getReal() << " + i * " << a.getImag() << endl; 
	cout << "b = " << b.getReal() << " + i * " << b.getImag() << endl;
// zbrajanje dva kompleksna broja - poziva operator klase kompleks
	c = a + b;
// ispis zbroja
	cout << "c = a + b" << endl;
	cout << "c = " << c.getReal() << " + i * " << c.getImag() << endl;

// zbrajanje dva kompleksna broja - poziva operator klase kompleks
	kompleks razlika = a - b;
	cout << "razlika = a - b" << endl;
	cout << "razlika = " << razlika.getReal() << " + i * " << razlika.getImag() << endl;

	return 0;
}
