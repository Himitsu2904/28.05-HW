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
	human person1("243956771028", "���������", "���������", "����������", 30, 5, 2005);
	cout << "\t������� 1" << endl;	person1.show();
	cout << endl << endl;

	human person2("392593771023", "��������", "�������", "����������", 7, 1, 2006);
	cout << "\t������� 2" << endl;	person2.show();
	cout << endl << endl;

	human person3=person2;
	cout << "\t������� 3 (����� 2-��)" << endl;	person3.show();
	cout << endl << endl;

	person3.Set_birthday(4,9,2012);
	cout << "\t������� 3 (�������� ��)" << endl;	person3.show();
	cout << endl << endl << "���������� ����������� ������ \"�������\" = " << person1.Get_n();

	cout << endl << "------------------------------------------------------------------" << endl;
	line stroka1(-12);
	cout << "\t������ 1" << endl;	stroka1.show();
	cout << endl << endl;

	line stroka2("������������� � ������������");
	cout << "\t������ 2" << endl;	stroka2.show();
	cout << endl << endl;

	stroka2.Set_str("������");
	cout << "\t������ 2 (��������)" << endl;	stroka2.show();
	cout << endl << endl;

	line stroka3 = stroka2;
	cout << "\t������ 3 (����� 2-��)" << endl;	stroka3.show();
	cout << endl << "------------------------------------------------------------------" << endl;
	flat fl1(5);
	cout << "\t�������� 1" << endl;	fl1.show();
	cout << endl;

	flat fl2(3);
	cout << "\t�������� 2" << endl;	fl2.show();
	cout << "------------------------------------------------------------------" << endl;

	house home(2);
	cout << "\t���" << endl; home.show();

	cout << endl;
}