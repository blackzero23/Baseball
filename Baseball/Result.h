#ifndef RESULT_H__
#define RESULT_H__

#include"Answer.h"
#include"Guess.h"

class Result
{
private:
	int _strike;
	int _ball;
	int _out;

public:
	Result();
	~Result();

	bool IsCorrect();//Ȯ��

	void Calculator(const Answer& answer, const Guess& guess);//���.

	void Print() const;

};

#endif // !
