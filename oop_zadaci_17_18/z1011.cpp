#include <iostream>
#include <string>

using namespace std;

class ploca					// izvorna klasa
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

		virtual void Ispisi( void ) = 0;
};

class LP : public ploca		// nasljeðuje
{
	public:
		int  RPM;			

		LP():ploca() { RPM = 45; }
		void Ispisi() {
			cout << "LP: naslov      - " << naslov << endl;
			cout << "LP: izvodjac    - " << izvodjac << endl;
			cout << "LP: trajanje    - " << trajanje << endl;
			cout << "LP: RPM         - " << RPM << endl << endl;
		}
};

class CD : public ploca		// nasljeðuje
{
	public:
		bool RW;			

		CD():ploca() { RW = true; }
		void Ispisi() {
			cout << "CD: naslov      - " << naslov << endl;
			cout << "CD: izvodjac    - " << izvodjac << endl;
			cout << "CD: trajanje    - " << trajanje << endl;
			cout << "CD: RW          - " << RW << endl << endl;
		}
};

class DVD : public ploca	// nasljeðuje
{
	public:
		bool dvostrani;	

		DVD():ploca() {	dvostrani = true; }
		void Ispisi() {
			cout << "DVD: naslov      - " << naslov << endl;
			cout << "DVD: izvodjac    - " << izvodjac << endl;
			cout << "DVD: trajanje    - " << trajanje << endl;
			cout << "DVD: dvostrani   - " << dvostrani << endl << endl;
		}
};

int main()
{
// deklariram pokazivaèe na objekte uz dinamièku alokaciju objekata
	LP* a = new LP;
	CD* b = new CD;
	DVD* c = new DVD;

	a->Ispisi();
	b->Ispisi();
	c->Ispisi();

// dealokacija
	delete a;
	delete b;
	delete c;

	return 0;
}