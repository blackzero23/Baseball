#ifndef NUMBERCONTAINER_H__
#define NUMBERCONTAINER_H__

class NumberContainer
{
protected:
	int* numbers;
public:
	NumberContainer();
	~NumberContainer();


	virtual void GetPrintPrefix() const = 0;
	void Print() const;


};

#endif // !1
