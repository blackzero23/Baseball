#include "Guess.h"
#include <iostream>

using namespace std;

Guess::Guess()
{
	numbers = new int[DIGIT];
}

Guess::~Guess()
{
	delete[] numbers;
}

int& Guess::operator[](int index)
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
