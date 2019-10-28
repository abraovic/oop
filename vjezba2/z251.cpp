#include <iostream>>
using namespace std;

double rekurzija(float b, int p) {
    if (p == 0) {
        return 1;
    } else if (p < 0) {
        // dio za negativne potencije
        return (1 / b)  * rekurzija(b, p + 1);
    } else {
        return b * rekurzija(b, p - 1);
    }
}

int main(void)
{
    int p;                 // deklaracija potencije
    float b;        // deklaracija baze
    
    cout << "Upisite bazu:";        // ispis na ekran
    cin >> b;                       // učitavanje sa tastature
    cout << "Upisite potenciju:";   // ispis na ekran
    cin >> p;                       // učitavanje sa tastature
    
    double lr = rekurzija(b, p);
    cout << b << " na " << p << " je: " << lr << endl;
    
    return 0;
}