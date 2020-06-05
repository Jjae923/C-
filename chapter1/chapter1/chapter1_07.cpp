#include "1.h"

//int max(int a, int b);   // 프로토 타입 : 메인함수 위에 선언문을 올려놓고 메인함수 밑에 함수를 정의해놓는 것
//
//void main()
//{
//	int m, n, res;
//	cout << "비교할 두 수를 입력하세요 : ";
//	cin >> m >> n;
//	res = max(m, n);
//	cout << "MAX : " << res << endl;
//}
//
//// Call by
//int max(int a, int b) 
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}


//// call by value
//void value(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << " a= " << a << endl;
//	cout << " b= " << b << endl;
//}
//
//void main()   /* Call back */
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(n1, n2);
//	cout << " n1 = " << n1 << endl;
//	cout << " n2 = " << n2 << endl;
//}

//// Call by Reference
//void value(int *a, int *b)		// * (Pointer) : 주소를 돌려줄 대상 표시 // 여러개의 값을 리턴하고 싶을 때 사용하면 유용!
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << " a= " << a << endl;
//	cout << " b= " << b << endl;
//	cout << " a= " << *a << endl;
//	cout << " b= " << *b << endl;
//}
//
//void main()
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(&n1, &n2);	// & : 해당하는 값의 주소를 넘겨줌
//	cout << " n1 = " << n1 << endl;
//	cout << " n2 = " << n2 << endl;
//}

//// 실인수, 가인수는 있고, return 값이 없는 경우
//char mun, alp;  // 전역변수 사용 → 메소드 자체에서 결과값을 보여주고 끝
//
//void dae(char alp)
//{
//	alp = alp - 32;
//	cout << alp << endl;
//}
//
//void main()
//{
//	cout << "알파벳을 입력하세요 : ";
//	cin >> mun;
//	dae(mun);
//}



//// 실인수, 가인수는 없고, return 값이 있는 경우
//char mun, alp;  // 전역변수  →  메인으로 돌아가서 결과값 보여주기
//
//char dae()
//{
//	mun = mun - 32;
//	return mun;
//}
//
//void main()
//{
//	cout << "알파벳을 입력하세요 : ";
//	cin >> mun;
//	alp = dae();
//	cout << alp << endl;
//}



// 실인수, 가인수, return 값이 모두 있는 경우
char mun, alp, res;  // 전역변수

char dae(char alp)
{
	alp = alp - 32;
	return alp;
}

void main()
{
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	res = dae(mun);
	cout << res << endl;
}

