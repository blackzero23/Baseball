#include<iostream>
#include "NumberContainer.h"
#include "Constant.h"

using namespace std;

NumberContainer::NumberContainer()
{
	numbers = new int[DIGIT];
}

NumberContainer::~NumberContainer()
{
	delete[] numbers;
}



void NumberContainer::Print() const
{
	GetPrintPrefix();
	for (int i = 0; i < DIGIT; i++)
	{
		cout << numbers[i]<<" ";
	}
	cout << endl;
}
