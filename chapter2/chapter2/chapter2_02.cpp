#include <iostream>
#include <iomanip>    /* setw() */
#include <conio.h>    /* _getch() */
#include <list>
using namespace std;


// 2차원 배열 여러방향으로 출력
//int i, j, cnt, A[5][5];
//char k;
//
//void print() {
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cout << setw(3) << A[i][j];
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	while (1)
//	{
//		cout << "The Four Type of Matrix <1> <2> <3> <4>" << endl;
//		cout << "프로그램 종료하시려면 0을 누르세요" << endl;
//		k = _getch();
//		if (k == '0')
//			break;
//		switch (k)
//		{
//		case '1':
//			cnt = 0;
//			for (i = 0; i < 5; i++)
//			{
//				for (j = 0; j < 5; j++)
//				{
//					A[i][j] = ++cnt;	/* cnt++는 0부터 시작, ++cnt는 1부터 시작 */
//				}
//			}
//			print();
//			break;
//		case '2':
//			cnt = 0;
//			for (i = 4; i >= 0; i--)
//			{
//				for (j = 0; j < 5; j++)
//				{
//					A[j][i] = ++cnt;
//				}
//			}
//			print();
//			break;
//		case '3':
//			cnt = 0;
//			for (i = 4; i >= 0; i--)
//			{
//				for (j = 0; j < 5; j++)
//				{
//					A[i][j] = ++cnt;
//				}
//			}
//			print();
//			break;
//		case '4':
//			cnt = 0;
//			for (i = 4; i >= 0; i--)
//			{
//				for (j = 0; j < 5; j++)
//				{
//					A[j][i] = ++cnt;
//				}
//			}
//			print();
//			break;
//		}
//	}
//}



 //2차원 배열 ㄹ방향으로 출력
//int i, j, k, cnt = 0, A[50][50];
//
//void print() {
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			cout << setw(4) << A[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	while (1)
//	{
//		cout << "숫자를 입력하세요 : ";
//		cin >> k;
//		if (k == 0)
//			break;
//		cnt = 0;
//		for (i = 0; i < k; i++)
//		{
//			if (i % 2 == 0) {
//				for (j = 0; j < k; j++)
//				{
//					A[i][j] = ++cnt;
//				}
//			}
//			else {
//				for (j = (k - 1); j >= 0; j--)
//				{
//					A[i][j] = ++cnt;
//				}
//			}
//		}
//		print();
//	}
//}



// 배열의 정렬
// ① 선택정렬
//int i, j, temp;
//int tab[5] = { 9, 5, 10, 3, 2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//
//void main()
//{
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (tab[i] >= tab[j])
//			{
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}




// 선택정렬?????????

//int i, j, temp;
//int tab[5] = { 5,4,3,2,1 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}



int i, j, temp;
int tab[5];

void print()
{
	for (i = 0; i < 5; i++)
		cout << setw(5) << tab[i];
	cout << endl;
}

void main()
{
	cout << "배열에 담을 수를 5개 입력하세요 : ";
	// 입력받기
	for (i = 0; i < 5; i++) {
		cin >> tab[i];
	}
	// 정렬
	for (i = 0; i < 5 - 1; i++)
	{
		if (tab[i] >= tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
	}
	print();
}

// ② 버블 정렬

//int i, j, temp;
//int tab[5];
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//
//void main()
//{
//	cout << "배열에 담을 수를 5개 입력하세요 : ";
//	// 입력받기
//	for (i = 0; i < 5; i++) {
//		cin >> tab[i];
//	}
//	// 정렬
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			if (tab[i] >= tab[j])
//			{
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}




// ③ 삽입정렬???????????

//void main()
//{
//	int E[5] = { 95,75,85,100,50 };
//	int i;
//	int j, KEY;
//	for (i = 1; i < 5; i++)
//	{
//		// 키의 위치는 두번째부터 설정해야 첫번째 값과
//		KEY = E[i];
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (E[j] <= KEY)
//				break;
//			E[j + 1] = KEY;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			cout << setw(5) << tab[i];
//		}
//		cout << endl;
//	}
//}

// BS의 FUNCTION
// L : 하한 인덱스 변수
// H : 상한 인덱스 변수
// M : L과 H의 중간값
//  오름차순으로 정렬되어 있다고 가정하고 사용자가 찾고자 하는 수를 반으로 나누어 하한과 상한의 위치 선별 검색 후 검색하는 기법
//int L, H, K;
//int E[] = { 11, 15, 20, 22, 35, 38, 39, 42, 43, 45, 100 };
//
//int BS(int E[], int L, int H, int K)
//{
//	int M;
//	for (;;) // true 무한루프와 동일 = while(1)
//	{
//		if (L > H) // 데이터가 1 또는 2개 존재
//		{
//			return -99;
//		}
//		M = (L + H) / 2;
//		if (E[M] > K)
//		{
//			H = M - 1;
//			continue;
//		}
//		else
//			if (E[M] < K)
//			{
//				L = M + 1;
//				continue;
//			}
//			else
//				return M + 1; // 0부터 시작해서 1 더해짐
//	}
//}
//
//void main()
//{
//	cout << "찾는 값 : " << 20 << "은 ";
//	cout << BS(E, 0, 10, 20); // 하한 0 상한 10 키값 20 배열 E
//	cout << "번째 있습니다.";
//}


// 이진탐색???????????????






// 이분검색
// 민기
void print(int tab[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << setw(5) << tab[i];
	}
	cout << endl;
}

int BS(int E[], int L, int H, int k) {
	int M;
	while (L <= H) { // 만약, L>H가 되면 -99를 리턴함
		M = (L + H) / 2;
		if (E[M] > k) {
			H = M - 1;
		}
		else if (E[M] < k) {
			L = M + 1;
		}
		else if (E[M] == k) {
			return M + 1;
		}
	}

	return -99;
}
void jung(int tab[], int n) {
	int key, j;

	for (int i = 1; i < n; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
		key = tab[i]; // temp= tab[1]로 시작
		j = i - 1;  //key값의 바로 앞에서부터 비교
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
		}
	}
}



void main() {

	int tab[50];
	int num, i = 0;
	int index;

	cout << "숫자를 입력하세요 (종료는 0)" << endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// 정렬
	jung(tab, i);
	cout << "정렬 후" << endl;
	print(tab, i);

	// 이분 검색
	cout << "찾고자 하는 값을 입력하세요 : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "찾고자 하는 숫자가 없네요" << endl;
	else cout << "찾고자 하는 숫자 " << num << " 은 " << index << "번 째에 있다" << endl;
}



// list 이용한 정렬_쌤 (포인터,리스트 사용)
int main() {
	list<int> l;

	int a = 1, i;
	cout << "숫자를 입력하세요 : (0 : 종료)" << endl;

	while (true) {
		cin >> a;
		if (a == 0)
			break;
		l.push_back(a);
	}

	list<int>::iterator iter;
	l.sort();

	for (iter = l.begin(); iter != l.end(); iter++)
		cout << setw(4) << *iter;

	cout << endl << "정렬완료!" << endl;
	cout << "찾고자하는 값을 입력하세요 : "

}