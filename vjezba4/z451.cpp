#include <iostream>
using namespace std;

class Registracija
{
	private:
		int reg1, reg2;

	public:
		Registracija();

		void Set(int temp1, int temp2);
		void Ispisi();
};

Registracija::Registracija()
{
	reg1 = reg2 = 100;
}

void Registracija::Set(int temp1, int temp2)
{
	if (temp1 > 100 && temp1 < 1000) {
		reg1 = temp1;
	}

	if (temp2 > 100 && temp2 < 1000) {
		reg2 = temp2;
	}
}

void Registracija::Ispisi()
{
	cout << reg1 << "-" << reg2 << endl;
}

int main()
{
	Registracija r;
	r.Set(534, 234);
	r.Ispisi();

	return 0;
}