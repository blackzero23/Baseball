#ifndef GUESS_H__
#define GUESS_H__

#include "NumberContainer.h"
#include"Answer.h"


class Guess :public NumberContainer
{
//private:
//	int* numbers;
public:
	
	/*Guess();
	~Guess();
*/
	//함수로 불러낼수있지만
	//오버로딩해서 불러내는것도 된다.
	//아직은 생각 해봐야한다. 뭐가 좋은지 써도 되는지 몰라서.
	
	virtual void GetPrintPrefix() const;

	int GetNumber(int index) const;

	void Generator(); //사용자가 추측하는 정답

};


#endif // !1
