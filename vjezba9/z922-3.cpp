/**
 Korak 2:
 Bilo je potrebno oko 40-tak linija koda. To je 10-tak linija koda manje
 nego u prethodnom primjeru. Nasljeđivanjem smo postigli da se isti parametri
 koji se koriste u svim klasama kogu nasljediti dok se u nasljeđenim
 klasama dodaju samo parametri specifični za nasljeđeni pod tip.

 Korak 3:
	class MP3CD : public ploca
	{
	public:
		string izvor;

		MP3CD() :ploca() { izvor = "vinil"; }
	};
*/

#include <iostream>
#include <string>

using namespace std;

class ploca						// izvorna klasa
{
public:
	string naslov;
	string izvodjac;
	int  trajanje;

	ploca()
	{
		naslov = "";
		izvodjac = "";
		trajanje = 45;
	}
};


class LP : public ploca			// LP nasljeđuje od klase ploca
{
public:
	int  RPM;

	LP() :ploca() { RPM = 45; }
};

class CD : public ploca			// CD nasljeđuje od klase ploca
{
public:
	bool RW;

	CD() :ploca() { RW = true; }
};

class DVD : public ploca		// DVD nasljeđuje od klase ploca
{
public:
	bool dvostrani;

	DVD() :ploca() { dvostrani = true; }
};

class MP3CD : public ploca
{
public:
	string izvor;

	MP3CD() :ploca() { izvor = "vinil"; }
};

void main()
{
	LP a;
	CD b;
	DVD c;

	cout << "LP: naslov   - " << a.naslov << endl;
	cout << "LP: izvodjac - " << a.izvodjac << endl;
	cout << "LP: trajanje - " << a.trajanje << endl;
	cout << "LP: RPM      - " << a.RPM << endl << endl;

	cout << "CD: naslov   - " << b.naslov << endl;
	cout << "CD: izvodjac - " << b.izvodjac << endl;
	cout << "CD: trajanje - " << b.trajanje << endl;
	cout << "CD: RW       - " << b.RW << endl << endl;

	cout << "DVD: naslov    - " << c.naslov << endl;
	cout << "DVD: izvodjac  - " << c.izvodjac << endl;
	cout << "DVD: trajanje  - " << c.trajanje << endl;
	cout << "DVD: dvostrani - " << c.dvostrani << endl << endl;

	MP3CD d;
	cout << "MP3CD: naslov   - " << d.naslov << endl;
	cout << "MP3CD: izvodjac - " << d.izvodjac << endl;
	cout << "MP3CD: trajanje - " << d.trajanje << endl;
	cout << "MP3CD: izvor    - " << d.izvor << endl;
}