#include "flat.h"
#include <iostream>
using namespace std;

flat::flat(int _live_n)
{
	if (_live_n > 0)
	{
		live_n = _live_n;
		live = new human[live_n];
		human person;
		for (int i = 0; i < live_n; i++)
		{
			live[i] = person;
		}
	}
}

flat::flat(const flat& fl)
{
	live_n = fl.live_n;
	for (int i = 0; i < live_n; i++)
	{

	}
}

void flat::show()
{
	cout << "Количество жильцов = " << live_n << endl;
	for (int i = 0; i < live_n; i++)
	{
		live[i].show();
		cout << endl;
	}
}

flat::~flat()
{
	delete[] live;
}
