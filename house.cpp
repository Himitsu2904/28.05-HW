#include "house.h"
#include "flat.h"
#include <iostream>
using namespace std;

house::house(int _flat_n): flats(nullptr), flat_n(0)
{
	if (_flat_n > 0)
	{
		flat_n = _flat_n;
		flats = new flat[flat_n];
		for (int i = 0; i < flat_n; i++) flats[i].initialize();
	}

}

house::house(const house& home)
{
	flat_n = home.flat_n;
	flats = new flat[flat_n];
	for (int i = 0; i < flat_n; i++)
	{
		flats[i] = home.flats[i];
	}
}

void house::show()
{
	cout << "Количество квартир = " << flat_n << endl << endl;
	for (int i = 0; i < flat_n; i++)
	{
		cout << i + 1 << ". ";
		flats[i].show();
		cout << endl;
	}
}

house& house::operator=(house& obj)
{
	if (this == &obj) return *this;
	flat_n = obj.flat_n;
	if (flats != nullptr) delete[] flats;
	flats = new flat[flat_n];
	for (int i = 0; i < flat_n; i++)
	{
		flats[i] = obj.flats[i];
	}
	return *this;
}

house::~house()
{
	delete[] flats;
}
