#include "sawon.h"

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
	strcpy_s(irum, _irum);
	age = _a;
	strcpy_s(part, _job);
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
		s[i].set_in(irum, a, job);
	}
	for (int j = 0; j < 3; j++)
	{
		s[j].get_out();
	}
}
