#include "1.h"

void main()
{
	//switch���� �̿��� ����ǥ
	//int kor, eng, tot, mok;
	//double  avg;

	//cout << "���� ���� : ";
	//cin >> kor;
	//cout << "���� ���� : ";
	//cin >> eng;

	//tot = kor + eng;
	//avg = tot / 2.0;
	//mok = avg / 10;
	//cout << "���� : ";

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


	//switch���� �̿��� �������
	//int a, b;
	//char op;
	//cout << "�� ���� �Է��ϼ���. ";
	//cin >> a >> b;
	//cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) " << endl;
	//cin >> op;

	//switch (op)
	//{
	//case '+' :
	//	cout << "�� ���� ����" << a + b << " �Դϴ�.";
	//	break;
	//case '-' :
	//	cout << "�� ���� ����" << a - b << " �Դϴ�.";
	//	break;
	//case '*' :
	//	cout << "�� ���� ����" << a * b << " �Դϴ�.";
	//	break;
	//case '/' :
	//	cout << "�� ���� �������" << a / b << " �Դϴ�.";
	//	break;
	//case '%' :
	//	cout << "�� ���� ��������" << a % b << " �Դϴ�.";
	//	break;
	//default:
	//	cout << "�߸��� �����ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.";
	//	break;
	//}


	////���� ��� ����
	//int year;
	//cout << "������ �Է��ϼ��� : ";
	//cin >> year;

	//if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	//	cout << year << "���� �����Դϴ�." << endl;
	//else
	//	cout << year << "���� ����Դϴ�." << endl;


	// while��
	//int han;
	//han = 1;
	//while (han <= 5)
	//{
	//	cout << "Good" << endl;
	//	han++;
	//}


	// while��
	//int han, sum;
	//han = 0, sum = 0;
	//while (han < 100)
	//{
	//	han++;
	//	sum = sum + han;
	//}
	//cout << "1���� 100������ ���� " << sum << "�Դϴ�" << endl;


	// Do, While��
	//int i = 1, sum = 0;
	//
	//do
	//{
	//	sum += i;
	//		i++;
	//} while (i <= 100);
	//cout << " do ~ while = : " << sum << endl;


	// for��
	//int i, sum = 0;
	//i = 1;
	//for (i = 1; i <= 100; i++) {
	//	sum += i;
	//}
	//cout << "for : " << sum << endl;


	// ����for��
	//int a, b;
	//cout << "���� for��" << endl;
	//for (a = 1; a <= 2; a++)
	//	for (b = 1; b <= 3; b++)
	//		cout << "a = " << a << setw(5) << "b = " << b << endl;
	//cout << "��!!!";


	// ����for���� �̿��� ������
	//for (int a = 2; a < 10; a++)
	//	for (int b = 1; b < 10; b++)
	//		cout << a << " * " << b << " = " << a * b << endl;

	
	//int num;
	//cout << "���ϴ� ���� �Է��ϼ��� : ";
	//cin >> num;
	//for (int a = 1; a < 10; a++)
	//	cout << num << " * " << a << " = " << num * a << endl;


	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z')			// 65 ~ 94
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a' && ch <= 'z')	// 97 ~ 122
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;
	

	//char mun;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� : ";
	//	cin >> mun;
	//	if (mun >= 'A' && mun <= 'Z')	// 65 ~ 94
	//	{
	//		cout << "�����Է��Դϴ�." << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���." << endl;
	//		continue;
	//	}


	//int n;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� : ";
	//	cin >> n;

	//	if (n == EOF) // -1
	//	{
	//		cout << "����˴ϴ�" << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}

	
	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 2; j < 10; j++)
	//	{
	//		cout << setw(4) << j << "*" << i << "="  << setw(2) << j * i;
	//	}
	//	cout << endl;
	//}


	//// ��Ŭ���� ȣ����
	//int u, v, GCD, LCM, m, n; // GCD : �ִ�����, LCM : �ּҰ����
	//cout << "�� ���� �Է��ϼ��� : ";
	//cin >> u >> v;
	//m = u;
	//n = v;
	//while (m != n)
	//{
	//	if (m > n)
	//		m = m - n;
	//	else
	//		n = n - m;
	//}
	//GCD = m;
	//LCM = (n * m) / GCD;
	//cout << "�ִ������� " << GCD << endl;
	//cout << "�ּҰ������ " << LCM << endl;


	//int u, v, GCD, LCM, l, s, na; // GCD : �ִ�����, LCM : �ּҰ����
	//cout << "�� ���� �Է��ϼ��� : ";
	//cin >> u >> v;
	//if (u > v)
	//{
	//	l = u;	s = v;
	//}
	//else {
	//	l = v;	s = u;
	//}
	//while (s != 0)
	//{
	//	na = l % s;	l = s;	s = na;
	//	GCD = l;
	//	LCM = (u*v) / GCD;
	//	cout << "GCD" << setw(5) << GCD << endl;
	//	cout << "LCM" << setw(5) << LCM << endl;
	//}

	char c;
	int mun;
	cout << "�� ���ڸ� �Է��ϼ��� : ";
	cin >> c;
	
	while ('c' < 65 || 90 < 'c') //�빮�ڰ� �ƴҶ�
	{
		cout << "�빮�ڸ� �Է��ϼ��� : ";

	}
	for (mun=c;mun<=90;mun++)
	{
		cout << (char)(mun);
	}
	//for�� ������ �Է� ���ں��� �� ��� 
	//for(){
	//���
	//�Է¹��ڶ� 'Z'�� �ƽ�Ű�ڵ� �� ��
	//ũ�� -26
	//}


	/*if (65 <= 'c' && 'c' <= 90)
	{
		mun	= 'c';
		for (mun = 'c'; mun <= 90; mun++)
		{
			cout << mun;
		}
		
	}
	else
	{
		cout << "�빮�ڸ� �Է��ϼ��� : ";

	}*/
}