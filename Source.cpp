#include<iostream>  //����������� ���������
#include<Windows.h>
#include"Human.h"  //����������� �������
#include"Flat.h"
#include"House.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//���������� ������ "Human"
	Human a;
	a.zapolnenie("��������", "����", "��������", "12.07.1986");
	Human b("�������", "�����", "����������", "26.03.1984");
	Human c = a;
	c.Print();
	Human d;
	d = b;
	d.Print();
	cout << "_________________________________________________________________" << endl;
	//���������� ������ "Flat"
	Flat f;
	f.vvod(23, 52, 2);
	f.Print();
	cout << "_________________________________________________________________" << endl;
	//���������� ������ "House"
	House home("��. ����������, 205", 2);
	home.Print();
}