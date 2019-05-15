#ifndef ANSWER__H_
#define ANSWER__H_

#include "NumberContainer.h"
#include"Guess.h"


class Answer : public NumberContainer // 해답.
{
//private:
//	int* numbers;
//
public:
	//
	//Answer();// 생성자
	//~Answer();//소멸자

	virtual void GetPrintPrefix() const;
	
	int GetNumber(int index) const;

	//void Print() const;
	void Generator(); //컴퓨터가 내놓는 숫자 생성기.

};

#endif // !1
