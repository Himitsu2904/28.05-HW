#pragma once
class line
{
	double length;
	char* str;
public:
	line(double _length);
	line(const char* _str);
	line(const line& stroka);
	void Set_str(const char* _str);
	void show();
	~line();
};

