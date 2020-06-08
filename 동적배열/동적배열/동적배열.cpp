#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// 주기억 장치에 메모리 공간
	int a = 3, b = 4, c = 1;
	// 동적 메모리 공간 확보
	// int *arr = new int;
	int **arr = new int*[3]; // 행,열 동적공간 확보

	for (int i = 0; i < a; i++)
	{
		arr[i] = new int[b]; // 행에 대한 열공간 할당
	 }

	// 이차원 배열 구현하기
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = n++;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	// 공간 반납
	for (int i = 0; i < a; i++)
	{
		delete[]arr[i]; // 행에 대한 소멸
		}
		delete[]arr; // 열에 대한 소멸
	}
};