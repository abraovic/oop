/**
 Korak 1:
 Umjesto tvector.h koristimo vector jer tvector nema implementiranu
 podršku za iterator.

 Kod:
    ...
    vector<double>::iterator it;
    ...
    for (it = vec.begin(); it != vec.end(); it++) {
        // pojedinom članu vektora pristupamo slično kao i članu polja
        sum += *it;
    }
    ...
*/
#include <iostream>
// predložak tvector - otvoriti za detalje
#include <vector>

using namespace std;

int main()
{
    // deklaracija objekta vec kao spremnika tipa tvector
    vector<double> vec;
    vector<double>::iterator it;
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
    for (it = vec.begin(); it != vec.end(); it++) {
        // pojedinom članu vektora pristupamo slično kao i članu polja
        sum += *it;
    }
    double avg =sum /vec.size();
    
    cout <<"Suma od "<<vec.size()
    <<" elemenata: "<< sum
    <<". Srednja vrijednost: "<< avg << endl;
    
    return 0;
}