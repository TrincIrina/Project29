#include<iostream>  //Подключение библиотек
#include<Windows.h>
#include"Human.h"  //Подключение классов
#include"Flat.h"
#include"House.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Применение класса "Human"
	Human a;
	a.zapolnenie("Каренина", "Анна", "Павловна", "12.07.1986");
	Human b("Лебедев", "Игорь", "Васильевич", "26.03.1984");
	Human c = a;
	c.Print();
	Human d;
	d = b;
	d.Print();
	cout << "_________________________________________________________________" << endl;
	//Применение класса "Flat"
	Flat f;
	f.vvod(23, 52, 2);
	f.Print();
	cout << "_________________________________________________________________" << endl;
	//Применение класса "House"
	House home("ул. Строителей, 205", 2);
	home.Print();
}