/**
 Korak 1:
 Program kreira niz (A) od 10 članova. Pozivom funkcije inicijalizacija
 u niz se upisuje prvih 10 parnih projeva (0 - 18). Kod ove fukcije nije
 potreban return, tj. funkcija je void, jer je ime niza pokazivač na prvi
 element niza (ako se sjetimo prethodnih vježbi gdje kaže da se niz prenosi
 u fukciju kao pokazivač, a kada radimo s pokazivačima onda nije potrebno
 vraćati vrijednost jer se radi s originalnom vrijednosti). Nakon toga se vrši
 ispis članova niza i sume niza koristeći funkciju suma.
*/

#include <iostream>
using namespace std;

// funkcija koja postavlja vrijednosti 
// članova niza
//
// deklaracija niza kao argumenta funkcije
// ˇˇˇˇˇˇˇˇ

void inicijalizacija(int iA[])
{
	for(int i=0; i<10 ; i++) {
		iA[i]= 2 * i;
	}
}


// funkcija koja računa i vraća sumu niza
int suma(int iA[])
{
	int s = 0;

	for(int i=0; i<10 ; i++) {
		s = s + iA[i];
	}

	return s;
}

int main()
{
	int A[10]; // deklaracija niza

	// poziv funkcije, uz prosljeđivanje niza kao argumenta
	inicijalizacija(A);

	// ispis sadržaja niza
	for( int i=0; i<10 ; i++ ) {
		cout << "A[" << i << "]=" << A[i] << endl;
	}

	// ispis sume niza
	cout << "Suma niza je:" << suma(A) << endl;

	return 0;
}
