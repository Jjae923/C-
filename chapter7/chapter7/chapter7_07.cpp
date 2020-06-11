#include <iostream>
using namespace std;

//class Cmydata {
//public:
//	Cmydata() {
//		cout << "Cmydata()" << endl;
//	}
//	//소멸자를 가상화 하지 않은 상태에서 사용자 코드 작성자가 추상메소드를 구현하면 객체를 동적으로 할당받을 수 없다.
//	virtual ~Cmydata() {}
//	virtual void testfun1() {}
//	virtual void testfun2() {}
//};
//class CmydataEx :public Cmydata
//{
//public:
//	CmydataEx() {
//		cout << "CmydataEx()" << endl;
//	}
//	virtual ~CmydataEx() {}
//	virtual void testfun1() {}
//	virtual void testfun2() {
//		cout << "testfun2()" << endl;
//	}
//};
//
//// 가상함수는 부모클래스에서 반드시 소멸해야 함
//int main()
//{
//	Cmydata *pdata = new CmydataEx;
//	pdata->testfun2();
//	delete pdata;
//	return 0;
//}

class Cmyinterface
{
public:
	Cmyinterface()
	{
		cout << "Cmyinterface()" << endl;
	}
	// 순수 가상 함수
	virtual int Getdata() const = 0;
	virtual void Setdata(int nparam) = 0;
};

// 가상함수는 상속받았을 때 자식클래스에서 모두 구현하지 않아도 되지만 순수가상함수는 모두 구현해야함
class Cmydata :public Cmyinterface
{
public:
	Cmydata()
	{
		cout << "Cmydata" << endl;
	}

	virtual int Getdata() const
	{
		return m_ndata;
	}
	virtual void Setdata(int nparam)
	{
		m_ndata = nparam;
	}

private:
	int m_ndata = 0;
};

int main() 
{
// 순수 가상함수가 선언되어있는 클래스는 반드시 구현되어야 하며
// 순수 가상함수를 구현한 클래스는 인스턴스(객체)를 선언 또는 정의할 수 없다
	//Cmyinterface b; //ERROR
	Cmydata a;
	a.Setdata(5);
	cout << a.Getdata() << endl;
	return 0;
}