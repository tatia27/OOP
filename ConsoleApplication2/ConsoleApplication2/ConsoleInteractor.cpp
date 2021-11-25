#include <iostream>
#include <string>
#include <sstream>
#include "ConsoleInteractor.h"

using namespace std;

ConsoleInteractor::ConsoleInteractor()
{
	int power;
	int *setElement = nullptr;


	int flag1 = 0;
	int flag2 = 0;

	do
	{
		cout << "Enter the power of the firstSet" << endl;
		cin >> power;
		try
		{
			if (power < 0)
			{
				throw "Wrong power";
			}
		
			if (power > 0 )
			{
				setElement = new int[power];
				cout << "Enter the elements of the firstSet" << endl;

				string input;

				cin.ignore();
				getline(cin, input);
				istringstream iss(input);
				string s, s1;
				int i = 0;
				while (getline(iss, s, ' ' ) && i < power)
				{
					int num = atoi(s.c_str()); // выделение целого числа из строки
					setElement[i] = num;
					s1 += to_string(num) + ' ';
					++i;
				}
				if (i != power)
				{
					cout << "Less items entered than specified.Re-enter the elements.\n";
					delete[] setElement;

				}
				if ((size(input)) > ((size(s1)) - 1))
				{
					cout << "More items entered than specified.Re-enter the elements.\n";
					delete[] setElement;

				}
				else if (i == power) 
				{
					_firstSet.ChangeSet(setElement, power);
					delete[] setElement;
					flag1++;
				}
			}
		}
		catch (const char* exception)
		{
			cout << "Error:" << exception << endl;
			exit(0);
		}

	} while (flag1 == 0);


	do
	{
		cout << "Enter the power of the secondSet" << endl;
		cin >> power;
		try
		{
			if (power < 0)
			{
				throw "Wrong power";
			}
			if (power > 0)
			{
				setElement = new int[power];
				cout << "Enter the elements of the secondSet" << endl;
				
				string input;
				cin.ignore();
				getline(cin, input);
				istringstream iss(input);
				string s, s1;
				int i = 0;
				while (getline(iss, s, ' ') && i < power)
				{
					int num = atoi(s.c_str());
					setElement[i] = num;
					s1 += to_string(num) + ' ';
					++i;
				}
				if (i != power)
				{
					cout << "Less items entered than specified.Re-enter the elements.\n";
					delete[] setElement;

				}
				if ((size(input)) > ((size(s1)) - 1))
				{
					cout << "More items entered than specified.Re-enter the elements.\n";
					delete[] setElement;

				}
				else if (i == power)
				{
					_secondSet.ChangeSet(setElement, power);
					delete[] setElement;
					flag2++;
				}
			}
		}
		catch (const char* exception)
		{
			_firstSet.~Set();
			_secondSet.~Set();
			cout << "Error:" << exception << endl;
			exit(0);
		}
	} while (flag2 == 0);

}

void ConsoleInteractor::AddElement()
{
	{
		int digit, numeric;
		cout << "In which set do you want to add the element? First or Second?" << endl;
		cin >> digit;
		if (digit == 1)
		{
			cout << "Enter the numeric which do you want" << endl;
			cin >> numeric;
			_firstSet.AddElement(numeric);
			

		}
		else if (digit == 2)
		{
			cout << "Enter the numeric which do you want" << endl;
			cin >> numeric;
			_secondSet.AddElement(numeric);
			
		}
	}
}


void ConsoleInteractor::Intersection() const
{

	if (_firstSet.Intersection(_secondSet))
	{
		cout << "There is an intersection" << endl;
	}
	else
	{
		cout << "There is no an intersection" << endl;
	}
}

void ConsoleInteractor::Help() const
{
	cout << "\"1\" - AddElement\n\"2\" - Intersection\n\"3\" - GetPower\n\"4\" - Exit\n";
}


void ConsoleInteractor::GetPower() const
{
	cout << "Enter the number set which power do you want know" << endl;
	int digit;
	cin >> digit;
	if (digit == 1)
	{
		cout << "Power of this set is " << _firstSet.GetPower() << endl;
	}
	else if (digit == 2)
	{
		cout << "Power of this set is " << _secondSet.GetPower() << endl;
	}
}


void ConsoleInteractor::Init()
{
	Help();
	int number, flag3=0;
	while (flag3 == 0)
	{
		cout << "Enter the number" << endl;
		cin >> number;
		if (number == 1)
		{
			AddElement();
		}

		else if (number == 2)
		{
			Intersection();
		}
		else if (number == 3)
		{
			GetPower();
		}
		else if (number == 4)
		{
			flag3++;
			
		}

	}
}