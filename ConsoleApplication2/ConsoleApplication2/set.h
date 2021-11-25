#pragma once

class Set
{
public:
	// Конструктор
	Set() : _setElements(nullptr), _power(0) {}

	// Методы
	int GetPower() const; // Получение мощности
	void ChangeSet(const int* setElements, const int power); //Передача данных
	void Copy(const int* setElements, const int power);// Копирование элеметов
	void AddElement(int element);//Добавление элементов
	bool Intersection(const Set& source) const;// Пересечение множеств
	// Деструктор
	~Set();

private:
	int* _setElements;
	int _power;
};