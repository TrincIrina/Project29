#pragma once
#include<iostream>
#include"Human.h"
#include"Flat.h"
//����� "���"
class House
{
private:
	std::string address; //����� ����
	int count_flat; //���������� �������
	Flat* flats; //������ �������
public:
	//������������
	House() {
		address = "";
		count_flat = 0;
		flats = new Flat[count_flat];
	}
	House(std::string address, int count_flat) {
		this->address = address;
		this->count_flat = count_flat;
		this->flats = new Flat[this->count_flat];
		std::cout << "������: " << this->address << ". ���������� �������: "
			<< this->count_flat << std::endl;
		for (int i = 0; i < this->count_flat; i++) {
			std::cout << i + 1 << ". ";
			this->flats[i].vvod();
		}
	}
	//������ ����� ������
	void sozdat_dom(std::string address, int count_flat) {
		this->address = address;
		this->count_flat = count_flat;
		this->flats = new Flat[this->count_flat];
		std::cout << "������: " << this->address << ". ���������� �������: "
			<< this->count_flat << std::endl;
		for (int i = 0; i < this->count_flat; i++) {
			std::cout << i + 1 << ". ";
			this->flats[i].vvod();
		}
	}
	void sozdat_dom() {
		std::cout << "������� ���������� ������� � ����: "; std::cin >> count_flat;
		flats = new Flat[count_flat];
		for (int i = 0; i < count_flat; i++) {
			std::cout << i + 1 << ". ";
			flats[i].vvod();
		}
		std::cout << "������� �����: "; std::cin >> address;
	}
	//����� ������ ������
	void Print() {
		//cout << "_________________________________________________________________" << endl;
		std::cout << "������: " << address << std::endl;
		for (int i = 0; i < count_flat; i++) {
			std::cout << i + 1 << " ��������." << std::endl;
			flats[i].Print();
		}
	}
	//����������
	~House() {
		for (int i = 0; i < count_flat; i++) {
			flats[i].~Flat();
		}
		delete[] flats;
	}
};