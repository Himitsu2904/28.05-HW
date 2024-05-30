#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "human.h"
#include "line.h"
#include "flat.h"
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	human person1("243956771028", "Галименко", "Анастасия", "Евгениевна", 30, 5, 2005);
	person1.show();
	cout << endl << endl;

	human person2("392593771023", "Дрогобич", "Евгений", "Русланович", 7, 1, 2006);
	person2.show();
	cout << endl << endl;

	human person3=person2;
	person3.show();
	cout << endl << endl;

	person3.Set_birthday(4,9,2012);
	person3.show();
	cout << endl << endl << "Количество экземпляров класса \"Человек\" = " << person1.Get_n();

	cout << endl << "------------------------------------------------------------------" << endl;
	line stroka1(-12);
	stroka1.show();
	cout << endl << endl;

	line stroka2("Консерватория и обарудование");
	stroka2.show();
	cout << endl << endl;

	stroka2.Set_str("Кетчуп");
	stroka2.show();
	cout << endl << endl;

	line stroka3 = stroka2;
	stroka3.show();
	cout << endl << "------------------------------------------------------------------" << endl;
	flat fl1(2);
	fl1.show();
	cout << endl;
}