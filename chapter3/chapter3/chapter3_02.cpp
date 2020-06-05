// Stack Memory 구현
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#define MAX 5

using namespace std;

int stack[MAX], top = -1, k;

int push(int t)
{
	if (top >= MAX - 1)
	{
		cout << "overFlow!!!" << t << endl;
		return(1);
	}
	else
		return(stack[++top] = t);
}

void st_print()
{
	for (int i = top; i >= 0; i--)
		cout << setw(3) << stack[i];
	cout << endl;
}

int pop()
{
	if (top < 0)
	{
		cout << "UnderFlow!!! Stack Empty" << endl;
		return(-1);
	}
	else
		return(stack[top--]);
}

void main()
{
	push(1);
	push(2);
	push(5);
	push(9);
	push(3);
	//push(4);

	st_print(); // 3 9 5 2 1

	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;

	cout << "입력순서" << endl;
	for (int i = 0; i < 5; i++)
		cout << stack[i] << endl;
}
















