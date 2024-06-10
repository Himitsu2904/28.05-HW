#include "flat.h"
#include <iostream>
using namespace std;

flat::flat()
{
	live_n = 2;
	live = new human[2];
	human p1("884503412947", "Прокофьев", "Афанасий", "Юриевич", 12, 9, 1987);
	live[0] = p1;
	human p2("185619230436", "Прокофьева", "Екатерина", "Павловна", 1, 3, 1990);
	live[1] = p2;
}

flat::flat(int _live_n):  live(nullptr), live_n(0)
{
	srand(time(0));
	int a;
	if (_live_n > 0)
	{
		live_n = _live_n;
		live = new human[live_n];
		for (int i = 0; i < live_n; i++)
		{
			a = rand() % 5 + 1;
			live[i].initialize(a);
		}
	}
}

flat::flat(const flat& fl)
{
	live_n = fl.live_n;
	live = new human[live_n];
	for (int i = 0; i < live_n; i++)
	{
		live[i] = fl.live[i];
	}
}

void flat::initialize()
{
	srand(time(0));
	int a = rand() % 5 + 1;
	live_n = a;
	live = new human[live_n];
	for (int i = 0; i < live_n; i++)
	{
		a = rand() % 5 + 1;
		live[i].initialize(a);
	}
}

void flat::show()
{
	cout << "Количество жильцов = " << live_n << endl;
	for (int i = 0; i < live_n; i++)
	{
		cout << i + 1 << ". ";
		live[i].show();
		cout << endl;
	}
}

flat& flat::operator=(flat& obj)
{
	if (this == &obj) return *this;
	live_n = obj.live_n;
	if (live != nullptr) delete[] live;
	live = new human[live_n];
	for (int i = 0; i < live_n; i++)
	{
		live[i] = obj.live[i];
	}
	return *this;
}

flat::~flat()
{
	delete[] live;
}
