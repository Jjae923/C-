#include <iostream>

using namespace std;

void main()
{
	//int a, b;
	//cout << "첫번째 숫자를 입력하세요 : ";
	//cin >> a;
	//cout << "두번째 숫자를 입력하세요 : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "이(가) 더 크다" << endl : cout << b << "이(가) 더 크다" << endl;

	//// 삼항연산 이중if문
	//int i, j, k, MAX, MIN;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i >> j >> k;
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	
	int n, n1, n2, n3, n4, n5, n6;
	cout << "다섯자리 수를 입력하세요 : ";
	cin >> n; //98860
	cout << n << "은" << endl;
	n1 = n / 10000;
	n = n - n1 * 10000; //8860
	cout << "만원짜리 : " << n1 << endl;
	n2 = n / 5000;
	n = n % 5000;
	cout << "오천원짜리 : " << n2 << endl;
	n3 = n / 1000;
	n = n % 1000;
	cout << "천원짜리 : " << n3 << endl;
	n4 = n / 500;
	n = n % 500;
	cout << "오백원짜리 : " << n4 << endl;
	n5 = n / 100;
	n = n % 100;
	cout << "백원짜리 : " << n5 << endl;
	n6 = n / 10;
	n = n % 10;
	cout << "십원짜리 : " << n6 << endl;
}