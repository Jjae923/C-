#include <iostream>
#include <math.h>
using namespace std;

class basic_salary {
public:
	long set_money(int pertime, int perday) {
		worktime = pertime;
		pay = perday;
		return worktime * pay;
	}
private:
	int worktime;
	int pay;
};

class holiday_salary : public basic_salary {
public:
	void set_work(int a) {
		gubun = a;
	}

	long set_money(int pertime, int perday) {
		if (gubun == 1)
			return basic_salary::set_money(pertime, perday);
		else if (gubun == 2)
			return basic_salary::set_money(pertime, perday*1.1);
	}

private:
	int gubun;
};

int main() {

	holiday_salary holiday;
	int workday, wtime, wpay;

	cout << "근무형태(1.평일 2.휴일 중 선택)";
	cin >> workday;
	cout << "근무시간과 시간당 급료를 입력하세요" << endl;
	cin >> wtime >> wpay;
	cout << "하루 총 일당 = " << holiday.set_money(wtime, wpay);

}