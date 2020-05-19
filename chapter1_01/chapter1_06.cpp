#include <iostream>

using namespace std;

void main()
{
	////CASE문을 이용한 성적표
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


	//SWITCH문을 이용한
	int a, b;
	char op;
	cout << "두 수를 입력하세요. ";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+,-,*,/,%) " << endl;
	cin >> op;

	switch (op)
	{
	case '+' :
		cout << "두 수의 합은" << a + b << " 입니다.";
		break;
	case '-' :
		cout << "두 수의 차은" << a - b << " 입니다.";
		break;
	case '*' :
		cout << "두 수의 곱은" << a * b << " 입니다.";
		break;
	case '/' :
		cout << "두 수의 나누기는" << a / b << " 입니다.";
		break;
	case '%' :
		cout << "두 수의 나머지는" << a % b << " 입니다.";
		break;
	default:
		cout << "잘못된 연산자를 입력하셨습니다. 다시 입력하세요.";
		break;
	}

}