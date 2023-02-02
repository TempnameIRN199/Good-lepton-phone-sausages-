#pragma once
#include "Header.h"

// Реализовать иерархию классов.
// Родительский класс Good (товар) и производные от него leptop, phone, sausages.
// Написать генератор товаров (функция создаёт случайным образом объект одного из классов товаров, возвращает указатель на родительский класс).
// С помощью операции tipeid и процедуры динамического кастования определить сколько товаров отдельного типа сгенерировалось.

class Good
{
protected:
	string name;
	int price;
public:
	Good() {
		name = "Good";
		price = 0;
	}
	Good(string name, int price);
	virtual void print() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
	}
	virtual void set() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter price: ";
		cin >> price;
	}
	virtual void get() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
	}
	virtual ~Good() {
		cout << "Good destructor" << endl;
	}
};

class leptop : public Good
{
protected:
	string model;
	int ram;
public:
	leptop() {
		model = "leptop";
		ram = 0;
	}
	leptop(string name, int price, string model, int ram) {
		this->name = name;
		this->price = price;
		this->model = model;
		this->ram = ram;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "RAM: " << ram << endl;
	}
	void set() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter price: ";
		cin >> price;
		cout << "Enter model: ";
		cin >> model;
		cout << "Enter RAM: ";
		cin >> ram;
	}
	void get() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "RAM: " << ram << endl;
	}
	~leptop() {
		cout << "leptop destructor" << endl;
	}
};

class phone : public Good
{
protected:
	string model;
	int ram;
public:
	phone() {
		model = "phone";
		ram = 0;
	}
	phone(string name, int price, string model, int ram) {
		this->name = name;
		this->price = price;
		this->model = model;
		this->ram = ram;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "RAM: " << ram << endl;
	}
	void set() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter price: ";
		cin >> price;
		cout << "Enter model: ";
		cin >> model;
		cout << "Enter RAM: ";
		cin >> ram;
	}
	void get() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "RAM: " << ram << endl;
	}
	~phone() {
		cout << "phone destructor" << endl;
	}
};

class sausages : public Good
{
protected:
	string model;
	int weight;
public:
	sausages() {
		model = "sausages";
		weight = 0;
	}
	sausages(string name, int price, string model, int weight) {
		this->name = name;
		this->price = price;
		this->model = model;
		this->weight = weight;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Weight: " << weight << endl;
	}
	void set() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter price: ";
		cin >> price;
		cout << "Enter model: ";
		cin >> model;
		cout << "Enter weight: ";
		cin >> weight;
	}
	void get() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Weight: " << weight << endl;
	}
	~sausages() {
		cout << "sausages destructor" << endl;
	}
};

Good* generator() {
	int i = rand() % 3;
	switch (i)
	{
	case 0:
		return new leptop;
		break;
	case 1:
		return new phone;
		break;
	case 2:
		return new sausages;
		break;
	}
}
 