#pragma once
#include "date.h"

class human
{
	date birthday;
	static int n;
	char* identity_number;
	char* surname;
	char* name;
	char* patronymic;
	
public:
	human();
	human(const char* _identity_number, const char* _surname, const char* _name, const char* _patronymic, int _day, int _month, int _year);
	human(const human& person);//WIP
	char* Get_identity_number()
	{
		return identity_number;
	}
	char* Get_surname()
	{
		return surname;
	}
	char* Get_name()
	{
		return name;
	}
	char* Get_patronymic()
	{
		return patronymic;
	}
	date Get_birthday();
	static int Get_n()
	{
		return n;
	}
	void Set_identity_number(const char* _identity_number);
	void Set_surname(const char* _surname);
	void Set_name(const char* _name);
	void Set_patronymic(const char* _patronymic);
	void Set_birthday(date data);
	void Set_birthday(int _day, int _month, int _year);
	static void Set_n(int _n);
	void show();
	~human();
};