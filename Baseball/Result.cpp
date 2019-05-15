#include "Result.h"
#include<iostream>

using namespace std;
Result::Result()
{
	_strike = 0;
	_ball = 0;
	_out = 0;
}

Result::~Result()
{
}



bool Result::IsCorrect()
{
	return _strike == DIGIT;
}

void Result::Calculator(const Answer* answer, const Guess* guess)
{
	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % DIGIT;
		int k = (i + 2) % DIGIT;


		//[]연산자 오버로딩으로 구현해보기.
		if (guess->GetNumber(i) == answer->GetNumber(i))
			_strike++;
		else if (guess->GetNumber(i) == answer->GetNumber(j) ||
			guess->GetNumber(i) == answer->GetNumber(k))
			_ball++;
		else
			_out++;
	}

}

void Result::Print()
{
	cout << "S : " << _strike << "B : " << _ball << "O :" << _out << endl;
}
