#include "weightmanage.h"

weight::weight()
{
	strcpy_s(customer_irum, "Customer");
	gender = 1;
	customer_height = 0;
	customer_weight = 0;
	customer_opt = 0.0;
}

weight::weight(const char *irum, int gen)
{
	strcpy_s(customer_irum, irum);
	gender = gen;
	customer_height = 0;
	customer_weight = 0;
	customer_opt = 0.0;
}

weight::~weight()
{
	cout << "���� ü�� ����� �Ϸ� �Ǿ����ϴ�.\n";
}
