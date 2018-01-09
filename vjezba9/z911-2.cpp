/**
 Korak 1:
 Progam čita stringove s tipkovnice i sprema ih u listu sve dok se ne upiše
 string "kraj". Nakon toga, pomoću iteratora, ispisuje sve elemente liste
 na ekran.
 
 list klasa nema implementiran operator []. Zbog toga prilikom ispisa ne bi
 bilo moguće pristupit elementu liste na način koji smo prije koristili
 već je potrebno koristiti iterator.
 
 Korak 2:
    ofstream datoteka("lista.txt");
    if (!datoteka) {
        cout << "Greska pri otvaranju datoteke" << endl;
        return 1;
    }
    
    for (iter = lst.begin(); iter != lst.end(); ++iter) {
        datoteka << *iter << " ";
    }
    
    datoteka.close();
*/

#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string str;
    list<string> lst;
    list<string>::iterator iter;
    
    // čita stringove sa tipkovnice, dok se ne upiše "kraj"
    // i upisuje ih u listu
    cin >> str;
    while (str != "kraj") {
        lst.push_back(str);
        cin >> str;
    }
    cout << endl;
    
    // ispisuje stringove iz liste pomoću for petlje sa iteratorom
    for (iter = lst.begin(); iter != lst.end(); ++iter) {
        cout << *iter << endl;
    }
    
    
    // otvraranje datoteke
    ofstream datoteka("lista.txt");
    if (!datoteka) {
        cout << "Greska pri otvaranju datoteke" << endl;
        return 1;
    }
    
    for (iter = lst.begin(); iter != lst.end(); ++iter) {
        datoteka << *iter << " ";
    }
    
    datoteka.close();
    
    return 0;
}