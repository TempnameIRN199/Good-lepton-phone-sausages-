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
	Good();
	Good(string name, int price);
	virtual void print();
	virtual void set();
	virtual void get();
	virtual ~Good();
};

class leptop : public Good
{
protected:
	string model;
	int ram;
public:
	leptop();
	leptop(string name, int price, string model, int ram);
	void print();
	void set();
	void get();
	~leptop();
};

class phone : public Good
{
protected:
	string model;
	int ram;
public:
	phone();
	phone(string name, int price, string model, int ram);
	void print();
	void set();
	void get();
	~phone();
};

class sausages : public Good
{
protected:
	string model;
	int weight;
public:
	sausages();
	sausages(string name, int price, string model, int weight);
	void print();
	void set();
	void get();
	~sausages();
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

