#include <iostream>
#include <cstring>
#include "sawon.h"
using namespace std;
sawon::sawon()
{
	strcpy_s(irum, "사원");
	age = 0;
	strcpy_s(part, "근무부서");
}
sawon::~sawon()
{
	cout << "bye" << endl;
}
void sawon::set_in(char* _irum, int _a, char* _job)
{
	strcpy_s(this->irum, _irum);
	this->age = _a;
	strcpy_s(this->part, _job);
}
void sawon::get_out()
{
	cout << "사원명 : " << irum << endl;
	cout << "나  이 : " << age << endl;
	cout << "부  서 : " << part << endl;
}


int main()
{
	sawon s[3];
	char irum[20];
	int a;
	char job[20];

	for (int i = 0; i < 3; i++)
	{
		cout << "사원명 나이 부서명을 입력하세요 : ";
		cin >> irum >> a >> job;
		// 동적 객체
		s[i].set_in(irum, a, job);
	}
	for (int j = 0; j < 3; j++)
	{
		// 동적 메모리 반환
		s[j].get_out();
	}
	for (int j = 0; j < 3; j++)
	{
		delete s[j];
	}
}
