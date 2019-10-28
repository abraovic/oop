/**
 * Korak 1: Objektno orijentirano programiranje
 * 			Duljina stringa je: 35 
 * Program korisit klasu string u koju je pohranjen string "Objektno orijentirano programiranje" i
 * pomoću funkcije te klase length() računa njegovu duljinu i ispusje je na standardni izlaz skupa 
 * sa stringom.
 * 
 * Korak 3: Objekti klase su složeniji tip podatka. Kao takvi imaju i neke metode koje se koriste
 * kako bi se omogućile neke mogućnosti (kao npr. dohvat duljine stringa).
 */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string naziv = "Objektno orijentirano programiranje";
    // ispis stringa na ekran
    cout << naziv << endl;
    // duljina stringa
    cout << "Duljina stringa je: " << naziv.length() << endl;
    
    // Korak 2: dodane linije
    string novi;
    getline (cin, novi);
    cout << novi.length() << endl;
    
    return 0;
}
