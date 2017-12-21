/**
 Zadatak 3.

 Napišite funkciju:
 	void Djeljenje (int brojnik, int nazivnik, int &cjel, float &dec)
 Koja prima četiri argumenta: brojnik je cjelobrojna vrijednost koju treba podjeliti sa
 nazivnik; rezultat cjelobrojnog djeljenja treba vratiti kao cjel, a rezultat decimalnog
 djeljenja treba vratiti kao dec.
 NAPOMENA: Djeljenje izvršite samo ako nazivnik nije jednak nuli, inače ispišite poruku o
 grešci i nemojte mijenjati vrijednost povratnih varijabli cjel i dec.
 Napišite primjer main funkcije u kojoj ćete iskoristiti funkciju Djeljenje.
*/

#include <iostream>
using namespace std;

void Djeljenje (int brojnik, int nazivnik, int& cjel, float& dec) {
    
    if (nazivnik != 0) {
        cjel = brojnik / nazivnik;
        dec = (float)brojnik / nazivnik;
    } else {
        cout << "Nazivnik ne smije biti jednak 0!" << endl;
    }
}

int main () {
    int cjel;
    float dec;
    
    Djeljenje(5, 3, cjel, dec);
    
    cout << "Cjelobrojni rezultat od 5/3 je " << cjel;
    cout << " a decimalni je " << dec << endl;
    
    return 0;
}