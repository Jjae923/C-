#include <iostream>

using namespace std;

//int *p, *q, a = 10, b = 20, tmp;
//
//void main()
//{
//	cout << "a는 " << a << ", b는 " << b << endl;
//	p = &a; // p는 a의 주소를 받음 / 일반 변수에 접근할 때는 주소로 접근 해야 함
//	q = &b;
//
//	tmp = *p; // *p는 주소에 있는 값 / 안에 있는 값을 받을 때도 포인터로 받음
//	*p = *q;
//	*q = tmp;
//	cout << "값을 옮겨담은 후 " << endl;
//	cout << "a는 " << a << ", b는 " << b;
//
//	int ***a;
//	int **b;
//	int *c;
//	int d = 10;
//	c = &d;
//	b = &c;
//	a = &b;
//	cout << endl;
//	cout << ***a;
//}

//int main()
//{
	//#1.
	//int a;
	//a = 10;

	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;


	//#2.
	//int a;
	//int* pA;

	//a = 10;
	//pA = &a;

	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;
	//cout << "포인터 pA의 값은 : " << pA << endl; // 원래 주소를 끌고다니는 포인터
	//cout << "pA의 값은 : " << *pA << endl; // 값을 읽고 싶을 땐 * 붙여야 함


	//#3.
	//int a = 10;
	//int *pa;

	//// a라는 변수방을 이용하여 출력
	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;

	//// pa를 이용하여 출력
	//pa = &a;

	//cout << "포인터 pa의 값은 : " << *pa << endl;
	//cout << "포인터 pa의 주소는 : " << pa << endl;
	//	
	//*pa = 50;
	//cout << "포인터 pa의 값은 : " << *pa << endl;
	//cout << "포인터 pa의 주소는 : " << pa << endl;
//
//}



// 포인터를 이용한 값 교환 실습
void sw(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 100;

	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
	cout << "↓↓변수 a,b의 값 교환↓↓" << endl;

	sw(&a, &b);
	cout << "교체 후 변수 a의 값 : " << a << endl;
	cout << "교체 후 변수 b의 값 : " << b << endl;
}










