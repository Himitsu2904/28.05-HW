#define _CRT_SECURE_NO_WARNINGS
#include "line.h"
#include <iostream>
using namespace std;

line::line(double _length)
{
	if (_length < 0)
	{
		_length *= -1;
	}
	length = _length;
	str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		str[i] = '-';
	}
	str[(int)length] = '\0';
}

line::line(const char* _str)
{
	str = new char[strlen(_str) + 1];
	strcpy(str, _str);
	length = strlen(_str);
}

line::line(const line& stroka)
{
	str = new char[strlen(stroka.str) + 1];
	strcpy(str, stroka.str);
	length = stroka.length;
}

void line::Set_str(const char* _str)
{
	int len = strlen(str);
	delete[] str;
	if (strlen(_str) > strlen(str))
	{
		str = new char[strlen(_str) + 1];
	}
	else
	{
		str = new char[len + 1];
	}
	strcpy(str, _str);
	length = strlen(str);
}

void line::show()
{
	cout << "Длина строки = " << length;
	cout << "\nСтрока: " << str;
}

line::~line()
{
	delete[] str;
}
