#pragma once
#include "human.h"

class flat
{
	int live_n;
	human* live;
public:
	flat(int _live_n);
	flat(const flat& fl);
	void show();
	~flat();
};

