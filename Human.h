#pragma once
#include<iostream>
//����� "�������"
class Human
{
private:
	std::string surname; //�������
	std::string name;   //��� 
	std::string patronymic;  //��������
	std::string birthday;  //���� ��������
public:
	//���������� �� ���������
	Human() {
		this->surname = "";
		this->name = "";
		this->patronymic = "";
		this->birthday = "";
	}
	//����������� � �����������
	Human(std::string surname, std::string name, std::string patronymic, std::string birthday) {
		this->surname = surname;
		this->name = name;
		this->patronymic = patronymic;
		this->birthday = birthday;
	}
	//������ ����� ������
	void zapolnenie(std::string surname, std::string name, std::string patronymic, std::string birthday) {
		this->surname = surname;
		this->name = name;
		this->patronymic = patronymic;
		this->birthday = birthday;
	}
	void zapolnenie() {
		std::cout << "������� �������: "; std::cin >> this->surname;
		std::cout << "���: "; std::cin >> this->name;
		std::cout << "��������: "; std::cin >> this->patronymic;
		std::cout << "������� ���� ��������: "; std::cin >> this->birthday;
	}
	//����������� �����������
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
	//����� ������ ������
	void Print() {
		std::cout << "�.�.�.: " << this->surname << " " << this->name 
			<< " " << this->patronymic << std::endl;
		std::cout << "���� ��������: " << this->birthday << std::endl;
	}
};