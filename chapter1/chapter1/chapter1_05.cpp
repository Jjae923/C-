#include <iostream>

using namespace std;

void main()
{
	////¦���Ǻ���
	//int n;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> n;
	//if (n % 2 == 0)
	//	cout << n << "�� ¦���Դϴ�" << endl;
	//else
	//	cout << n << "�� Ȧ���Դϴ�" << endl;
	//
	////10�� ���
	//int dat;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> dat;
	//if (dat % 10 == 0)
	//	cout << dat << "�� 10�� ����Դϴ�" << endl;
	//else
	//	cout << dat << "�� 10�� ����� �ƴմϴ�" << endl;

	//int a;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> a;
	//if (a > 10)
	//	cout << a << "�� 10���� ū �� �Դϴ�" << endl;
	//else
	//	cout << a << "�� 10���� ���� �� �Դϴ�" << endl;


	//int num1, num2;
	//cout << "ù��° ���� �Է� : ";
	//cin >> num1;
	//cout << "�ι�° ���� �Է� : ";
	//cin >> num2;
	//cout << "�� ���� �� �м� ����� : ";

	//if (num1 >= num2)
	//{
	//	if (num1 == num2)
	//		cout << num1 << "�� " << num2 << "��(��) ���� �� �Դϴ�." << endl;
	//	else
	//		cout << num1 << "�� " << num2 << "���� ū �� �Դϴ�." << endl;
	//}
	//else
	//	cout << num1 << "��(��) " << num2 << "���� ���� �� �Դϴ�." << endl;


	////����Ǻ���
	//int num1, num2, d, d2;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> num1;
	//cout << "� ���� ������� Ȯ���ұ��? : ";
	//cin >> num2;
	//if (num1 % num2 == 0)
	//	cout << num1 << "�� " << num2 << "�� ����Դϴ�" << endl;
	//else
	//	d = num2 - (num1 % num2);
	//	d2 = num1 % num2;
	//	cout << num1 << "�� " << num2 << "�� ����� �Ǳ� ���� " << d << " �ʿ�!" << endl;
	//	cout << num1 << "�� " << num2 << "�� ����� �Ǳ� ���� " << d2 << "��ŭ ������ ��!" << endl;


	//int num1, num2, num3;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> num1;
	//num2 = 5 - (num1 % 5);
	//num3 = num1 % 5;

	//if (num1 % 5 == 0) {
	//	cout << "5�� ����Դϴ�.";
	//}
	//else {
	//	cout << num1 << "��(��) 5�� ����� �Ƿ��� " << num2 << "��ŭ �ʿ�!" << endl;
	//	cout << "�Ǵ� " << num3 << "��ŭ ������ �մϴ�!!" << endl;
	//}


	////�ƽ�Ű�ڵ带 �̿��� ��ҹ��� �Ǻ���
	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z')			// 65 ~ 94
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a' && ch <= 'z')	// 97 ~ 122
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;


	//IF���� �̿��� ����ǥ
	int kor, eng, tot;
	double avg;

	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;

	cout << "��� ���� : ";

	if (avg >= 95.0)
		cout << "��" << endl;
	else if (avg >= 85.0)
		cout << "��" << endl;
	else if (avg >= 75.0)
		cout << "��" << endl;
	else if (avg >= 65.0)
		cout << "��" << endl;
	else
		cout << "��" << endl;
}