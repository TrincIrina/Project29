#pragma once
#include<iostream>
//Класс "Человек"
class Human
{
private:
	std::string surname; //фамилия
	std::string name;   //имя 
	std::string patronymic;  //отчество
	std::string birthday;  //дата рождения
public:
	//Констуктор по умолчанию
	Human() {
		this->surname = "";
		this->name = "";
		this->patronymic = "";
		this->birthday = "";
	}
	//Конструктор с параметрами
	Human(std::string surname, std::string name, std::string patronymic, std::string birthday) {
		this->surname = surname;
		this->name = name;
		this->patronymic = patronymic;
		this->birthday = birthday;
	}
	//Методы ввода данных
	void zapolnenie(std::string surname, std::string name, std::string patronymic, std::string birthday) {
		this->surname = surname;
		this->name = name;
		this->patronymic = patronymic;
		this->birthday = birthday;
	}
	void zapolnenie() {
		std::cout << "Введите фамилию: "; std::cin >> this->surname;
		std::cout << "Имя: "; std::cin >> this->name;
		std::cout << "Отчество: "; std::cin >> this->patronymic;
		std::cout << "Введите дату рождения: "; std::cin >> this->birthday;
	}
	//Конструктор копирования
	Human operator= (Human& other) {
		this->surname = other.surname;
		this->name = other.name;
		this->patronymic = other.patronymic;
		this->birthday = other.birthday;
		return other;
	}
	Human(Human& other) {
		this->surname = other.surname;
		this->name = other.name;
		this->patronymic = other.patronymic;
		this->birthday = other.birthday;
	}
	//Метод вывода данных
	void Print() {
		std::cout << "Ф.И.О.: " << this->surname << " " << this->name 
			<< " " << this->patronymic << std::endl;
		std::cout << "Дата рождения: " << this->birthday << std::endl;
	}
};