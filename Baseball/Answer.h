#ifndef ANSWER__H_
#define ANSWER__H_

#include"Guess.h"
#define DIGIT 3

class Answer // 추측
{
private:
	int* numbers;

public:
	Answer();// 생성자
	~Answer();//소멸자

	int GetNumber(int index) const;

	void Print() const;
	void Generator(); //컴퓨터가 내놓는 숫자 생성기.

};

#endif // !1
