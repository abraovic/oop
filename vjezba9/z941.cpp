#include <iostream>
#include <string>

using namespace std;

class kolegij
{
public:
    kolegij();
    
    void SetIme(string ime);
    void SetPredavac(string predavac);
    void SetUkupnaOcjena(int ukupna_ocjena);
    
    string GetIme();
    string GetPredavac();
    int GetUkupnaOcjena();
    
private:
    string ime;
    string predavac;
    int ukupna_ocjena;
};

kolegij::kolegij() {
    this->ime = "";
    this->predavac = "";
    this->ukupna_ocjena = 1;
}

void kolegij::SetIme(string ime) {
    this->ime = ime;
}

void kolegij::SetPredavac(string predavac) {
    this->predavac = predavac;
}

void kolegij::SetUkupnaOcjena(int ukupna_ocjena) {
    this->ukupna_ocjena = ukupna_ocjena;
}

string kolegij::GetIme() {
    return this->ime;
}

string kolegij::GetPredavac() {
    return this->predavac;
}

int kolegij::GetUkupnaOcjena() {
    return this->ukupna_ocjena;
}

class objektno_orijentirano_programiranje : public kolegij
{
public:
    objektno_orijentirano_programiranje();
    
    void SetSatiPredavanja (int sati_predavanja);
    void SetSatiVjezbi (int sati_vjezbi);
    void SetOcjenaPredavanja (int ocjena_predavanja);
    void SetOcjenaVjezbi (int ocjena_vjezbi);
    
    int GetSatiPredavanja();
    int GetSatiVjezbi();
    int GetOcjenaPredavanja();
    int GetOcjenaVjezbi();
    
private:
    int sati_predavanja;
    int sati_vjezbi;
    int ocjena_predavanja;
    int ocjena_vjezbi;
};

objektno_orijentirano_programiranje::objektno_orijentirano_programiranje() :kolegij() {
    this->sati_predavanja = 0;
    this->sati_vjezbi = 0;
    this->ocjena_predavanja = 1;
    this->ocjena_vjezbi = 1;
}

void objektno_orijentirano_programiranje::SetSatiPredavanja(int sati_predavanja) {
    this->sati_predavanja = sati_predavanja;
}

void objektno_orijentirano_programiranje::SetSatiVjezbi(int sati_vjezbi) {
    this->sati_vjezbi = sati_vjezbi;
}

void objektno_orijentirano_programiranje::SetOcjenaPredavanja(int ocjena_predavanja) {
    this->ocjena_predavanja = ocjena_predavanja;
}

void objektno_orijentirano_programiranje::SetOcjenaVjezbi(int ocjena_vjezbi) {
    this->ocjena_vjezbi = ocjena_vjezbi;
}

int objektno_orijentirano_programiranje::GetSatiPredavanja() {
    return this->sati_predavanja;
}

int objektno_orijentirano_programiranje::GetSatiVjezbi() {
    return this->sati_vjezbi;
}

int objektno_orijentirano_programiranje::GetOcjenaPredavanja() {
    return this->ocjena_predavanja;
}

int objektno_orijentirano_programiranje::GetOcjenaVjezbi() {
    return this->ocjena_vjezbi;
}

// nadogradit s jos dva kolegija
int main()
{
    
    // implementirat primjere koristenja
    return 0;
}