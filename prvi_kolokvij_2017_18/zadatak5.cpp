/**
 Zadatak 5.1

 Napište funkciju imena swapKut koja prima dva objekta klase Kut i međusobno ih
 mijenja. Funkcija neka bude napisana kao vanjska, prijateljska funkcija klase.
 Napišite main funkciju u kojoj ćete pokazati primjer korištenja funkcije swapKut.

 Zadatak 5.2

 Napište funkciju imena maxKut koja prima dva objekta klase Kut i vraća veći
 od njih. Funkcija neka bude napisana kao vanjska, prijateljska funkcija klase.
 Napišite main funkciju u kojoj ćete pokazati primjer korištenja funkcije maxKut.
*/

#include <iostream>
using namespace std;

class Kut {
public:
    Kut();
    Kut(double x);
    Kut(const Kut& x);
    void SetKut (double x);
    double GetKut();
    Kut& operator=(const Kut& c);
    
    friend void swapKut(Kut& a, Kut& b); // dodat ključnu riječ friend
    friend swapKut maxKut(Kut& a, Kut& b); // dodat ključnu riječ friend
private:
    double deg;     // kut u stupnjevima
                    // mora biti >= 0 i < 360
};

Kut::Kut() {
    deg = 0.0;
}

void Kut::SetKut(double x) {
    
    int step = 360;
    if (x >= 0) {
        step *= -1;
    }
    
    while (x < 0 || x >= 360) {
        x = step + x;
    }
    
    deg = x;
}

double Kut::GetKut() {
    return deg;
}

Kut::Kut(const Kut& x) {
    deg = x.deg;
}

// tijelo fuknkcije nema Kut:: jer je friend funkcija
void swapKut(Kut& a, Kut& b) {
    
    double tmp;
    tmp = a.deg;
    a.deg = b.deg;
    b.deg = tmp;
}

// tijelo fuknkcije nema Kut:: jer je friend funkcija
Kut maxKut(Kut& a, Kut& b) {

    if (a.deg >= b.deg) {
        return a;
    } else {
        return b;
    }
}

int main () {
    
    Kut a, c;
    a.SetKut(100);
    c.SetKut(200);

    swapKut(a, c);
    cout << "Nakon swapKut deg od objekta a je " << a.GetKut();
    cout << ", a deg od objekta c je " << c.GetKut() << endl;

    Kut b = maxKut(a, c);
    cout << "Veći kut je " << a.GetKut() << endl;
    
    return 0;
}
