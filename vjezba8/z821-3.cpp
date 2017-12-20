/**
 Korak 1:
     Unos proizvoljnog niza brojeva u vektor.
     Unos zavrsava kada se otkuca neko slovo!
     1
     2
     3
     4
     5
     g
     Suma od 5 elemenata: 15. Srednja vrijednost: 3
 
 Korak 3:
     Unos proizvoljnog niza brojeva u vektor.
     Unos zavrsava kada se otkuca neko slovo!
     1
     3
     5
     4
     2
     g
     Suma od 5 elemenata: 15. Srednja vrijednost: 3
     1. element novog vectora je: 2
     2. element novog vectora je: 4
     3. element novog vectora je: 5
     4. element novog vectora je: 3
     5. element novog vectora je: 1
 */

#include <iostream>
// predložak tvector - otvoriti za detalje
#include "tvector.h"

using namespace std;

int main()
{
    // deklaracija objekta vec kao spremnika tipa tvector
    tvector<double> vec;
    tvector<double> revVec;
    double val;
    
    cout << "Unos proizvoljnog niza brojeva u vektor." << endl;
    cout << "Unos zavrsava kada se otkuca neko slovo!" << endl;
    // punjenje vektora
    while (cin >> val)
    {
        vec.push_back(val);
    }
    
    // nakon završenog unosa računamo sumu i srednju vrijednost
    double sum = 0;
    for (int i=0; i<vec.size(); i++) {
        // pojedinom članu vektora pristupamo slično kao i članu polja
        sum += vec[i];
    }
    double avg =sum /vec.size();
    
    cout <<"Suma od "<<vec.size()
    <<" elemenata: "<< sum
    <<". Srednja vrijednost: "<< avg << endl;
    
    // korak 2
    for (int i=0; i<vec.size(); i++) {
        // dohvaćamo element koji je na poziciji koja se računa
        // kao veličina niza umanjena za iterator + 1
        // ovaj +1 je jer i kreće od nula
        // to znaci da ce prvo dohvatit vrijednost s pozcije velicina -1 (dakle zadnji)
        // onda s pozicije velicina - 2 (predzadnji)
        // ...
        // dakle što je i veći to je pozicija manja
        revVec.push_back(vec[vec.size() - (i+1)]);
    }
    
    for (int i=0; i<revVec.size(); i++) {
        cout << i + 1 << ". element novog vectora je: " << revVec[i] << endl;
    }
    
    return 0;
}