#include "Result.h"

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

void Result::Caculator(const Answer& answer, const Guess& guess)
{
	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % DIGIT;
		int k = (i + 2) % DIGIT;

		if (guess == answer)
			_strike++;
		else if (guess[i] == answer[j] ||
			guess[i] == answer[k])
			_ball++;
		else
			_out++;

	}



}
