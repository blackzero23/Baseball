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

	//�Լ��� �ҷ�����������
	//�����ε��ؼ� �ҷ����°͵� �ȴ�.
	//������ ���� �غ����Ѵ�. ���� ������ �ᵵ �Ǵ��� ����.
	
	int GetNumber(int index) const;

	void Generator(); //����ڰ� �����ϴ� ����

};


#endif // !1
