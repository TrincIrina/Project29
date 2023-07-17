#pragma once
#include<iostream>
#include"Human.h"
//Класс "Квартира"
class Flat
{
private:
	int number; //номер квартиры
	int square;  //площадь (м.кв.)
	int count_human; //количество проживающих человек
	Human* persons; //массив людей в квартире
public:
	//Конструктор по умолчанию
	Flat() {
		this->number = 1;
		this->square = 30;
		this->count_human = 0;
		this->persons = new Human[this->count_human];
	}
	//Конструктор с параметрами
	Flat(int number, int square, int count_human) {
		this->number = number;
		this->square = square;
		this->count_human = count_human;
		std::cout << "Номер квартиры: " << this->number << ". Площадь: " <<
			this->square << " м.кв. Проживает человек: " << this->count_human << std::endl;
		this->persons = new Human[count_human];
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	//Методы ввода данных
	void vvod(int number, int square, int count_human) {
		this->number = number;
		this->square = square;
		this->count_human = count_human;
		std::cout << "Номер квартиры: " << this->number << ". Площадь: " <<
			this->square << " м.кв. Проживает человек: " << this->count_human << std::endl;
		this->persons = new Human[count_human];
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	void vvod() {
		std::cout << "Введите номер квартиры: ";	std::cin >> this->number;
		std::cout << "Введите площадь квартиры: "; std::cin >> this->square;
		std::cout << "Введите количество человек проживающих квартир: ";
		std::cin >> this->count_human;
		this->persons = new Human[count_human];
		for (int i = 0; i < this->count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	//Метод вывода данных
	void Print() {
		std::cout << "Номер квартиры: " << number << std::endl;
		std::cout << "Площадь квартиры: " << square << " кв.м." << std::endl;
		std::cout << "Люди, проживающие в данной квартире: " << std::endl;
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". ";	persons[i].Print();
		}
	}
	//Деструктор
	~Flat() {
		delete[] persons;
	}
};