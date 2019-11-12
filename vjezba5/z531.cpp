#include <iostream>
#include <math.h> 	// ova biblioteka sadrži funkcije sqrt za računanje drugog korijena
					// i pow za računanje potencije
using namespace std;

class tocka
{
	private:
		double x, y;

	public:
		tocka();
		tocka(double tempX, double tempY);

		double Udaljenost(tocka t);
};

tocka::tocka()
{
	x = y = 0;
}

tocka::tocka(double tempX, double tempY)
{
	x = tempX;
	y = tempY;
}

double tocka::Udaljenost(tocka t)
{
	return sqrt(pow((t.x - x), 2) + pow((t.y - y), 2));
}

int main()
{
	tocka t1(1.4, 4.3);
	tocka t2(5.7, -3.8);

	cout << "Udaljenost između točaka t1 i t2 je: " << t1.Udaljenost(t2) << endl;

	return 0;
}