#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <fstream>


using namespace std;

string name[5][1];
int sung[5][6], cnt, k, i, j, gra;
ifstream fin("in_1.txt");
ofstream fout("out_1.txt");
// 5명 학생의 3과목 성적 입력받기
void input() {
	for (i = 0; i < 5; i++) {
		fin >> name[i][1];
		for (j = 0; j < 3; j++)	{
			fin >> sung[i][j];
		}
	}
}

// 성적의 합계와 평균
void process()
{
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			// sung[i][3] = sung[i][3] + sung[i][j];
			sung[i][3] += sung[i][j];
		}
		sung[i][4] = sung[i][3] / 3;
	}
}

// 석차
void sukch()
{
	for (i = 0; i < 5; i++)
	{
		sung[i][5] = 1;
		for (j = 0; j < 5; j++)
		{
			if (sung[i][j] < sung[j][4]) {
				sung[i][5]++;
			}
		}
	}
}

// 출력
void print()
{
	fout << setw(5) << "이름" << setw(6) << "JAVA" << setw(6) << "C++" << setw(6) << "Python" << setw(6) << "총점" << setw(6) << "평균" << setw(6) << "석차" << setw(6) << "그래프" << endl;

	for (i = 0; i < 5; i++)
	{
	// 이름 출력
	fout << name[i][1] << setw(4);
		// 점수 출력
		for (j = 0; j < 6; j++)
		{
			fout << setw(6) << sung[i][j];
		}
		gra = sung[i][4] / 10;
		fout << setw(7);
		for (k = 0; k < gra; k++)
		{
			fout << "★";
		}
		fout << endl;
	}
}

// 출력문을 이용해서 시각화


// 메인


