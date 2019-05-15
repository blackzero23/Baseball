#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Answer.h"

using namespace std;

Answer::Answer()
{
	numbers = new int[DIGIT];
}

Answer::~Answer()
{
	delete[] numbers; //소멸.
}

int Answer::GetNumber(int index) const
{
	return numbers[index];
}


void Answer::Print() const
{
	cout << "정답" << endl;
	for (int i = 0; i < DIGIT; i++)
	{
		cout << numbers[i];
	}
	cout << endl;
}

void Answer::Generator()
{
	while (true)
	{
		srand((unsigned int)time(NULL));

		for (int i = 0; i < DIGIT; i++)
		{
			numbers[i] = rand() % 10 + 1; //1~10까지 의 랜덤 숫자 부여.
		}
		
		if (numbers[0] != numbers[1] && numbers[0] != numbers[2]
			&& numbers[1] != numbers[2])
			break;
	}

}
