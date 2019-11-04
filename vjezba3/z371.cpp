#include <iostream>
// primjer konstante - obzriom da je PI uvijek 3.14 možemo to i ovako
// zapisati
#define PI 3.14;
using namespace std;

// primjer deklaracije funkcija na počektu, ali bez tijela
// tijela su im napisana na kraju
// kod deklaracije je potrebno napisati ime i povratni tip funkcije
// kao i tipove argumenata (pri čemi imena argumenata mogu, ali ne
// moraju biti navedena)
// na kraju deklaracije je potrebno staviti točku zarez (;)
void opsegTrokuta(int, int, int, float*);
void opsegKvadrata(int, float*);
void opsegKruga(int, float*);

int main() {
    
    int choice;     // ovdje spremamo korisnikov odabir kako bismo mogli
                    // izračunati opseg za odabrani lik
    float* op;      // pokazivač koji ćemo koristiti za spremanje izračunatog opsega
                    // pokazivač je tipa float jer opseg kruga zbog PI neće biti
                    // cijeli broj
    
    cout << "Izaberite geometrijski lik: " << endl;
    cout << "\t1. Trokut" << endl;
    cout << "\t2. Kvadrat" << endl;
    cout << "\t3. Krug" << endl;
    
    cin >> choice;
    
    switch (choice) {
        case 1:
            int a, b, c; // stranice trokuta
            cout << "Unesite stranice trokuta u cm: " << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            
            opsegTrokuta(a, b, c, op);
            break;
        case 2:
            int s; // stranica kvadrata
            cout << "Unesite stranicu kvadrata u cm: " << endl;
            cin >> s;
            
            opsegKvadrata(s, op);
            break;
        case 3:
            int r; // radijus kruga
            cout << "Unesite radijus kruga u cm: " << endl;
            cin >> r;
            
            opsegKruga(r, op);
            break;
        default:
            break;
    }
    
    cout << "Opseg odabranog lika je: " << *op << " cm!" << endl;
    
    return 0;
}


void opsegTrokuta(int a, int b , int c, float* op) {
    *op = a + b + c;
}

void opsegKvadrata(int s, float* op) {
    *op = 4 * s;
}

void opsegKruga(int r, float* op) {
    *op = 2 * r * PI;
}
