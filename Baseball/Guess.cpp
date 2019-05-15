#include "Guess.h"
#include"Constant.h"
#include <iostream>

using namespace std;

//Guess::Guess()
//{
//	numbers = new int[DIGIT];
//}
//
//Guess::~Guess()
//{
//	delete[] numbers;
//}


void Guess::GetPrintPrefix() const
{
	cout << "ÃßÃø" << endl;
}

int Guess::GetNumber(int index) const
{
	return numbers[index];
}

void Guess::Generator()
{
	for (int i = 0; i < DIGIT; i++)
	{
		cin >> numbers[i];
	}
}
