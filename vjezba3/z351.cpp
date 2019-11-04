/**
 * Korak 1: x - globalna, y - lokalna, z - statička
 * 
 * Korak 2: Potrebno je izbaciti linije y++, z++, cout << "y=" << y << endl; i cout << "z=" << z << endl;
 * 			zato što te varijable nisu deklarirane i funkciji main nego samo u u funkiji fun i to kao
 * 			lokalne verijable pa su stoga "nevidljive" u main funkciji
 *
 * Korak 3: Ispis:
 * 			x=1
 * 			y=1
 * 			z=1
 * 			x=2
 * 			x=3
 * 			y=1
 * 			z=2
 * 
 * 			x - doseg unutar cijelog programa, trajanje za vrijeme trajanja programa
 * 			y - doseg unutar funkcije fun, trajanje dok traje funkcija fun
 * 			z - doseg unutar unkcije fun, trajanje za vrijeme trajanja programa
 */

#include <iostream>
using namespace std;

int x = 0;

void fun(void) {
	int y = 0;
	static int z = 0;

	x++;
	y++;
	z++;

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "z=" << z << endl;
}

int main()
{
	fun();
	
	x++;
	cout << "x=" << x << endl;

	fun();

	return 0;
}
