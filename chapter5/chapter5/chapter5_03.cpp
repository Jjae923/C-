#include "header.h"
#include "datatime.h"

// inline�� �⺻
//inline void cir_pro(int a);
//
//int main()
//{
//	int r = 5;
//	cir_pro(r);
//}
//
//inline void cir_pro(int a)
//{
//	cout << "���� ���� = " << a * a * 3.14 << endl;
//}



int main()
{
	cout << "����� �¾ ������ �Է��ϼ��� : ";
	int birthday;
	cin >> birthday;
	calc_age(birthday)
	int any = calc_zodiac(birthday);
	calc_day(any);
	system("pause");
}