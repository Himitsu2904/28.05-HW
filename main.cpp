#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "human.h"
#include "line.h"
#include "house.h"
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	human person1("243956771028", "Галименко", "Анастасия", "Евгениевна", 30, 5, 2005);
	cout << "\tЧеловек 1" << endl;	person1.show();
	cout << endl << endl;

	human person2("392593771023", "Дрогобич", "Евгений", "Русланович", 7, 1, 2006);
	cout << "\tЧеловек 2" << endl;	person2.show();
	cout << endl << endl;

	human person3=person2;
	cout << "\tЧеловек 3 (копия 2-го)" << endl;	person3.show();
	cout << endl << endl;

	person3.Set_birthday(4,9,2012);
	cout << "\tЧеловек 3 (изменено ДР)" << endl;	person3.show();
	cout << endl << endl << "Количество экземпляров класса \"Человек\" = " << person1.Get_n();

	cout << endl << "------------------------------------------------------------------" << endl;
	line stroka1(-12);
	cout << "\tСтрока 1" << endl;	stroka1.show();
	cout << endl << endl;

	line stroka2("Консерватория и обарудование");
	cout << "\tСтрока 2" << endl;	stroka2.show();
	cout << endl << endl;

	stroka2.Set_str("Кетчуп");
	cout << "\tСтрока 2 (изменено)" << endl;	stroka2.show();
	cout << endl << endl;

	line stroka3 = stroka2;
	cout << "\tСтрока 3 (копия 2-го)" << endl;	stroka3.show();
	cout << endl << "------------------------------------------------------------------" << endl;
	flat fl1(5);
	cout << "\tКвартира 1" << endl;	fl1.show();
	cout << endl;

	flat fl2(3);
	cout << "\tКвартира 2" << endl;	fl2.show();
	cout << "------------------------------------------------------------------" << endl;

	house home(2);
	cout << "\tДом" << endl; home.show();

	cout << endl;
}