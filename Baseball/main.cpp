#include<iostream>

#include"Answer.h"
#include"Guess.h"

using namespace std;

int main(void)
{
	//1.정답을 생성한다.
	Answer* answer = new Answer();
	//Answer answer();

	answer->Generator();

	 //2.추측을 입력받는다.
	Guess* guess = new Guess();

	guess->Generator();

	//3.정답과 추측을 비교하여 결과를 판정한다.
	Result result = new Result();

	result.Calculator();

	Calculate;
	//4.결과를 출력한다.
	
	result.Print();

	//5.정답과 추측이 일치하지 않으면, 2번으로 돌아간다.

	if (result.IsCorrect())
		break;

	//6.종료.
	return 0;
}