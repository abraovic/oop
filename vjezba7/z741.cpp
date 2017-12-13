/**
 Sadržaj datoteke zad741.txt
	prvi
	drugi
	treci
	cetvrti
	peti
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file("zad741.txt");
	string linija;

	if (!file) {
		cout << "Dogodila se pogreška prilikom otvaranja datoteke" << endl;
		exit(1);
	}

	while (file >> linija) {
		cout << linija << endl;
	}

	file.close();

	return 0;
}