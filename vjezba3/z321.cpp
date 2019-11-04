/**
 * Korak 1: Funkcija je tipa void i ne vraća ništa u main funkciju, stoga ona nema razultat te funkcije.
 *			Postoje dva (tri) rješenja:
 *				1. Promjeniti povratni tip iz void u float i vratiti rezultat u main
 *				2. Napravit da se lare šalje preko pokazivača
 */

#include <iostream>
using namespace std;


float rect_area(float lwidth, float lheight);
void rect_area(float lwidth, float lheight, float* larea);

int main(void)
{
    float width = 2.5, height = 3.1, area = 0.0;
    area = rect_area(width, height); // primjer s povratnim tipmo
    // ili
    rect_area(width, height, &area); // primjer s pokazivačem
    cout << "The area in main is " << area << endl;

    return 0;
}

// Korak 1 primjer s povratnim tipom
float rect_area(float lwidth, float lheight)
{
    float larea;
    larea = lwidth * lheight;
    cout << "The area in the function is " << larea << endl;
    return larea;
}

// Korak 1 primjer s pokazivačem (slično je i referenca)
void rect_area(float lwidth, float lheight, float* larea)
{
    *larea = lwidth * lheight;
    cout << "The area in the function is " << *larea << endl;
}