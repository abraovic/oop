/**
 Zadatak 2.

 Napišite ispis slijedećeg programa:

 #include <iostream>
 using namespace std;

 void Inc(int &y, int x) { y = ++y + x++; }
 void Div(int &y, int x) { y = y++ / ++x; }

 int main () {
	int a = 5, b = 3;
	int& c = a;
	int& d = b;
	if (a % b) {
		Inc(a, b); cout << a << " " << b << endl;
		Div(a, c); cout << a << " " << b << endl; 
	} else {
		Inc(b, a); cout << a << " " << b << endl;
		Div(b, d); cout << a << " " << b << endl; 
	}
	retrurn 0;
 }
*/

#include <iostream>
using namespace std;

void Inc(int &y, int x) { 
	// y = 5, x = 3
	// Kako se izvršava ovaj izraz:
	// 1. ++y -> y se uveća za 1 i sad iznosi 6
	// 2. ++y + x -> y se zbraja s x 6 + 3 pa sada iznosi 9
	// 3. ++x + x++ -> x++ uvećava x za jedan pa sada x iznosi 4
	y = ++y + x++;

	// dakle nakon ovog izraza y = 9, a x = 4
	// obzirom da je y prenesen po referenci varijabla a je
	// isto jednaka 9
	// obzirom da je x prenesen po vrijednosti varijabla b ostaje
	// 3, a varijabla x nije bitna u daljnjem izvršavanju programa
}
void Div(int &y, int x) { 
	// y = 9, x = 9
	// Kako se izvršava ovaj izraz:
	// 1. ++x -> x se uveća za 1 i sad iznosi 10
	// 2. y / ++x  -> y se podjeli sa x 9 / 10 što znači da je y jednako
	//				  0 jer je riječ o cjelobrojnom djeljenju
	// 3. y++ / ++x -> sada se izvrši y++ što znači da se y uveća za 1 što znači y = 1
	y = y++ / ++x;

	// dakle nakon ovog izraza y = 1, a x = 10
	// obzirom da je y prenesen po referenci varijabla a je
	// isto jednaka 1
	// budući da je varijabla c iz glavnog programa referenca od a
	// to znači da je i ona isto 1 (c = 1)
	// varijabla x koja je 10 više nije bitna jer je ona prenesena po
	// vrijednosti, a funkcija je gotova s izvršavanjem
}

int main () {
	int a = 5, b = 3;
	int& c = a;
	int& d = b;

// obzirom da operacija % vraća ostatak cjelobrojnog djeljenja rezultat 5%3 = 2
// uvjet je zadovoljen, stoga se izvršava kod u if bloku
	if (a % b) {
		// funkciji Inc šaljemo varijable a i b i to tako da se varijabla a prenosi
		// po referenci, a varijabla b po vrijednosti
		// to znači da se svaka promjena koja se dogodi s varijablom a u funkciji događa
		// i u glavnom programu
		Inc(a, b); 
		
		// nakon izvršenja funkcije a = 9 b = 3
		// što znači da je ispis
		// 9 3 
		cout << a << " " << b << endl;

		// funkciji Div šaljemo varijable a i c i to tako da se varijabla a prenosi
		// po referenci, a varijabla c po vrijednosti
		// obzorom da je c referenca od a sve sto se u prethodnom koraku dogodilo s
		// varijablom a dogodilo se i s c, to znači da je a = c = 9
		// isto kao i prije, svaka promjena koja se dogodi s varijablom koja se prenosi
		// po referenci u funkciji očituje se i u glavnoj funkciji
		Div(a, c); 

		// nakon izvršenja funkcije a = 1 b = 3
		// što znači da je ispis
		// 1 3
		cout << a << " " << b << endl; 	// potrebno je obratiti pažnju da iako se funkciji Div
										// šalju varijable a i c, ispisuju se varijable a i b
	} else {
		Inc(b, a); cout << a << " " << b << endl;
		Div(b, d); cout << a << " " << b << endl; 
	}
	return 0;
}