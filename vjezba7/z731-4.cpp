/**
 Korak 1:
 Program unosi 1000 kompleksnih brojeva definiranih klasom kompleks u niz od
 1000 elemenata. Nakon toga se ti brojevi zapisuju u dvije datoteke. U prvi se
 vršu tekstualni zapis, a u drugu binrani zapis.
 Program nema nikakav ispis.

 Korak 2:
 U tekstualnoj datoteci brojevi su zapisani kao tekst svaki kompleksni broj u
 novom redu. U binarnoj datoteci podaci su zapisani u binarnom obliku. Kada to
 otvorimo s tekstualnim editorom (notepad) zapis nije razumljiv čovjeku.

 Korak 3:
 kompleks.bin 16kb
 kompleks.txt 28kb
 Binarna datoteka je manja. Razlog tome je što prilikom spremanja u binarnom
 obliku podaci se spremaju u svom izvornom obliku. To znači da se, npr., broj
 123456 spremi kao integer od 4 byte pri tom ignorirajući sve razmake, nove redove
 i sl. Kada bi taj isti broj spremili kao text onda bi to bilo najmanje 6 byte, po
 jedan za svaku znamenku koja sada mora bit char (1 byte). Tu još dolaze i podaci
 kao što su novi redovi, razmaci (kod decimalnih brojeva točke). Zbog svega navedenog
 je binarna datoteka manja.

 Korak 4:
	kompleks B[1000];

	ifstream fBinB("kompleks.bin", ios::binary);
	fBinB.read((char*)B, 1000*sizeof(kompleks));

	for (i = 0; i < 1000; i++) {
		cout << B[i] << endl;
	}
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

class kompleks
{
private:
	double real;
	double imag;

public:
	kompleks();
	kompleks(double r, double i);

	double getReal() { return real; };
	double getImag() { return imag; };

	void setReal(double r) { real = r; };
	void setImag(double i) { imag = i; };
};

kompleks::kompleks()
{
	real = 0.0;
	imag = 0.0;
}

kompleks::kompleks(double r, double i)
{
	real = r;
	imag = i;
}

bool operator < (kompleks &c1, kompleks &c2)
{
	if ((pow(c1.getReal(), 2) + pow(c1.getImag(), 2) < (pow(c2.getReal(), 2) + pow(c2.getImag(), 2))))
 		return true;
 	else
		return false;
}

istream& operator >> (istream &s, kompleks &c1)
{
	double rtemp, itemp;

	if (s >> rtemp >> itemp)
	{
		c1.setReal(rtemp);
		c1.setImag(itemp);
	}
	return s;
}

ostream& operator << (ostream &s, kompleks &c1)
{
	s << setprecision(13) << c1.getReal() << " " << c1.getImag();
	return s;
}

int main()
{
	kompleks A[1000];
	int i;

	for (i = 0; i < 1000; i++) {
		A[i].setReal(sqrt(float(i)));
		A[i].setImag(sqrt(float(i)));
	}

	ofstream fTxt("kompleks.txt");
	for (i = 0; i < 1000; i++) {
		fTxt << A[i] << endl;
	}
	fTxt.close();

	ofstream fBin("kompleks.bin", ios::binary);
	fBin.write((char*)A, 1000*sizeof(kompleks));
	fBin.close();

	// korak 4
	kompleks B[1000];

	ifstream fBinB("kompleks.bin", ios::binary);
	fBinB.read((char*)B, 1000*sizeof(kompleks));

	for (i = 0; i < 1000; i++) {
		cout << B[i] << endl;
	}

	fBinB.close();

	return 0;
}