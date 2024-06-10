#pragma once
#include "human.h"

class flat
{
	int live_n;
	human* live;
public:
	flat();
	flat(int _live_n);
	flat(const flat& fl);
	void initialize();
	void show();
	flat& operator=(flat& obj);
	~flat();
};

