#pragma once
#include<iostream>
#include"Human.h"
//����� "��������"
class Flat
{
private:
	int number; //����� ��������
	int square;  //������� (�.��.)
	int count_human; //���������� ����������� �������
	Human* persons; //������ ����� � ��������
public:
	//����������� �� ���������
	Flat() {
		this->number = 1;
		this->square = 30;
		this->count_human = 0;
		this->persons = new Human[this->count_human];
	}
	//����������� � �����������
	Flat(int number, int square, int count_human) {
		this->number = number;
		this->square = square;
		this->count_human = count_human;
		std::cout << "����� ��������: " << this->number << ". �������: " <<
			this->square << " �.��. ��������� �������: " << this->count_human << std::endl;
		this->persons = new Human[count_human];
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	//������ ����� ������
	void vvod(int number, int square, int count_human) {
		this->number = number;
		this->square = square;
		this->count_human = count_human;
		std::cout << "����� ��������: " << this->number << ". �������: " <<
			this->square << " �.��. ��������� �������: " << this->count_human << std::endl;
		this->persons = new Human[count_human];
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	void vvod() {
		std::cout << "������� ����� ��������: ";	std::cin >> this->number;
		std::cout << "������� ������� ��������: "; std::cin >> this->square;
		std::cout << "������� ���������� ������� ����������� �������: ";
		std::cin >> this->count_human;
		this->persons = new Human[count_human];
		for (int i = 0; i < this->count_human; i++) {
			std::cout << i + 1 << ". "; this->persons[i].zapolnenie();
		}
	}
	//����� ������ ������
	void Print() {
		std::cout << "����� ��������: " << number << std::endl;
		std::cout << "������� ��������: " << square << " ��.�." << std::endl;
		std::cout << "����, ����������� � ������ ��������: " << std::endl;
		for (int i = 0; i < count_human; i++) {
			std::cout << i + 1 << ". ";	persons[i].Print();
		}
	}
	//����������
	~Flat() {
		delete[] persons;
	}
};