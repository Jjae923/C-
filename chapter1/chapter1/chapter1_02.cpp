#include <stdio.h> // C �⺻ �����
#include <stdlib.h> 
#include <string.h>


/* ����ȯ */
// * atoi : ascii�ڵ�(���ڿ�)�� int(������)�� ��ȯ
// double atof(const char* str); -> ���ڿ��� double
// long atol(const char* str); -> ���ڿ��� long
// * itoa : int(������)�� ascii�ڵ�(���ڿ�)�� ��ȯ


int main() {
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = { 0, };
	printf("a+str = %d\n", a + atoi(str)); // ���ڿ� -> ������ ��ȯ
	printf("b+str = %.2f\n", b + atof(str)); // ���ڿ� -> �Ǽ��� ��ȯ
	_itoa_s(a, tmp, 10); // ������ -> ���ڿ� ��ȯ
	printf("%s\n", str); return 0;
}

//void main() {
//	int a, b;
//	printf("ù��° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//	printf("�ι�° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &b);
//	printf("������� = %d\n", a+b );
//	printf("��������� = %d\n", a%b);
//	printf("����������� = %d\n", -a +b);
//	printf("a�� ������ = %d", a+1);
//}
