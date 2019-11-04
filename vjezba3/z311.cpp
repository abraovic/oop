/**
 * Korak 1: Ispisat će 0 1 1 2
 * 
 * Korak 2: Oodamo mu return type int i vratimo izračunatu vrijednost.
 * 		int FunctionByValue(int iVal) { return ++iVal; }
 * 		u mainu:
 * 		i = FunctionByValue(i);
 */

#include <iostream>
using namespace std;

void FunctionByValue(int iVal) { ++iVal; }
void FunctionByRef(int& iRef) { ++iRef; }
void FunctionByAddr(int* iPok) { ++(*iPok); }

int main()
{
	int i = 0; 				cout << i << endl;
	FunctionByRef(i);		cout << i << endl;
	FunctionByValue(i);		cout << i << endl;
	FunctionByAddr(&i);		cout << i << endl;

	return 0;
}