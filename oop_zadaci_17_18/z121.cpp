// uklju�i biblioteku za ulaz/izlaz
#include <iostream>
using namespace std;

void main()
{
    double r, kvadrat, area;	// deklaracija varijabli r i area     
    r = 2;					// zadana vrijednost radijusa 2m  
	kvadrat = r/r;			// radijus na kvadrat
    area = kvadrat*3.14;	// prora�un povr�ine kruga 
   
// ispis na ekran - djelovi ispisa povezani su operatorom <<
// klju�na rje� endl zna�i pomak u novi red
	cout << "Povrsina kruga =" << area <<  "m" << endl;

}
