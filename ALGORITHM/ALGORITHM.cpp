#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

// Ȧ�� ¦�� �հ� ���� ���ϱ�
//void main()
//{
//	int i = 0, asum = 0, bsum = 0, sw = 0; // sw -> ����ġ ���� (¦Ȧ �Ǻ�)
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
//	cout << "asum : " << asum << endl; // 1 ~ 100 ������ Ȧ���� ��
//	cout << "bsum : " << bsum << endl; // 1 ~ 100 ������ ¦���� ��
//}

// Ȧ¦�� ���� ��ȣ�� �ٲ�鼭 ������ �� �հ� ���ϱ�
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

// �Ҽ� �Ǻ���
//void main()
//{
//	int n, flag = 0, i;
//
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << n << "��(��) �Ҽ��Դϴ�." << endl;
//	else
//		cout << n << "��(��) �Ҽ��� �ƴմϴ�." << endl;
//}


// �������� �̿��� �Ҽ� �Ǻ��� : sqrt() �� #include <math.h>
//void main()
//{
//	//m = 16  --> sq = 4
//	//20�� ������ --> 4.xxxxx 4���� ū ��, 5���� ���� ��
//	int n, flag = 0, i, sq;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	sq = sqrt(n);
//	cout << "�м� ���� : " << n << endl;
//	for (i = 2; i <= sq; i++)
//	{
//		if ((n%i) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << n << "��(��) �Ҽ��Դϴ�." << endl;
//	else
//		cout << n << "��(��) �Ҽ��� �ƴմϴ�." << endl;
//}


// 1���� 100������ �� �߿��� ���� ū �Ҽ�
//���ڵ�
//void main()
//{
//	int P = 2; // ���� ū �Ҽ��� ����Ǵ� ����
//	int N = 3;
//	while (1)
//	{
//		int M = int(sqrt(double(N))); // �ڹ� math.sqrt(double(N)
//		// N(49)�� �Ҽ����� �Ǵ��ϴ� ����(i(2)~M(7))
//		for (int i = 2; i <= M; i++)
//		{
//			int R = N % i;
//			if (R == 0)
//				break;
//			if (i == M) // ������ ������ ���� �ڱ��ڽ����� �Ǵ�
//				//�Ҽ��̸� P�����濡 ����
//				P = N;
//		}
//		N++;
//		if (N > 100)
//			break;
//
//	}
//	printf("100������ �Ҽ� �� ���� ū �Ҽ��� : %d\n", P);
//}


// ����
//void main() {
//
//	int i, j, k, m, cnt = 0, max = 0;
//
//	cout << "���� �Է� : ";
//	cin >> k;
//	m = sqrt(k);
//
//	//�Ҽ� �Ǻ�
//	for (i = 2; i <= m; i++) {
//		if (k%i == 0) {
//			cnt++;
//		}
//	}
//	if (cnt == 1) {
//		cout << k << " ��(��) �Ҽ��� �½��ϴ�." << endl;
//	}
//	else
//	{
//		cout << k << " ��(��) �Ҽ��� �ƴմϴ�." << endl;
//	}
//
//	cnt = 0; //�Ǻ� - Ž���� �̾����� �ϱ����ؼ� ��
//
//	//�Ҽ� Ž��
//	cout << "0���� " << k << "������ ���� �Ҽ��� ";
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
//	cout << "�Դϴ�." << endl;
//	cout << "���� ���� ū �Ҽ��� " << max << " �Դϴ�." << endl;
//}


// ����
//void main() {
//	int n = 3, p = 2, num;
//	cout << "������ ū ���� ���ұ�? ";
//	cin >> num;
//	// n -> 100���� ���°� / �Ǻ��� ����
//	// p -> ���� ū �Ҽ��� ��� ����?
//
//	for (; n < num; n++) {
//		int pan = 0, sq = sqrt(n); // sqrt(n) --> n�� �������� ���ϴ� ��.
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
//	cout << "���� ū �Ҽ��� " << p << " �Դϴ�. " << endl;
//}


//�α�
void main()
{

	int n = 3, p = 2; // n = 100���� ���� �Ǻ��� ���� , p : ���� ū �Ҽ��� ��� ����
	int R = 0;

	for (; n < 100; n++) {
		for (int i = 2; i <= sqrt(n); i++) {
			if ((R = (n%i)) == 0) {
				break;
			}
		}
		if (R != 0) { // �Ҽ��̸� ���� �Ҽ��� �Ǻ��ؼ� ũ�� ��ü
			if (n > p) p = n;
		}
	}
	cout << "���� ū �Ҽ� " << p << endl;
}