#ifndef ANSWER__H_
#define ANSWER__H_

#include"Guess.h"
#define DIGIT 3

class Answer // ����
{
private:
	int* numbers;

public:
	Answer();// ������
	~Answer();//�Ҹ���

	int& operator [] (int index); //�� �ϱ� ���ؼ�.
	bool operator ==(int guess);

	void Generator(); //��ǻ�Ͱ� ������ ���� ������.

};

#endif // !1
