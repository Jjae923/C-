#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

//int main()
//{
//	int ary1[4] = { 1, 2, 3, 4 }; // 1차원 배열의 선언과 초기
//	int ary2[4] = { 11, 12, 13, 14 };
//	int ary3[4] = { 21, 22, 23, 24 };
//
//	int *pary[3] = { ary1, ary2, ary3 };
//	// {(1, 2, 3, 4), (11, 12, 13, 14), (21, 22, 23, 24)}
//	int i, j;
//	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			cout << setw(4) << pary[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}





//int main()
//{
//	void swap_ptr(char **ppa, char **ppb); // 프로토 타입이므로 함수선언
//
//		char a[] = "success";
//		// char a[] = { 'H','E','L','L','O','\0' };
//		char *pa = a;
//		char b[] = "failuer";
//		char *pb = b;
//
//		cout << "pa -> " << &pa << " /  pb -> " << pb << endl;
//		//swap_ptr(&pa, &pb);
//		cout << "pa -> " << pa << " /  pb -> " << pb << endl;
//
//	return 0;
//}
//// char *ppr;
//// int a =10;
//// ppr = &a;
//
//// char *ppr;
//// char a[];
//// ppr = a; --> *ppr
//
//void swap_ptr(char **ppa, char **ppb)
//{
//	char *pt;
//	pt = *ppa;
//	// char *pt = *ppa; 동일
//	*ppa = *ppb;
//	*ppb = pt;
//}




int main()
{
	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	*ppi = pi;
}