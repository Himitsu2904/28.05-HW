#pragma once
#include "flat.h"

class house
{
	int flat_n;
	flat* flats;
public:
	house(int _flat_n);
	house(const house& home);
	void show();
	house& operator=(house& obj);
	~house();
};