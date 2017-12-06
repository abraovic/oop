#include <iostream>
using namespace std;

class klNiz {
private:
	int* niz = NULL;	// kako je naziv niza pokazivac na prvi clan, kada je prazan
						// postavi pokazivac na NULL

public:
	klNiz(int size);	// u konstruktoru posalji velicinu niza
	int sumaNiza();
	~klNiz();
};

klNiz::klNiz(int size)
{
	niz = new int[size];	// alociran memoriju za niz veličine size
	for ( int i = 0; i < size; i++ ) {
		niz[i] = 2 * i;	// inicijalizacija
	}
}

int klNiz::sumaNiza()
{
	int s = 0;

	for ( int i = 0; i < 10; i++ ) {
		s += niz[i];
	}

	return s;
}

klNiz::~klNiz()
{
	delete [] niz;	// oslobodi alociranu memoriju za array
	niz = NULL;		// osiguranje da se dealocirana memorija ne koristi
}


int main()
{
	int size;
	cout << "Unesi veličinu niza: " << endl;
	cin >> size;

	klNiz n(size);

	// ispis sume niza
	cout << "Suma niza je:" << n.sumaNiza() << endl;

	return 0;
}