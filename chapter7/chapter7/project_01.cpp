#include <iostream>
using namespace std;

#define DEFAULT_FARE 1000

class Cperson
{
public:
	Cperson() {}
	virtual ~Cperson()
	{
		cout << "virtual ~Cperson" << endl;
	}
	// 요금 계산 인터페이스(순수 가상 함수)
	virtual void Calcfare() = 0;
	virtual unsigned int Getfare()
	{
		return m_nfare;
	}

protected:
	unsigned int m_nfare = 0;
};

class Cbaby :public Cperson
{
public:
	// 0~7
	virtual void Calcfare()
	{
		m_nfare = 0;
	}
};
class Cchild :public Cperson
{
public:
	// 8~13
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE * 50 / 100;
	}
};
class Cteen :public Cperson
{
public:
	// 14~19
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE * 75 / 100;
	}
};

class Cadult :public Cperson
{
public:
	// 20세 이상 성인
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE;
	}
};

int main()
{
	Cperson* arlist[3] = { 0 };
	int nAge = 0;

	for (auto &person:arlist)
	{
		cout << "나이를 입력하세요 : ";
		cin >> nAge;
		if (nAge < 8)
			person = new Cbaby;
		else if (nAge >=8 && nAge <14)
			person = new Cchild;
		else if (nAge >= 14 && nAge < 20)
			person = new Cteen;
		else
			person = new Cadult;

		person->Calcfare();
	}

	for (auto person : arlist)
		cout << person->Getfare() << " 원" << endl;
	for (auto person : arlist)
		delete person;
	return 0;
}