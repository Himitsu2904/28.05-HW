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

void human::initialize(int a)
{
	if (identity_number != nullptr) delete[] identity_number;
	identity_number = new char[13];
	if (surname != nullptr) delete[] surname;
	if (name != nullptr) delete[] name;
	if (patronymic != nullptr) delete[] patronymic;
	switch (a)
	{
	case 1:
		strcpy(identity_number, "111111111111");
		surname = new char[strlen("Наперво") + 1];
		strcpy(surname, "Наперво");
		name = new char[strlen("Елена") + 1];
		strcpy(name, "Елена");
		patronymic = new char[strlen("Андреевна") + 1];
		strcpy(patronymic, "Андреевна");
		birthday.Set_day(11);
		birthday.Set_month(11);
		birthday.Set_year(2011);
		break;
	case 2:
		strcpy(identity_number, "222222222222");
		surname = new char[strlen("Вторично") + 1];
		strcpy(surname, "Вторично");
		name = new char[strlen("Игнатий") + 1];
		strcpy(name, "Игнатий");
		patronymic = new char[strlen("Васильевич") + 1];
		strcpy(patronymic, "Васильевич");
		birthday.Set_day(22);
		birthday.Set_month(12);
		birthday.Set_year(2022);
		break;
	case 3:
		strcpy(identity_number, "333333333333");
		surname = new char[strlen("Третьяк") + 1];
		strcpy(surname, "Третьяк");
		name = new char[strlen("Мария") + 1];
		strcpy(name, "Мария");
		patronymic = new char[strlen("Владимировна") + 1];
		strcpy(patronymic, "Владимировна");
		birthday.Set_day(31);
		birthday.Set_month(3);
		birthday.Set_year(2013);
		break;
	case 4:
		strcpy(identity_number, "444444444444");
		surname = new char[strlen("Четвертак") + 1];
		strcpy(surname, "Четвертак");
		name = new char[strlen("Юрий") + 1];
		strcpy(name, "Юрий");
		patronymic = new char[strlen("Петрович") + 1];
		strcpy(patronymic, "Петрович");
		birthday.Set_day(14);
		birthday.Set_month(4);
		birthday.Set_year(2014);
		break;
	case 5:
		strcpy(identity_number, "555555555555");
		surname = new char[strlen("Пятерник") + 1];
		strcpy(surname, "Пятерник");
		name = new char[strlen("Елизавета") + 1];
		strcpy(name, "Елизавета");
		patronymic = new char[strlen("Витальевна") + 1];
		strcpy(patronymic, "Витальевна");
		birthday.Set_day(15);
		birthday.Set_month(5);
		birthday.Set_year(2015);
		break;
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
