#include <stdio.h> /* C ǥ������� */ // ����� ������ ���� stdio�� �� ���� ���ִ°� ����
#include <iostream> /* C++ ǥ������� */
#include <string> // ���ڿ� // #include <string.h>�� ���̴� c or c++�ε� string�� string.h�� ����
#include <sstream> // Ŭ������ ��ü�� ����
#include <iomanip>
#include <conio.h> // _getch() �޼ҵ带 ���� �ʿ�


using namespace std; // #include <iostream> �� std(���Ĵٵ�?������������?) ž��

//void main()
//{
//	/* using namespace std; �̻�� �� ���ξ�(std::) ÷��
//	std::cout << "Hello c++" << std::endl; // endl = \n */
//	
//	/* using namespace std; ��� ��
//	cout << "Hello c++" << endl; */
//
//
//	char name[] = "jeong jae hee";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	//c ���
//	printf("***************c��� ��� �Լ�***************\n");
//	printf("     name      kor eng mat tot   avg\n");
//	printf("%11s%4d%4d%4d%5d%7.1f\n",name,kor,eng,mat,tot,avg);
//
//	//c++ ���
//	cout << endl << "***************c++��� ��� ��ü***************" << endl;
//	cout << "     name      kor eng mat tot   avg" << endl;
//	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat 
//		<< setw(5) << tot << setw(7) << setprecision(3) << avg << endl; // setprecision : �Ҽ���
//}


//void main()
//{
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number; // �Է¹޴� ��(cin)�� number�� �����
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� ��������!";
//	_getch(); // _getch() �޼ҵ� ����Ϸ��� #include <conio.h> ������� �ʿ� / _getch() : �Է¹޴� ���� ȭ�鿡 �Էµ��� �ʵ��� �ϴ� �޼ҵ�
//	cout << endl;
//}


//int main() {
//	
//int n;
//stringstream ss; // #include <sstream>�� ���� ������ stringstream Ŭ���� �ȿ� ���� �޼ҵ尡 ����, ����Ϸ��� ��ü�� �ʿ�
//ss.str("12 345 6789 0 -12"); // c������ ������ �޸𸮸� �����ؼ� ������ �� �� ������ str�Լ��� ������ �˾Ƽ� �ɷ��ܡ�
//
//for (int i = 0; i < 5; i++) {
//	ss >> n; // ss�� string, n�� int�ӿ��� ����ȯ���� ���� �� ����
//	cout << n << endl;
//}
//return 0;
//}


//void main()
//{
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << setiosflags(ios::left); // ���� ����
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6); // setprecision : �Ҽ��� / �Ҽ��� ���� ����
//	cout << setw(10) << setiosflags(ios::showpoint) // �Ҽ��� �ڸ������� ���� 0���� ä����
//		<< 3.14 << endl;
//	cout << resetiosflags(ios::left); // ���� ���� ����
//	cout << setw(10) << "World" << "|" << endl;
//	// ���� ����
//	cout << setiosflags(ios::left) << setw(10)
//		<< "World" << "|" << endl;
//}


//void main()
//{
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	cin.get(Name, 15); // name�� �޸� 15���� �޾��� // cin.get() ���� ���� / ��� enter�� �ν�X 
//	cin.ignore(); // �ּ� ó�� �� ������ (enter�� �����Ͽ� ���� �Է��� �����ϵ��� ���ִ� ����)
//	cout << "address : ";
//	cin.get(address, 20); 
//	cout << "\nName; : " << Name << endl;
//	cout << "address : " << address << endl;
//}


















//void main()
//{
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	s = ++h + ++h;
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}


void main()
{
	//int h, s;
	//h = 3;
	//s = h > 2;
	//cout << s << endl;
	//s = h < 2;
	//cout << s << endl;
	//s = 2 == 3;
	//cout << s << endl;

	//int h, s;
	//h = 2 != 4 && 5 > 3;
	//s = !1 || !0;
	//cout << h << endl;
	//cout << s << endl;

	//int a, b, c;
	//printf("�� ���� �Է��ϼ��� : ");
	//scanf_s("%d %d", &a, &b);
	//c = a > b;
	//printf("C ��� : %d\n", c);
	//printf("a > b ��� : %d\n", a > b);
	//a++;
	//printf("a�� b�� ���� : %d\n", a == b);
	//printf("a�� b�� ���� �ʴ� : %d\n", a != b);

	int a = 3, b = 2, c;
	c = a == ++b; /* ���迬���� */
	printf("��� : %d\n", (a == b) && (--b == c)); /* �������� */
	printf("��� : %d\n", (a != b) || (b == c));
	printf("��� : %d\n", !((a != b) || (b == c)));



}