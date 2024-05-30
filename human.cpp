#define _CRT_SECURE_NO_WARNINGS
#include "human.h"
#include "date.h"
#include <iostream>
using namespace std;

int human::n = 0;

human::human() :birthday(0, 0, 0)
{
	identity_number = new char[13];
	strcpy(identity_number, "000000000000");
	surname = new char[4];
	strcpy(surname, "---");
	name = new char[4];
	strcpy(name, "---");
	patronymic = new char[4];
	strcpy(patronymic, "---");
	n++;
}

human::human(const char* _identity_number, const char* _surname, const char* _name, const char* _patronymic, int _day, int _month, int _year) :birthday(_day, _month, _year)
{
	identity_number = new char[strlen(_identity_number) + 1];
	strcpy(identity_number, _identity_number);
	surname = new char[strlen(_surname) + 1];
	strcpy(surname, _surname);
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	patronymic = new char[strlen(_patronymic) + 1];
	strcpy(patronymic, _patronymic);
	n++;
}

human::human(const human& person): identity_number(nullptr), surname(nullptr), name(nullptr), patronymic(nullptr)
{
	identity_number = new char[strlen(person.identity_number) + 1];
	strcpy(identity_number, person.identity_number);
	surname = new char[strlen(person.surname) + 1];
	strcpy(surname, person.surname);
	name = new char[strlen(person.name) + 1];
	strcpy(name, person.name);
	patronymic = new char[strlen(person.patronymic) + 1];
	strcpy(patronymic, person.patronymic);
	birthday=person.birthday;
	n++;
}

date human::Get_birthday()
{
	date data;
	data.Set_day(birthday.Get_day());
	data.Set_month(birthday.Get_month());
	data.Set_year(birthday.Get_year());
	return data;
}

void human::Set_identity_number(const char* _identity_number)
{
	if (identity_number != nullptr)
	{
		delete[] identity_number;
	}
	identity_number = new char[strlen(_identity_number) + 1];
	strcpy(identity_number, _identity_number);
}

void human::Set_surname(const char* _surname)
{
	if (surname != nullptr)
	{
		delete[] surname;
	}
	surname = new char[strlen(_surname) + 1];
	strcpy(surname, _surname);
}

void human::Set_name(const char* _name)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

void human::Set_patronymic(const char* _patronymic)
{
	if (patronymic != nullptr)
	{
		delete[] patronymic;
	}
	patronymic = new char[strlen(_patronymic) + 1];
	strcpy(patronymic, _patronymic);
}

void human::Set_birthday(date data)
{
	birthday.Set_day(data.Get_day());
	birthday.Set_month(data.Get_month());
	birthday.Set_year(data.Get_year());
}

void human::Set_birthday(int _day, int _month, int _year)
{
	birthday.Set_day(_day);
	birthday.Set_month(_month);
	birthday.Set_year(_year);
}

void human::Set_n(int _n)
{
	if (_n > 0)
	{
		n = _n;
	}
}

void human::show()
{
	cout << "\tДанные про человека:";
	cout << "\nИдентификационный номер: " << identity_number;
	cout << "\nФИО: " << surname << " " << name << " " << patronymic;
	cout << "\nДата рождения: "; birthday.whole_date();
}

human::~human()
{
	delete[] identity_number;
	delete[] surname;
	delete[] name;
	delete[] patronymic;
}
