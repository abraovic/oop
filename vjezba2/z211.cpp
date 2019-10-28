/**
 * Korak 1:  Progam ispisuje vrijednost varjable "r" na standarni izlaz koristeći
 * funkciju ispisi(int)
 * 
 * Korak 2: Obzirom da je varibala koji prima funkcija tipa INT, a varijabla rDouble
 * je tipa DOUBLE funkcija ne može ispisati ispravnu vrijednost. Zbog toga se javlja
 * i upozorenje.
 * 
 * Korak 3: Sada imamo preopterećenu funkciju koja za argument prima varijablu tipa DOUBLE.
 */

#include <iostream>
using namespace std;

void ispisi (int lr)
{
    cout << lr << endl;
}

// Korak 4: kod preopterećene funkcije
void ispisi (double lr)
{
    cout << lr << endl;
}

int main()
{
    int r;
    r = 2;
    ispisi(r);
    
    double rDouble = 2.4;
    ispisi(rDouble);
    
    return 0;
}