/**
 * Korak 1: Program nas traži da unesemo dvije varijable (baza i potencija). Nakon unosa
 * postavlja se početna vrijednost r na 1. Iza toga se vrti for petlja p puta i pri svakom
 * prolasku računa potenciju tako što prethodni rezultat množi s unesenom bazom.
 */

#include <iostream>>
using namespace std;

// Korak 3: rekurzivna funkcija
int rekurzija(int b, int p) {
    if (p == 0) {
        return 1;
    } else {
        return b * rekurzija(b, p - 1);
    }
}

int main(void)
{
    unsigned int i;                 // deklaracija brojača i
    unsigned int p;                 // deklaracija potencije
    unsigned int b, r;              // deklaracija baze i rezultata
    
    cout << "Upisite bazu:";        // ispis na ekran
    cin >> b;                       // učitavanje sa tastature
    cout << "Upisite potenciju:";   // ispis na ekran
    cin >> p;                       // učitavanje sa tastature
    
    r = 1;                          // inicijaliziram vrijednost rezultata na 1
    for(i = 0; i < p; i++){
        r = r * b;                  // p puta potenciram bazu
    }
    
    // ispis rezultata
    cout << b << " na " << p << " je: " << r << endl;
    
    // Korak 2: while petlja
    r = 1;
    i = 0;
    while (i < p) {
        r *= b; // umjesto r = r * b
        i++;
    }
    cout << b << " na " << p << " je: " << r << endl;
    
    // Korak 3: primjer poziva funkcije
    r = rekurzija(b, p);
    cout << b << " na " << p << " je: " << r << endl;
    
    return 0;
}