#include "flat.h"
#include <iostream>
using namespace std;

flat::flat(int _live_n):  live(nullptr), live_n(0)
{
	if (_live_n > 0)
	{
		live_n = _live_n;
		live = new human[live_n];
		srand(time(0));
		int a;
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

flat::~flat()
{
	delete[] live;
}
