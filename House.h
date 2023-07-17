#pragma once
#include<iostream>
#include"Human.h"
#include"Flat.h"
//Класс "Дом"
class House
{
private:
	std::string address; //адрес дома
	int count_flat; //количество квартир
	Flat* flats; //массив квартир
public:
	//Конструкторы
	House() {
		address = "";
		count_flat = 0;
		flats = new Flat[count_flat];
	}
	House(std::string address, int count_flat) {
		this->address = address;
		this->count_flat = count_flat;
		this->flats = new Flat[this->count_flat];
		std::cout << "Адресс: " << this->address << ". Количество квартир: "
			<< this->count_flat << std::endl;
		for (int i = 0; i < this->count_flat; i++) {
			std::cout << i + 1 << ". ";
			this->flats[i].vvod();
		}
	}
	//Методы ввода данных
	void sozdat_dom(std::string address, int count_flat) {
		this->address = address;
		this->count_flat = count_flat;
		this->flats = new Flat[this->count_flat];
		std::cout << "Адресс: " << this->address << ". Количество квартир: "
			<< this->count_flat << std::endl;
		for (int i = 0; i < this->count_flat; i++) {
			std::cout << i + 1 << ". ";
			this->flats[i].vvod();
		}
	}
	void sozdat_dom() {
		std::cout << "Введите количество квартир в доме: "; std::cin >> count_flat;
		flats = new Flat[count_flat];
		for (int i = 0; i < count_flat; i++) {
			std::cout << i + 1 << ". ";
			flats[i].vvod();
		}
		std::cout << "Введите адрес: "; std::cin >> address;
	}
	//Метод вывода данных
	void Print() {
		//cout << "_________________________________________________________________" << endl;
		std::cout << "Адресс: " << address << std::endl;
		for (int i = 0; i < count_flat; i++) {
			std::cout << i + 1 << " квартира." << std::endl;
			flats[i].Print();
		}
	}
	//Деструктор
	~House() {
		for (int i = 0; i < count_flat; i++) {
			flats[i].~Flat();
		}
		delete[] flats;
	}
};