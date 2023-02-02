#include "Good.h"

// Реализовать иерархию классов.
// Родительский класс Good (товар) и производные от него leptop, phone, sausages.
// Написать генератор товаров (функция создаёт случайным образом объект одного из классов товаров, возвращает указатель на родительский класс).
// С помощью операции tipeid и процедуры динамического кастования определить сколько товаров отдельного типа сгенерировалось.

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Good* arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = generator();
		arr[i]->set();
	}
	for (int i = 0; i < 10; i++)
	{
		arr[i]->print();
	}
	int leptop_count = 0;
	int phone_count = 0;
	int sausages_count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (typeid(*arr[i]) == typeid(leptop))
		{
			leptop_count++;
		}
		else if (typeid(*arr[i]) == typeid(phone))
		{
			phone_count++;
		}
		else if (typeid(*arr[i]) == typeid(sausages))
		{
			sausages_count++;
		}
	}
	cout << "leptop_count: " << leptop_count << endl;
	cout << "phone_count: " << phone_count << endl;
	cout << "sausages_count: " << sausages_count << endl;
	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
	system("pause");
	return 0;
}