#include <iostream>

using namespace std;

void main()
{
	//int a, b;
	//cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	//cin >> a;
	//cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "��(��) �� ũ��" << endl : cout << b << "��(��) �� ũ��" << endl;

	//// ���׿��� ����if��
	//int i, j, k, MAX, MIN;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i >> j >> k;
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	
	int n, n1, n2, n3, n4, n5, n6;
	cout << "�ټ��ڸ� ���� �Է��ϼ��� : ";
	cin >> n; //98860
	cout << n << "��" << endl;
	n1 = n / 10000;
	n = n - n1 * 10000; //8860
	cout << "����¥�� : " << n1 << endl;
	n2 = n / 5000;
	n = n % 5000;
	cout << "��õ��¥�� : " << n2 << endl;
	n3 = n / 1000;
	n = n % 1000;
	cout << "õ��¥�� : " << n3 << endl;
	n4 = n / 500;
	n = n % 500;
	cout << "�����¥�� : " << n4 << endl;
	n5 = n / 100;
	n = n % 100;
	cout << "���¥�� : " << n5 << endl;
	n6 = n / 10;
	n = n % 10;
	cout << "�ʿ�¥�� : " << n6 << endl;
}