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
		cout << "¿ø¼þÀÌ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 1:
		cout << "´ß ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 2:
		cout << "°³ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 3:
		cout << "µÅÁö ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 4:
		cout << "Áã ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 5:
		cout << "¼Ò ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 6:
		cout << "È£¶ûÀÌ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 7:
		cout << "Åä³¢ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 8:
		cout << "¿ë ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 9:
		cout << "¹ì ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 10:
		cout << "¸» ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 11:
		cout << "¾ç ¶ìÀÔ´Ï´Ù." << endl;
		break;
	}
	return any;
}

inline void calc_age(int year)
{
	time_t now; // ÇöÀç½Ã°£ ¶óÀÌºê·¯¸®
	struct tm mytime;
	now = time(NULL); // ÇöÀç½Ã°£ ÃÊ´ÜÀ§·Î ¹Ù²Ù±â À§ÇÑ ÀÛ¾÷
	localtime_s(&mytime, &now);
	// now¿¡ ´ã°£ ÇöÀç½Ã°£À» ³â, ¿ù, ÃÊ·Î º¯È¯ÇÏ¿© mytime¿¡ ÀúÀå

	cout << "´ç½ÅÀÇ ³ªÀÌ´Â : " << mytime.tm_year + 1900 - year + 1 << endl;
}

inline void calc_day(int any) {
	switch (any)
	{
	case 0:
		cout << "¿ø¼þÀÌ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 1:
		cout << "´ß ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 2:
		cout << "°³ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 3:
		cout << "µÅÁö ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 4:
		cout << "Áã ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 5:
		cout << "¼Ò ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 6:
		cout << "È£¶ûÀÌ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 7:
		cout << "Åä³¢ ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 8:
		cout << "¿ë ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 9:
		cout << "¹ì ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 10:
		cout << "¸» ¶ìÀÔ´Ï´Ù." << endl;
		break;
	case 11:
		cout << "¾ç ¶ìÀÔ´Ï´Ù." << endl;
		break;
	}
}
