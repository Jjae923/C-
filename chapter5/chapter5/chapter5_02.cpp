#include "header.h"

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9); /* ������ �⺻���� �����ϸ� ���� ���� �ν� ���� / �⺻�� ������ ���� ���ϰų� �������� ���� */


int main()
{
	int b = 100;
	double r = 0.9;
	cout << "Ű�� �Է��ϼ��� : ";
	int h;
	cin >> h;
	if (h >= 150) {
		cout << "ǥ�� ü���� : " << calc_weight(h, b, r) << endl;
	}
	else {
		cout << "ǥ�� ü���� : " << calc_weight(h) << endl;
	}
	return 0;
}

int calc_weight(int a)
{
	return a - 100;
}

/* ������ ���� ȣ���ϰ� �ؿ��� ������ ��� ���������� �� */
double calc_weight(int a, int b, double c)
{
	return (a - b) * c;
}