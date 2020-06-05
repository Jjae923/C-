#include "weightmanage.h"

void weight::calc_info(char *irum, int a)
{
	// 고객 정보 중 이름과 성별 세팅
	// 받아온 이름을 클래스의 멤버변수에 대입
	// 배열이므로 strcpy 사용 시 "="은 못 씀
	strcpy_s(customer_irum, irum);
	gender = a;
}


void weight::calc_stweight(int h, int w)
{
	// 키
	customer_height = h;
	// 몸무게
	customer_weight = w;
	// 적정 몸무게 저장
	double s = 0;
	// 남자(1 | 3) (키-100)*0.9
	// 여자(1 | 3) (키-110)*0.9
	if (gender == 1 || gender == 3)
	{
		s = (customer_height - 100)*0.9;
	}
	else
	{
		s = (customer_height - 110)*0.9;
	}
			   
	customer_opt = customer_weight - s;


}
 