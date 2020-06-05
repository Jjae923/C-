#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

// 홀수 짝수 합계 따로 구하기
//void main()
//{
//	int i = 0, asum = 0, bsum = 0, sw = 0; // sw -> 스위치 변수 (짝홀 판별)
//	do
//	{
//		i = i + 1;
//		if (sw == 0) {
//			asum = asum + i;
//			sw = 1;
//		}
//		else {
//			bsum = bsum + i;
//			sw = 0;
//		}
//	} while (i < 100);
//	cout << "asum : " << asum << endl; // 1 ~ 100 사이의 홀수의 합
//	cout << "bsum : " << bsum << endl; // 1 ~ 100 사이의 짝수의 합
//}

// 홀짝이 값의 부호가 바뀌면서 더해질 때 합계 구하기
//void main()
//{
//	int sum = 0, n = 1, sw = 1;
//	do
//	{
//		sum = sum + (sw * n);
//		if (n < 100) {
//			n++;
//			sw = -sw;
//		}
//		else {
//			break;
//		}
//	} while (n <= 100);
//	cout << "sum : " << sum << endl;
//}

// 소수 판별법
//void main()
//{
//	int n, flag = 0, i;
//
//	cout << "숫자를 입력하세요 : ";
//	cin >> n;
//
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << n << "은(는) 소수입니다." << endl;
//	else
//		cout << n << "은(는) 소수가 아닙니다." << endl;
//}


// 제곱근을 이용한 소수 판별법 : sqrt() → #include <math.h>
//void main()
//{
//	//m = 16  --> sq = 4
//	//20의 제곱근 --> 4.xxxxx 4보단 큰 수, 5보단 작은 수
//	int n, flag = 0, i, sq;
//	cout << "숫자를 입력하세요 : ";
//	cin >> n;
//	sq = sqrt(n);
//	cout << "분석 숫자 : " << n << endl;
//	for (i = 2; i <= sq; i++)
//	{
//		if ((n%i) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << n << "은(는) 소수입니다." << endl;
//	else
//		cout << n << "은(는) 소수가 아닙니다." << endl;
//}


// 1에서 100까지의 수 중에서 가장 큰 소수
//쌤코딩
//void main()
//{
//	int P = 2; // 가장 큰 소수가 저장되는 변수
//	int N = 3;
//	while (1)
//	{
//		int M = int(sqrt(double(N))); // 자바 math.sqrt(double(N)
//		// N(49)를 소수인지 판단하는 범위(i(2)~M(7))
//		for (int i = 2; i <= M; i++)
//		{
//			int R = N % i;
//			if (R == 0)
//				break;
//			if (i == M) // 나누어 떨어진 수가 자기자신인지 판단
//				//소수이면 P변수방에 저장
//				P = N;
//		}
//		N++;
//		if (N > 100)
//			break;
//
//	}
//	printf("100까지의 소수 중 가장 큰 소수는 : %d\n", P);
//}


// 종윤
//void main() {
//
//	int i, j, k, m, cnt = 0, max = 0;
//
//	cout << "수를 입력 : ";
//	cin >> k;
//	m = sqrt(k);
//
//	//소수 판별
//	for (i = 2; i <= m; i++) {
//		if (k%i == 0) {
//			cnt++;
//		}
//	}
//	if (cnt == 1) {
//		cout << k << " 은(는) 소수가 맞습니다." << endl;
//	}
//	else
//	{
//		cout << k << " 은(는) 소수가 아닙니다." << endl;
//	}
//
//	cnt = 0; //판별 - 탐색을 이어지게 하기위해서 줌
//
//	//소수 탐색
//	cout << "0부터 " << k << "까지의 수중 소수는 ";
//
//	for (i = 2; i <= k; i++) {
//		for (j = 1; j <= i; j++) {
//			if (i%j == 0) {
//				cnt++;
//			}
//		}
//		if (cnt <= 2) {
//			cout << i << " ";
//			max = i;
//		}
//		cnt = 0;
//	}
//	cout << "입니다." << endl;
//	cout << "그중 가장 큰 소수는 " << max << " 입니다." << endl;
//}


// 정민
//void main() {
//	int n = 3, p = 2, num;
//	cout << "어디까지 큰 수를 구할까? ";
//	cin >> num;
//	// n -> 100까지 가는거 / 판별할 숫자
//	// p -> 가장 큰 소수를 담는 변수?
//
//	for (; n < num; n++) {
//		int pan = 0, sq = sqrt(n); // sqrt(n) --> n의 제곱근을 구하는 것.
//		for (int i = 2; i <= sq; i++) {
//			if (n%i == 0) {
//				pan = 1;
//				break;
//			}
//		}
//		if (pan == 0) {
//			p = n;
//		}
//	}
//	cout << "가장 큰 소수는 " << p << " 입니다. " << endl;
//}


//민기
void main()
{

	int n = 3, p = 2; // n = 100까지 가는 판별할 숫자 , p : 가장 큰 소수를 담는 변수
	int R = 0;

	for (; n < 100; n++) {
		for (int i = 2; i <= sqrt(n); i++) {
			if ((R = (n%i)) == 0) {
				break;
			}
		}
		if (R != 0) { // 소수이면 기존 소수와 판별해서 크면 교체
			if (n > p) p = n;
		}
	}
	cout << "가장 큰 소수 " << p << endl;
}