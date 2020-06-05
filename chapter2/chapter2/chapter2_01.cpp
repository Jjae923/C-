#include <iostream>
#include <iomanip>


using namespace std;

// 배열 기본 실습1
//int main()
//{
//	char A[6] = { 'C', '&', 'C', '+', '+','\0'};  // C&C++  / '\0' : NULL
//	cout << "1차원 배열 : " << A << endl;
//
//	cout << "***** 2차원 배열(3행3열) *****" << endl;
//	/*char B[3][3] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << B[i][j];
//		}
//		cout << endl;
//	}*/
//	char B[3][4] = { { 'A', 'B', 'C', '\0' },
//					{ 'D', 'E', 'F', '\0' },
//					{ 'G', 'H', 'I', '\0' } };
//	cout << B[0] << endl;
//	cout << B[1] << endl;
//	cout << B[2] << endl;
//}


// 배열 기본 실습2
//int a[5] = { 1,2,3,4,5 };
//
//void main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		a[i] = i + 1;
//		cout << a[i] << ", ";
//	}
//}


// 배열 기본 실습3
//int b[3][3], i, j, cnt;
//
//void main()
//{
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++) {
//			b[i][j] = ++cnt;
//			cout << b[i][j];
//		}
//		cout << endl;
//	}
//}


// 배열 기본 실습4
//int i, tab[10];
//void print()
//{
//	for (i = 0; i < 10 ; i++)
//		cout << tab[i] << " "; // cout << setw(3) << tab[i];
//	cout << endl;
//}
//
//void main()
//{
//	// 입력
//	for (i = 0; i < 10; i++)
//		tab[i] = i + 1;
//	print();
//}


// 이차원 배열 합 구하기
int i, j, cnt, tab[4][4];
void sum()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			// 각 행의 합
			tab[i][3] = tab[i][3] + tab[i][j];
			// 각 열의 합
			tab[3][j] = tab[3][j] + tab[i][j];
			// 3행3열의 총합
			tab[3][3] = tab[3][3] + tab[i][j];
		}
	}
}
void print()
{
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{

			cout << setw(3) << tab[i][j];
		}
		cout << endl;
	}
}
void main()
{
	for (i = 0; i < 3; i++)
	{ 
		for (j = 0; j < 3; j++)
		{
			tab[i][j] = ++cnt;
		}
	}
	sum();
	print();
}
