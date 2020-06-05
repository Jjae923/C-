#include "header.h"

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9); /* 변수에 기본값을 선언하면 변수 갯수 인식 안함 / 기본값 선언은 전부 다하거나 끝에서만 가능 */


int main()
{
	int b = 100;
	double r = 0.9;
	cout << "키를 입력하세요 : ";
	int h;
	cin >> h;
	if (h >= 150) {
		cout << "표준 체중은 : " << calc_weight(h, b, r) << endl;
	}
	else {
		cout << "표준 체중은 : " << calc_weight(h) << endl;
	}
	return 0;
}

int calc_weight(int a)
{
	return a - 100;
}

/* 위에서 먼저 호출하고 밑에서 정의할 경우 전역변수가 됨 */
double calc_weight(int a, int b, double c)
{
	return (a - b) * c;
}