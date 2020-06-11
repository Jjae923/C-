#include <iostream>
using namespace std;

class Cmydata {
public:
	// 가상함수로 선언 및 정의
	virtual void printdata() {
		cout << "Cmydata : " << m_ndata << endl;
	}
	void testfunc() {
		cout << "***testfunc()***" << endl;
		// 실 형식의 함수 호출
		printdata();
		cout << "****************" << endl;
	}

protected:
	int m_ndata = 10;
};

class CmydataEx :public Cmydata {
public:
	virtual void printdata() {
		cout << "CmydataEx : " << m_ndata * 2 << endl;
	}

};

int main() {
	CmydataEx a;
	a.printdata();
	Cmydata &b = a;
	b.printdata();

	a.testfunc();
	return 0;
}
