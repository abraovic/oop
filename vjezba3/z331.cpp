/**
 * Korak 1: Ispis je 0 0 1
 * 
 * Korak 2: Izvršenje po prioritetima:
 * 			i++ - a -> iako i++ ima veći prioritet to što je ++ iza imena varijable znači da će
 *					   se i uvećati nakon što se linija završi
 * 			(b = 0) -> zbog zagrada
 * 			i++ - a == ( b = 0 )
 */

#include <iostream>
using namespace std;

int main()
{
	int i=0, a=2, b;

	while ( i < 3 ) {
		cout << ( i++ - a == ( b = 0 ) ) << endl;
	}

	return 0;
}