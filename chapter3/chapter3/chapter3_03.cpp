#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string> //strlen()

using namespace std;

//int main(void)
//{
//	int array[3] = { 10, 20, 30 };
//	int* p = NULL;
//	// �迭�� 0��° ����� �ּ�
//	cout << setw(15) << array << setw(15) << array + 0 << setw(15) << &array[0] << endl;
//	cout << setw(15) << array + 1 << setw(15) << &array[1] << endl;
//	cout << setw(15) << array + 2 << setw(15) << &array[2] << endl;
//
//	cout << setw(15) << sizeof(array) << setw(15) << sizeof(array + 0) << setw(15) << sizeof(&array[0]) << endl;
//
//	cout << endl;
//
//	cout << setw(15) << *array << setw(15) << *(array + 0) << setw(15) << *&array[0] << endl;
//	cout << setw(15) << *(array + 1) << setw(15) << *&array[1] << endl;
//	cout << setw(15) << *(array + 2) << setw(15) << *&array[2] << endl;
//
//	cout << setw(15) << sizeof(*array) << setw(15) << sizeof(*(array + 0)) << setw(15) << sizeof(*&array[0]) << endl;
//
//	cout << endl;
//	
//	p = array; // &array[0]; // array + 0;
//	cout << setw(15) << p << setw(15) << p + 0 << setw(15) << &p[0] << endl;
//	cout << setw(15) << p + 1 << setw(15) << &p[1] << endl;
//	cout << setw(15) << p + 2 << setw(15) << &p[2] << endl;
//
//	cout << endl;
//
//	cout << setw(15) << *p << setw(15) << p + 0 << setw(15) << &p[0] << endl;
//	cout << setw(15) << *(p + 1) << setw(15) << *&p[1] << endl;
//	cout << setw(15) << *(p + 2) << setw(15) << *&p[2] << endl;
//}

int main(void)
{
	// 5���� ���ڿ��� ���ִ� �迭
	const char *s[] = { "A", "BB", "CCC", "DDDD", "EEEEE" };

	printf("%d\n", sizeof(s)); // �����ʹ� �⺻������ 4byte�� �Ҵ�
	// 4byte�� ����Ʈ���� 5�� : 4*5 = 20

	// ��� ���ڿ��� ���̿� �հ�(null ���ڴ� ����)
	size_t  total_size = 0;
	for (size_t i = 0; i < sizeof(s); i++)
	{
		total_size += strlen(s[i]);
	}
	printf("%d\n", total_size);

	printf("%d\n", total_size);
}







