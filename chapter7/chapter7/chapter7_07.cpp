#include <iostream>
using namespace std;

//class Cmydata {
//public:
//	Cmydata() {
//		cout << "Cmydata()" << endl;
//	}
//	//�Ҹ��ڸ� ����ȭ ���� ���� ���¿��� ����� �ڵ� �ۼ��ڰ� �߻�޼ҵ带 �����ϸ� ��ü�� �������� �Ҵ���� �� ����.
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
//// �����Լ��� �θ�Ŭ�������� �ݵ�� �Ҹ��ؾ� ��
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
	// ���� ���� �Լ�
	virtual int Getdata() const = 0;
	virtual void Setdata(int nparam) = 0;
};

// �����Լ��� ��ӹ޾��� �� �ڽ�Ŭ�������� ��� �������� �ʾƵ� ������ ���������Լ��� ��� �����ؾ���
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
// ���� �����Լ��� ����Ǿ��ִ� Ŭ������ �ݵ�� �����Ǿ�� �ϸ�
// ���� �����Լ��� ������ Ŭ������ �ν��Ͻ�(��ü)�� ���� �Ǵ� ������ �� ����
	//Cmyinterface b; //ERROR
	Cmydata a;
	a.Setdata(5);
	cout << a.Getdata() << endl;
	return 0;
}