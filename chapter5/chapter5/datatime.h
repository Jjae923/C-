#pragma once

#include <stdio.h>
#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;


inline int cal_zodiac(int birthday)
{
	int any = birthday % 12;
	switch (any)
	{
	case 0:
		cout << "������ ���Դϴ�." << endl;
		break;
	case 1:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 2:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 3:
		cout << "���� ���Դϴ�." << endl;
		break;
	case 4:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 5:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 6:
		cout << "ȣ���� ���Դϴ�." << endl;
		break;
	case 7:
		cout << "�䳢 ���Դϴ�." << endl;
		break;
	case 8:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 9:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 10:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 11:
		cout << "�� ���Դϴ�." << endl;
		break;
	}
	return any;
}

inline void calc_age(int year)
{
	time_t now; // ����ð� ���̺귯��
	struct tm mytime;
	now = time(NULL); // ����ð� �ʴ����� �ٲٱ� ���� �۾�
	localtime_s(&mytime, &now);
	// now�� �㰣 ����ð��� ��, ��, �ʷ� ��ȯ�Ͽ� mytime�� ����

	cout << "����� ���̴� : " << mytime.tm_year + 1900 - year + 1 << endl;
}

inline void calc_day(int any) {
	switch (any)
	{
	case 0:
		cout << "������ ���Դϴ�." << endl;
		break;
	case 1:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 2:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 3:
		cout << "���� ���Դϴ�." << endl;
		break;
	case 4:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 5:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 6:
		cout << "ȣ���� ���Դϴ�." << endl;
		break;
	case 7:
		cout << "�䳢 ���Դϴ�." << endl;
		break;
	case 8:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 9:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 10:
		cout << "�� ���Դϴ�." << endl;
		break;
	case 11:
		cout << "�� ���Դϴ�." << endl;
		break;
	}
}
