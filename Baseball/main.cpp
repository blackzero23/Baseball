#include<iostream>

#include"Answer.h"
#include"Guess.h"
#include"Result.h"

using namespace std;

int main(void)
{
	//1.������ �����Ѵ�.
	Answer* answer = new Answer();
	
	answer->Generator();

	answer->Print();
	
	//2.������ �Է¹޴´�.
	while (true) {
		
		Guess* guess = new Guess();

		guess->Generator();

		//3.����� ������ ���Ͽ� ����� �����Ѵ�.
		Result* result = new Result();

		result->Calculator(*answer, *guess); // a g

		//4.����� ����Ѵ�.

		guess->Print();//���� �Է� ���.
		result->Print();

		//5.����� ������ ��ġ���� ������, 2������ ���ư���.

		if (result->IsCorrect())
			break;
	}
	//6.����.
	return 0;
}