#include "header.h"
#include "datatime.h"

// inline의 기본
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
//	cout << "원의 넓이 = " << a * a * 3.14 << endl;
//}



int main()
{
	cout << "당신이 태어난 연도를 입력하세요 : ";
	int birthday;
	cin >> birthday;
	calc_age(birthday)
	int any = calc_zodiac(birthday);
	calc_day(any);
	system("pause");
}