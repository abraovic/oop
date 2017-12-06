/**
 Korak 1:
	iarray& iarray::operator = (const iarray& right)
	{
		if (m_size != right.size()) {
			// nizovi nisu jednako veliki
			delete [] m_arr; // izbrisi trenutni array
			m_size = right.size(); 	// postavi veličinu niza na veličinu onog kojeg
									// želimo kopirati
			m_arr = new int [m_size];
		}

		for (int i = 0; i < m_size; i++) {
			m_arr[i] = right.m_arr[i];
		}

		return *this;
	}

	int& iarray::operator [] (int index)
	{
		return m_arr[index];
	}

 Korak 2:
	// kreiran je niz koji ćemo poslat konstruktoru preko postojećeg niza 
		int a[2] = {67, 2};
		iarray array(a, 2);

	// testiranje operatora = i []
		cout << "Prije operatora =, a vidimo i upotrebu operatora []: " << endl;
		int b[3] = {123, 11, 110};
		iarray array2(b, 3);
		for (int i = 0; i < array2.size(); i++) {
			cout << "array2[" << i << "] = " << array2[i] << endl;
		}

		cout << endl;
		cout << "Nakon operatora = :" << endl;

		array2 = array;
		for (int i = 0; i < array2.size(); i++) {
			cout << "array2[" << i << "] = " << array2[i] << endl;
		}
*/

#include <iostream>
using namespace std;

const int def_iarray_size = 5;

class iarray {
public:
// predodređeni konstruktor
	iarray(int def_size = def_iarray_size)
	{
		init((const int *) 0, def_size);
	}
// kopirni konstruktor
	iarray(const iarray& rhs)
	{
		init(rhs.m_arr, rhs.m_size);
	}
// konstruktor pomoću postojećeg int * niza
	iarray(const int *array, int size)
	{
		init(array, size);
	}
// destruktor
	~iarray(void)
	{
		delete [] m_arr;
	}
// pridjela vrijednosti
	iarray& operator = (const iarray&);
// daje broj elemenata niza
	int size() const {return m_size;}
// indeksni operator
	int& operator [] (int index);

private:
// pomoćna funkcija
	void init(const int *array, int size);
// pokazivač na memoriju koja sadrži niz
	int *m_arr;
// broj elemenata niza
	int m_size;
};

void iarray::init(const int *array, int size)
{
// alociraj memoriju veličine m_size cijelih brojeva
	m_size = size;
	m_arr = new int [size];
//inicijaliziraj niz
	if (array != 0) {
		for (int index=0; index<size; index++) {
			m_arr[index] = array[index];
		}	
	} 
}

iarray& iarray::operator = (const iarray& right)
{
	if (m_size != right.size()) {
		// nizovi nisu jednako veliki
		delete [] m_arr; // izbrisi trenutni array
		m_size = right.size(); 	// postavi veličinu niza na veličinu onog kojeg
								// želimo kopirati
		m_arr = new int [m_size];
	}

	for (int i = 0; i < m_size; i++) {
		m_arr[i] = right.m_arr[i];
	}

	return *this;
}

int& iarray::operator [] (int index)
{
	return m_arr[index];
}

int main ()
{
// kreiran je niz koji ćemo poslat konstruktoru preko postojećeg niza 
	int a[2] = {67, 2};
	iarray array(a, 2);

// testiranje operatora = i []
	cout << "Prije operatora =, a vidimo i upotrebu operatora []: " << endl;
	int b[3] = {123, 11, 110};
	iarray array2(b, 3);
	for (int i = 0; i < array2.size(); i++) {
		cout << "array2[" << i << "] = " << array2[i] << endl;
	}

	cout << endl;
	cout << "Nakon operatora =:" << endl;

	array2 = array;
	for (int i = 0; i < array2.size(); i++) {
		cout << "array2[" << i << "] = " << array2[i] << endl;
	}

	return 0;
}