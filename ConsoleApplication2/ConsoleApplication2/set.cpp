#include <iostream>
#include "Set.h"
using namespace std;


Set::~Set()
{
	delete[] _setElements;
}

int Set::GetPower() const
{
	return _power;
}

void Set::ChangeSet(const int* setElements, const int power)
{
	Copy(setElements, power);
}

void Set::Copy(const int* setElements, const int power)
{
	if (_power != power)
	{
		_power = power;
		delete[] _setElements;
		_setElements = new int[_power];
	}

	memcpy(_setElements, setElements, sizeof(int) * _power);
}

void Set::AddElement(const int element)
{
	int check = 0;
	for (int i = 0; i < _power; i++)
	{
		if (element != _setElements[i])
		{
			check++;
		}
	}
	if (check == _power)
	{
		int* temp = _setElements;
		_setElements = new int[_power + 1];
		Copy(temp, _power);
		_power++;
		_setElements[_power - 1] = element;
		delete[] temp;
	}

}
bool Set::Intersection(const Set& source) const
{
	for (int i = 0; i < _power; i++)
	{
		for (int j = 0; j < source._power; j++)
		{
			if (_setElements[i] == source._setElements[j])
			{
				return true;
			}
		}
	}
	return false;
}


