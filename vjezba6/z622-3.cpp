/**
 Korak 2:
 Kod ispod je napisan prema zahtjevu u koraku 2.

 Korak 3:
 	class klNiz {
	private:
		int niz[10];

	public:
		klNiz();
		int sumaNiza();
	};
*/

#include <iostream>
using namespace std;

class klNiz {
private:
	int niz[10];

public:
	klNiz();
	int sumaNiza();
};

klNiz::klNiz()
{
	for ( int i = 0; i < 10; i++ ) {
		niz[i] = 2 * i;
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


int main()
{
	klNiz n;
	// ispis sume niza
	cout << "Suma niza je:" << n.sumaNiza() << endl;

	return 0;
}
