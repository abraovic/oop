/**
 * Korak 1: Funkcija povrsinaVrijednost ima povratni tip double i vraća vrijednost
 * površine. Funkcija povrsinaPokazivac nema povratni tip i rezultat se dobije 
 * koristeći pokazivač *pok
 * 
 * Korak 4: Ne može jer funkcija ne može vratiti dvije vrijednosti
 */

#include <iostream>
using namespace std;

// funkcija koja vraća rezultat kao vlastitu vrijednost
double povrsinaVrijednost(double lr) {
    return lr*lr*3.14;
}

// funkcija koja vraća rezultat putem pokazivača
void povrsinaPokazivac(double lr, double* pok) {
    *pok = lr*lr*3.14;
}

// Korak 2: kod funkcije
void povrsinaReferenca(double lr, double& ref) {
    ref = lr*lr*3.14;
}

// Korak 3: kod funkcije
void povrsinaOpseg(double lr, double *pov, double *op) {
    *pov = lr * lr * 3.14;
    *op = 2 * lr * 3.14;
}

int main()
{
    double r;                           // deklaracija varijable r
    double p;                           // deklaracija varijable p
    double ref;
    
    cout << "Upisite radijus kruga:";   // ispis
    cin >> r;                           // učitavanje sa tastature
    // poziv funkcija i ujedno ispis na ekran
    cout << "Povrsina kruga =" << povrsinaVrijednost(r) << " m2" << endl;
    // poziv funkcije
    povrsinaPokazivac(r, &p);
    // ispis na ekran
    cout << "Povrsina kruga =" << p << " m2" << endl;
    
    povrsinaReferenca(r, ref);
    cout << "Povrsina kruga =" << ref << " m2" << endl;
    
    // Korak 3: primjer poziva
    double pov;
    double op;
    povrsinaOpseg(r, &pov, &op);
    cout << "Povrsina kruga =" << pov << " m2, a opseg je " << op << " m" << endl;
    
    
    return 0;
}