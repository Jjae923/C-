#include "weightmanage.h"

void weight::print()
{
	cout << "성  명 : " << customer_irum << endl;
	cout << "성  별 : " << ((gender==1 || gender==3) ? "남자":"여자") << endl;
	cout << "당신의 키와 몸무게는 : " << customer_height << "\t" << customer_weight << endl;
	cout << "당신의 몸무게는 " << abs(customer_opt) << "Kg" << (customer_opt >=0 ? "적정":"미달") << endl;

}