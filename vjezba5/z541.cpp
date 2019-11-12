/**
 * Korak 1: Koristili smo ključni riječ inline. Prednost ovog pristupa je da se prilikom kompajliranja
 * 			kod funkcije kopira na mjesto poziva pa se izbjegava vrijeme porebno da se funkcija stavi
 *			na stog (odnosno njene varijable), također se izbjegava vrijeme potrebno za return. Ovo je
 * 			u principu korisno kada je vrijeme izvršavanja funkcije toliko kratko da je zanemarivo
 *			u odnosu na vrijeme koje se potroši za sami poziv i vraćanje vrijednosti. Mana ovakvog
 *			pristupa je u tome što se povećava veličina konačne izvršne datoteke jer se kod kopira.
 * 			Više o ovome pogledajte na linku: https://www.geeksforgeeks.org/inline-functions-cpp/
 *
 * Korak 2: -> friend double Udaljenost(tocka t1, tocka t2);
 *			-> double Udaljenost(tocka t1, tocka t2)
 * 			   {
 * 				   return sqrt(pow((t2.x - t1.x), 2) + pow((t2.y - t1.y), 2));
 * 			   }
 * 			-> Udaljenost(t1,t2)
 *
 * Korak 3: Bio bi brži. Koristeći referencu ne bi se u funkciji Udaljenost stvarali novi objekti
 *			već bi se preko reference prenijela adresa potojećih objekata. Mana ovog pristupa je
 * 			u tome što je u slučaju reference potrebno voditi računa da bilo koja promjena unutar
 * 			funkcije izravno utječe na originalne objekte.
 */

#include <iostream>
#include <math.h> 	// ova biblioteka sadrži funkcije sqrt za računanje drugog korijena
					// i pow za računanje potencije
using namespace std;

class tocka
{
	private:
		double x, y;

	public:
		tocka();
		tocka(double tempX, double tempY);

		friend double Udaljenost(tocka t1, tocka t2);
};

inline tocka::tocka()
{
	x = y = 0;
}

inline tocka::tocka(double tempX, double tempY)
{
	x = tempX;
	y = tempY;
}

double Udaljenost(tocka t1, tocka t2)
{
	return sqrt(pow((t2.x - t1.x), 2) + pow((t2.y - t1.y), 2));
}

int main()
{
	tocka t1(1.4, 4.3);
	tocka t2(5.7, -3.8);

	cout << "Udaljenost između točaka t1 i t2 je: " << Udaljenost(t1,t2) << endl;

	return 0;
}