#define _CRT_SECURE_NO_WARNINGS
#include "date.h"
#include <iostream>
using namespace std;

date::date()
{
	day = 0;
	month = 0;
	year = 0;
}

date::date(int _day, int _month, int _year)
{
	day = _day;
	month = _month;
	year = _year;
}

date date::Get_date()
{
	date data;
	data.Set_day(day);
	data.Set_month(month);
	data.Set_year(year);
	return data;
}

void date::Set_day(int _day)
{
	if (_day > 0 && _day < 32)
	{
		day = _day;
	}
}

void date::Set_month(int _month)
{
	if (_month > 0 && _month < 13)
	{
		month = _month;
	}
}

void date::Set_year(int _year)
{
	if (_year > 0 && _year < 2025)
	{
		year = _year;
	}
}

void date::show()
{
	cout << "Date: ";
	cout << "\nday: " << day;
	cout << "\nmonth: " << month;
	cout << "\nyear: " << year;
}

void date::whole_date()
{
	if (day < 10)
	{
		cout << 0;
	}
	cout << day << ".";
	if (month < 10)
	{
		cout << 0;
	}
	cout << month << ".";
	cout << year;
}