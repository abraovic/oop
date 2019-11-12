#include <iostream>
using namespace std;

// Korak 1: Klasa s parametrima i medotdama
class razlomak
{
	private:
		int brojnik;
		int nazivnik;

	public:
		razlomak();

		void Set(int tempBr, int tempNz);
		float GetDecimal();
};

razlomak::razlomak()
{
	brojnik = 0;
	nazivnik = 1;
}

void razlomak::Set(int tempBr, int tempNz)
{
	brojnik = tempBr;
	if (tempNz != 0) {
		nazivnik = tempNz;
	} else {
		cout << "Greška! Nazivnik razlomka mora biti različit od nula (0)" << endl;
	}
}

float razlomak::GetDecimal()
{
	return (float)brojnik / nazivnik;
}

// Korak 2: Funkcija main() s primjerom korištenja klase
int main()
{
	razlomak raz;
	int tmpBr, tmpNz;

	cout << "Unesite vrijednost brojnika: " << endl;
	cin >> tmpBr;
	cout << "Unesite vrijednost nazivnika: " << endl;
	cin >> tmpNz;

	raz.Set(tmpBr, tmpNz);
	cout << "Decimalna vrijednost unesenog razlomka je: " << raz.GetDecimal() << "!" << endl;

	return 0;
}