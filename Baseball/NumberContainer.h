#ifndef NUMBERCONTAINER_H__
#define NUMBERCONTAINER_H__

class NumberContainer
{
protected:
	int* numbers;
public:
	NumberContainer();
	~NumberContainer();

	int operator[](const int index) const;


	virtual void GetPrintPrefix() const = 0;
	void Print() const;


};

#endif // !1
