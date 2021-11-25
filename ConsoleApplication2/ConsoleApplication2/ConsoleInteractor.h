//ConsoleInteractor.h
#pragma once
#include "Set.h"

class ConsoleInteractor
{
public:
	ConsoleInteractor(); // �����������
	// ������
	void Init(); // ����� �������
	void GetPower() const;//��������� ��������
	void AddElement(); // ���������� �������� � ��������� ��������
	void Intersection() const; // ����������� ��������
	void Help() const; // ��������� ��� ������ �������

private:
	Set _firstSet; // ��������� 1
	Set _secondSet; // ��������� 2
};
