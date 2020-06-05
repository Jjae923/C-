#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

// 문자열 오른쪽, 왼쪽으로 자리 옮기기
//char tab[100], temp, lr;
//int i, L;
//
//void print() {
//	for (i = 0; i < L; i++)
//		cout << setw(3) << tab[i] ;
//	cout << endl;
//}
//
//void input()
//{
//	cout << "문자열을 입력하세요 : ";
//	cin.getline(tab, 100);
//	L = strlen(tab);
//	for (i = 0; i < L; i++)
//		cout << setw(3) << tab[i];
//	cout << endl;
//}
//
//void right()
//{
//	temp = tab[L-1];
//	for (i = L; i >= 0; i--)
//		tab[i] = tab[i - 1];
//	tab[0] = temp;
//	print();
//}
//
//void left()
//{
//	temp = tab[0];
//	for (i = 0 ; i < L; i++)
//		tab[i] = tab[i + 1];
//	tab[L-1] = temp;
//	print();
//}
//
//void main()
//{
//	input();
//	L = strlen(tab);
//	while (1)
//	{
//		lr = _getch();
//		if (lr == 'R' || lr == 'r')
//		{
//			right();
//		} // 메소드
//		else if (lr == 'L' || lr == 'l')
//		{
//			left();
//		} // 메소드-->  함수 ( function)
//		else
//		{
//			break;
//		}
//	}
//}



// 이차원 달팽이 배열
int main()
{
	int A[5][5], N = 0, S = 1, i = 0, J = -1, K = 5;

	while (1) {
		// 행중심 0행
		for (int P = 0; P < K; P++) {
			N += 1;
			J = J + S; // S가 스위치 역할
			A[i][J] = N;
		}
		K = K - 1; // K가 5에서 4로 감소
		if (K > 0) {
			// 열중심 4열
			for (int P = 0; P < K; P++) {
				N += 1;
				i = i + S;
				A[i][J] = N; // J는 4열
			}
			S *= -1;
		}
		else
			break;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}
}



// 원하는 수를 입력받아서 달팽이로 만들어보고싶은데_배열선언 오류남......????????????
//int main()
//{
//	int x;
//
//	cout << "수를 입력하세요 : ";
//	cin >> x;
//
//	int A[x][x], N = 0, S = 1, i = 0, J = -1, K = x;
//
//	while (1) {
//		// 행중심 0행
//		for (int P = 0; P < K; P++) {
//			N += 1;
//			J = J + S; // S가 스위치 역할
//			A[i][J] = N;
//		}
//		K = K - 1; // K가 5에서 4로 감소
//		if (K > 0) {
//			// 열중심 4열
//			for (int P = 0; P < K; P++) {
//				N += 1;
//				i = i + S;
//				A[i][J] = N; // J는 4열
//			}
//			S *= -1;
//		}
//		else
//			break;
//	}
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < x; j++) {
//			cout << setw(3) << A[i][j] << " ";
//		}
//		cout << endl;
//	}
//}