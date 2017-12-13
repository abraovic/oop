/**
 Korak 2:
 Ispis programa:
 	Atlanta Baltimore Cincinnati Dallas zzz zzz 

 Korak 3:
 Kod:
 	...
 	ofstream filter_file("filter");
 	...
 	// provjera i upis u filter
	if (string_A != "zzz") {
		filter_file << string_A << " ";
	}

	...

 	// ispis filter datoteke
	ifstream filter_file_in("filter");

	if (!filter_file_in)
		return 1;

	cout << endl << "Sadržaj datoteke filter: " << endl;
	while(filter_file_in >> string_A)
	{
		cout << string_A << " ";
	}

	...

 Ispis programa:
 	Atlanta Baltimore Cincinnati Dallas zzz zzz 
	Sadržaj datoteke filter: 
	Atlanta Baltimore Cincinnati Dallas 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
// deklaracija objekta in_files klase ulaznog toka
// uz otvaranje datoteke cities 
	ifstream in_file("cities");

	ofstream filter_file("filter");
	
// provjera uspješnosti otvaranja datoteke
	if (!in_file)
		return 1;

	string string_A;

// petlja za čitanje se prekida kod nailaska na kraj datoteke
	while (!in_file.eof())
	{
// ?itanje jednog stringa iz datoteke
		in_file >> string_A;

		// provjera i upis u filter
		if (string_A != "zzz") {
			filter_file << string_A << " ";
		}

// ispisivanje stringa na ekran
		cout << string_A << " ";
	}

// zatvaranje datoteke
	in_file.close();
	filter_file.close();

// ispis filter datoteke
	ifstream filter_file_in("filter");

	if (!filter_file_in)
		return 1;

	cout << endl << "Sadržaj datoteke filter: " << endl;
	while(filter_file_in >> string_A)
	{
		cout << string_A << " ";
	}

	return 0;
}