#include "header.h"


void HAB()
{
	cout << "Let's check" << endl;
}

void HAB(int a)
{
	int gab = 0;
	for (int b = 1; b <= a; gab += b++);
	cout << "1부터" << a << "까지의 합은 : " << gab << endl;
}


void HAB(int a, int b)
{
	int gab = 0;
	for (int c = a; c <= b; gab += c++);
	cout << a << "~" << b << " = " << gab << endl;
}

// start, end, 증가값
void HAB(int a, int b, int c)
{
	for (int d = a; b <= a; c += b++);
	cout << a << "~" << b << " 까지 " << b << " = " << gab << endl;
}

int main()
{
	HAB();
	HAB(10);
	HAB(1, 10);
	HAB(10, 20);
	HAB(1, 10, 2);
	system("pause");
}
