#pragma once
class date
{
	int day;
	int month;
	int year;
public:
	date();
	date(int _day, int _month, int _year);
	int Get_day()
	{
		return day;
	}
	int Get_month()
	{
		return month;
	}
	int Get_year()
	{
		return year;
	}
	date Get_date();
	void Set_day(int _day);
	void Set_month(int _month);
	void Set_year(int _year);
	void show();
	void whole_date();
};