#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

char tab[100], a;
int i, L, n;

int main()
{
	// 문자열의 길이
	//char tab[] = "abcde";
	//int L;

	//L = strlen(tab); /* strlen : 문자열의 length */

	//cout << "문자열 : " << tab << " 의 길이 : " << L << endl;

	//************************************************************************************

	// 문자열의 복사
	//char tab[] = "abcde";
	//cout << "strcopy 명령 수행 전 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

	//strcpy_s(tab, "XYZ");
	//cout << "strcopy 명령 수행 후 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

	//************************************************************************************

	// 문자열 이어주기
	//char tab[7] = "abc";
	//cout << "strcat 명령이 수행되기 전 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

	//strcat_s(tab, "XYZ");
	//cout << "strcat 명령이 수행된 후 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

	//************************************************************************************

	// 문자열 비교
	//char tab[] = "abc", tab1[] = "xyz", tab2[] = "abc";
	//int n;
	//n = strcmp(tab, tab1);
	//cout << "문자열 tab 의 내용은 : " << tab << " 입니다." << endl;
	//cout << "문자열 tab1 의 내용은 : " << tab1 << " 입니다." << endl;
	//cout << "비교 결과 값은 : " << n << endl << "tab과 tab1은 같지 않다. " << endl;
	//n = strcmp(tab, tab2);
	//cout << "문자열 tab 의 내용은 : " << tab << " 입니다." << endl;
	//cout << "문자열 tab2 의 내용은 : " << tab2 << " 입니다." << endl;
	//cout << "비교 결과 값은 : " << n << endl << "tab과 tab2은 같다. " << endl;

	//************************************************************************************

	// 문자열 거꾸로 출력하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100); /* getline : 버퍼에 데이터가 쌓이지않음 */
	//L = strlen(tab);
	//for (i = 0; i < L; i++)
	//	cout << setw(3) << tab[i] << setw(3);
	//cout << endl;
	//for (i = L-1; i >= 0; i--) // L-1 : null 문자를 제외
	//	cout << tab[i] << setw(3);
	//cout << endl;

	//************************************************************************************

	// 문자열 삽입하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);
	//cout << "삽입 위치와 문자를 입력하세요 : ";
	//cin >> n >> a;
	//L = strlen(tab);
	//for (i = L; i >= n - 1; i--)
	//	tab[i+1] = tab[i];
	//tab[n - 1] = a;
	//for (i = 0; i < L + 1; i++)
	//	cout << tab[i] << setw(3);
	//cout << endl;

	//************************************************************************************

	// 문자열 치환하기
	//cout << "문자열을 입력하세요 : ";
	//cin.getline(tab, 100);
	//cout << "치환 위치와 문자를 입력하세요 : ";
	//cin >> n >> a;
	//L = strlen(tab);
	//tab[n - 1] = a;
	//for (i = 0; i < L + 1; i++)
	//	cout << tab[i] << setw(3);
	//cout << endl;

	//************************************************************************************

	// 문자열 삭제하기
	cout << "문자열을 입력하세요 : ";
	cin.getline(tab, 100);
	cout << "삭제할 문자열의 위치를 입력하세요 : ";
	cin >> n;
	L = strlen(tab);
	for (i = n-1; i < L; i++)
		tab[i] = tab[i+1];
	for (i = 0; i < L; i++)
		cout << tab[i];
	cout << endl;
}















