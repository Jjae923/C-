#include "1.h"

void main()
{
	//switch문을 이용한 성적표
	//int kor, eng, tot, mok;
	//double  avg;

	//cout << "국어 점수 : ";
	//cin >> kor;
	//cout << "영어 점수 : ";
	//cin >> eng;

	//tot = kor + eng;
	//avg = tot / 2.0;
	//mok = avg / 10;
	//cout << "학점 : ";

	//switch (mok)
	//{
	//case 10:
	//	cout << "A+" << endl;
	//	break;
	//case 9:
	//	cout << "A" << endl;
	//	break;
	//case 8:
	//	cout << "B" << endl;
	//	break;
	//case 7:
	//	cout << "C" << endl;
	//	break;
	//case 6:
	//	cout << "D" << endl;
	//	break;
	//default:
	//	cout << "F" << endl;
	//	break;
	//}


	//switch문을 이용한 산술연산
	//int a, b;
	//char op;
	//cout << "두 수를 입력하세요. ";
	//cin >> a >> b;
	//cout << "연산자를 입력하세요(+,-,*,/,%) " << endl;
	//cin >> op;

	//switch (op)
	//{
	//case '+' :
	//	cout << "두 수의 합은" << a + b << " 입니다.";
	//	break;
	//case '-' :
	//	cout << "두 수의 차은" << a - b << " 입니다.";
	//	break;
	//case '*' :
	//	cout << "두 수의 곱은" << a * b << " 입니다.";
	//	break;
	//case '/' :
	//	cout << "두 수의 나누기는" << a / b << " 입니다.";
	//	break;
	//case '%' :
	//	cout << "두 수의 나머지는" << a % b << " 입니다.";
	//	break;
	//default:
	//	cout << "잘못된 연산자를 입력하셨습니다. 다시 입력하세요.";
	//	break;
	//}


	////윤년 평년 계산기
	//int year;
	//cout << "연도를 입력하세요 : ";
	//cin >> year;

	//if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	//	cout << year << "년은 윤년입니다." << endl;
	//else
	//	cout << year << "년은 평년입니다." << endl;


	// while문
	//int han;
	//han = 1;
	//while (han <= 5)
	//{
	//	cout << "Good" << endl;
	//	han++;
	//}


	// while문
	//int han, sum;
	//han = 0, sum = 0;
	//while (han < 100)
	//{
	//	han++;
	//	sum = sum + han;
	//}
	//cout << "1부터 100까지의 합은 " << sum << "입니다" << endl;


	// Do, While문
	//int i = 1, sum = 0;
	//
	//do
	//{
	//	sum += i;
	//		i++;
	//} while (i <= 100);
	//cout << " do ~ while = : " << sum << endl;


	// for문
	//int i, sum = 0;
	//i = 1;
	//for (i = 1; i <= 100; i++) {
	//	sum += i;
	//}
	//cout << "for : " << sum << endl;


	// 이중for문
	//int a, b;
	//cout << "다중 for문" << endl;
	//for (a = 1; a <= 2; a++)
	//	for (b = 1; b <= 3; b++)
	//		cout << "a = " << a << setw(5) << "b = " << b << endl;
	//cout << "끝!!!";


	// 이중for문을 이용한 구구단
	//for (int a = 2; a < 10; a++)
	//	for (int b = 1; b < 10; b++)
	//		cout << a << " * " << b << " = " << a * b << endl;

	
	//int num;
	//cout << "원하는 단을 입력하세요 : ";
	//cin >> num;
	//for (int a = 1; a < 10; a++)
	//	cout << num << " * " << a << " = " << num * a << endl;


	//char ch;
	//cout << "문자를 입력하세요 : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z')			// 65 ~ 94
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a' && ch <= 'z')	// 97 ~ 122
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;
	

	//char mun;
	//while (1)
	//{
	//	cout << "문자를 입력하세요 : ";
	//	cin >> mun;
	//	if (mun >= 'A' && mun <= 'Z')	// 65 ~ 94
	//	{
	//		cout << "정상입력입니다." << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "잘못 입력하셨습니다. 대문자를 입력하세요." << endl;
	//		continue;
	//	}


	//int n;
	//while (1)
	//{
	//	cout << "숫자를 입력하세요 : ";
	//	cin >> n;

	//	if (n == EOF) // -1
	//	{
	//		cout << "종료됩니다" << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}

	
	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 2; j < 10; j++)
	//	{
	//		cout << setw(4) << j << "*" << i << "="  << setw(2) << j * i;
	//	}
	//	cout << endl;
	//}


	//// 유클리드 호제법
	//int u, v, GCD, LCM, m, n; // GCD : 최대공약수, LCM : 최소공배수
	//cout << "두 수를 입력하세요 : ";
	//cin >> u >> v;
	//m = u;
	//n = v;
	//while (m != n)
	//{
	//	if (m > n)
	//		m = m - n;
	//	else
	//		n = n - m;
	//}
	//GCD = m;
	//LCM = (n * m) / GCD;
	//cout << "최대공약수는 " << GCD << endl;
	//cout << "최소공배수는 " << LCM << endl;


	//int u, v, GCD, LCM, l, s, na; // GCD : 최대공약수, LCM : 최소공배수
	//cout << "두 수를 입력하세요 : ";
	//cin >> u >> v;
	//if (u > v)
	//{
	//	l = u;	s = v;
	//}
	//else {
	//	l = v;	s = u;
	//}
	//while (s != 0)
	//{
	//	na = l % s;	l = s;	s = na;
	//	GCD = l;
	//	LCM = (u*v) / GCD;
	//	cout << "GCD" << setw(5) << GCD << endl;
	//	cout << "LCM" << setw(5) << LCM << endl;
	//}

	char c;
	int mun;
	cout << "한 문자를 입력하세요 : ";
	cin >> c;
	
	while ('c' < 65 || 90 < 'c') //대문자가 아닐때
	{
		cout << "대문자를 입력하세요 : ";

	}
	for (mun=c;mun<=90;mun++)
	{
		cout << (char)(mun);
	}
	//for문 돌려서 입력 문자부터 쭉 출력 
	//for(){
	//출력
	//입력문자랑 'Z'의 아스키코드 비교 후
	//크면 -26
	//}


	/*if (65 <= 'c' && 'c' <= 90)
	{
		mun	= 'c';
		for (mun = 'c'; mun <= 90; mun++)
		{
			cout << mun;
		}
		
	}
	else
	{
		cout << "대문자를 입력하세요 : ";

	}*/
}