#include<iostream>

#include"Answer.h"
#include"Guess.h"

using namespace std;

int main(void)
{
	//1.������ �����Ѵ�.
	Answer* answer = new Answer();
	//Answer answer();

	answer->Generator();

	 //2.������ �Է¹޴´�.
	Guess* guess = new Guess();

	guess->Generator();

	//3.����� ������ ���Ͽ� ����� �����Ѵ�.
	Result result = new Result();

	result.Calculator();

	Calculate;
	//4.����� ����Ѵ�.
	
	result.Print();

	//5.����� ������ ��ġ���� ������, 2������ ���ư���.

	if (result.IsCorrect())
		break;

	//6.����.
	return 0;
}