#include <iostream>

using namespace std;

void main()
{
	////CASE���� �̿��� ����ǥ
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


	//SWITCH���� �̿���
	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ���. ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) " << endl;
	cin >> op;

	switch (op)
	{
	case '+' :
		cout << "�� ���� ����" << a + b << " �Դϴ�.";
		break;
	case '-' :
		cout << "�� ���� ����" << a - b << " �Դϴ�.";
		break;
	case '*' :
		cout << "�� ���� ����" << a * b << " �Դϴ�.";
		break;
	case '/' :
		cout << "�� ���� �������" << a / b << " �Դϴ�.";
		break;
	case '%' :
		cout << "�� ���� ��������" << a % b << " �Դϴ�.";
		break;
	default:
		cout << "�߸��� �����ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.";
		break;
	}

}