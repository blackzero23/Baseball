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
	//�Լ��� �ҷ�����������
	//�����ε��ؼ� �ҷ����°͵� �ȴ�.
	//������ ���� �غ����Ѵ�. ���� ������ �ᵵ �Ǵ��� ����.
	
	virtual void GetPrintPrefix() const;

	int GetNumber(int index) const;

	void Generator(); //����ڰ� �����ϴ� ����

};


#endif // !1
