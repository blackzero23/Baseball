#ifndef ANSWER__H_
#define ANSWER__H_

#include "NumberContainer.h"
#include"Guess.h"


class Answer : public NumberContainer // �ش�.
{
//private:
//	int* numbers;
//
public:
	//
	//Answer();// ������
	//~Answer();//�Ҹ���

	virtual void GetPrintPrefix() const;
	
	int GetNumber(int index) const;

	//void Print() const;
	void Generator(); //��ǻ�Ͱ� ������ ���� ������.

};

#endif // !1
