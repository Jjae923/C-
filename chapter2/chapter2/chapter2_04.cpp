#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

// ���ڿ� ������, �������� �ڸ� �ű��
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
//	cout << "���ڿ��� �Է��ϼ��� : ";
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
//		} // �޼ҵ�
//		else if (lr == 'L' || lr == 'l')
//		{
//			left();
//		} // �޼ҵ�-->  �Լ� ( function)
//		else
//		{
//			break;
//		}
//	}
//}



// ������ ������ �迭
int main()
{
	int A[5][5], N = 0, S = 1, i = 0, J = -1, K = 5;

	while (1) {
		// ���߽� 0��
		for (int P = 0; P < K; P++) {
			N += 1;
			J = J + S; // S�� ����ġ ����
			A[i][J] = N;
		}
		K = K - 1; // K�� 5���� 4�� ����
		if (K > 0) {
			// ���߽� 4��
			for (int P = 0; P < K; P++) {
				N += 1;
				i = i + S;
				A[i][J] = N; // J�� 4��
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



// ���ϴ� ���� �Է¹޾Ƽ� �����̷� �����������_�迭���� ������......????????????
//int main()
//{
//	int x;
//
//	cout << "���� �Է��ϼ��� : ";
//	cin >> x;
//
//	int A[x][x], N = 0, S = 1, i = 0, J = -1, K = x;
//
//	while (1) {
//		// ���߽� 0��
//		for (int P = 0; P < K; P++) {
//			N += 1;
//			J = J + S; // S�� ����ġ ����
//			A[i][J] = N;
//		}
//		K = K - 1; // K�� 5���� 4�� ����
//		if (K > 0) {
//			// ���߽� 4��
//			for (int P = 0; P < K; P++) {
//				N += 1;
//				i = i + S;
//				A[i][J] = N; // J�� 4��
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