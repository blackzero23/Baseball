#ifndef GUESS_H__
#define GUESS_H__

#define DIGIT 3

class Guess
{
private:
	int* numbers;
public:
	Guess();
	~Guess();

	//함수로 불러낼수있지만
	//오버로딩해서 불러내는것도 된다.
	//아직은 생각 해봐야한다. 뭐가 좋은지 써도 되는지 몰라서.
	int& operator [] (int index); //비교 하기 위해서.
				

	void Generator(); //사용자가 추측하는 정답

};


#endif // !1
