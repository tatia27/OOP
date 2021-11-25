//ConsoleInteractor.h
#pragma once
#include "Set.h"

class ConsoleInteractor
{
public:
	ConsoleInteractor(); // Коснтруктор
	// Методы
	void Init(); // Выбор команды
	void GetPower() const;//Получение мощности
	void AddElement(); // Добавление элемента с проверкой мощности
	void Intersection() const; // Пересечение множеств
	void Help() const; // Пояснение для выбора команды

private:
	Set _firstSet; // Множество 1
	Set _secondSet; // Множество 2
};
