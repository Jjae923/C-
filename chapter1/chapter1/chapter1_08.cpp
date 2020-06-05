#include "1.h"

//// 재귀함수 
//int a;
//
//void add(int i)
//{
//	if (i >= 10)
//		return;
//	i++;
//	a++;
//	cout << a << endl;
//	add(i); // 재귀함수
//}
//
//int main()
//{
//	add(0);
//	cout << "res : " << a << endl;
//}



//// 재귀함수
//void countNum(int num)
//{
//	if (num == 1)
//	{
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else
//	{
//		cout << "Num : " << num << endl;
//		countNum(num - 1);
//	}
//}
//
//int main()
//{
//	countNum(5);
//	return 0;
//}


//// for 제어문 5회전
//void countNum_for(int num)
//{
//	for (int i = num; i > 0; i--)
//	{
//		cout << "Num : " << i << endl;
//	}
//}
//
//int main()
//{
//	countNum_for(5);
//	return 0;
//}


//// while 제어문 5회전
//void countNum_while(int num)
//{
//	while (num > 0)
//	{
//		cout << "Num : " << num << endl;
//		num--;
//	}
//}
//
//int main()
//{
//	countNum_while(5);
//	return 0;
//}



//!
//보이드 메인{
//	인트 에이, 섬세미콜론
//포(인트 아이 는 영세미콜론 아이는 10보다 작음세미콜론 아이플플) 중괄호염
//	섬 플러스는 아이;
//	콘솔아웃<<큰따옴표섬띄어쓰기콜론띄어쓰기큰따옴표<<섬<<엔드라인세미콜론
//중괄호 닫음
//}


// 팩토리얼 재귀함수 풀어보기
//long long n = 1, sum = 1;
//
//void fac(long long i)
//{
//	while (n==i)
//	{
//		n = n * (n + 1);
//		sum += n;
//		cout << n << "! = " << sum << endl;
//	}
//	fac(i);
//}
//
//void main()
//{
//	fac(2);
//	cout << "sum : " << sum << endl;
//}



// 팩토리얼 알고리즘 재귀함수
//void main()
//{
//	int N = 1;
//	long long F = 1;
//	long long S = 0;
//	while (N < 10) {
//		N++;
//		F = F * N;
//		S = S + F;
//
//		cout << N << "! : " << F << endl;
//	}
//	cout << "1부터 20까지의 팩토리얼 총 합 : " << S << endl;
//}


// 팩토리얼 재귀함수
//int n, i;
//long long result, dap;
//int fact(int x)
//{
//	if (x == 1)
//		return(1);
//	else
//		dap = x * fact(x - 1);
//	return(dap);
//}
//
//void main()
//{
//	cout << "숫자를 입력하세요 : ";
//	cin >> n;
//	result = fact(n);
//	cout << n << "! = " << n << " * ";
//	for (i = (n-1); i > 1; i--)
//		cout << i << "! * ";
//	cout << i << " = " << result << endl;
//}















