#include "sawon.h"

sawon::sawon()
{
	strcpy_s(irum, "���");
	age = 0;
	strcpy_s(part, "�ٹ��μ�");
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
	cout << "����� : " << irum << endl;
	cout << "��  �� : " << age << endl;
	cout << "��  �� : " << part << endl;
}

int main()
{
	sawon s[3];
	char irum[20];
	int a;
	char job[20];

	for (int i = 0; i < 3; i++)
	{
		cout << "����� ���� �μ����� �Է��ϼ��� : ";
		cin >> irum >> a >> job;
		s[i].set_in(irum, a, job);
	}
	for (int j = 0; j < 3; j++)
	{
		s[j].get_out();
	}
}
