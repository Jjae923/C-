#include <iostream>
#include "string"
using namespace std;

class banquet {
public:
	banquet() {
		cout << "연회 전문 예약 셋팅" << endl;
	}
	void set_people(int inwon) {
		perpeople = inwon;
	}
	virtual long calcdeco_cost() {
		return perpeople * deco_basic;
	}
	virtual void calctot_cost() {
		long tot = calcdeco_cost() + (perpeople*perpeople_cost);
		cout << "총 금액 : " << tot << endl;
	}
	virtual ~banquet() {
		cout << "소멸자를 실행합니다." << endl;
	}

protected:
	int perpeople;
	const int perpeople_cost = 50000;
	const int deco_basic = 3000;
	const int drink_pay = 7500;
};

class workshop :public banquet {
public:
	workshop() {
		cout << "워크샵 세미나 셋팅" << endl;
	}

	long calcdeco_cost() {
		long drinkpay = perpeople * (perpeople_drinkcost + deco_basic);
		cout << "워크샵 테이블 데코레이션비(음료셋팅포함)" << drink_pay << endl;
		return drink_pay;
	}

private:
	const int perpeople_drinkcost = 7500;
};

class birthday :public banquet {
	enum class cake { 루비 = 15, 사파이어 = 18, 다이아몬드 = 21 };
public:
	birthday() {
		cout << "생일파티 셋팅" << endl;
	}
	void calc_cakesize(string const &str) {
		if (str == "루비")cakekind = cake::루비;
		else if (str == "사파이어")cakekind = cake::사파이어;
		else if (str == "다이아몬드")cakekind = cake::다이아몬드;
	}

	long calcdeco_cost() {
		int cake_cost, calcdeco_cost;
		cake_cost = persize_cake * static_cast<int>(cakekind);
		calcdeco_cost = cake_cost + (perpeople * deco_basic);
		cout << "생일파티 테이블 데코레이션비(케이크포함)" << calcdeco_cost << endl;
		return calcdeco_cost;
	}

protected:
	const int persize_cake = 2000;
	cake cakekind;
};

int main()
{
	int gubun, person;
	string kind;
	cout << "연회의 종류를 선택(①워크샵, ②생일파티 중 선택) : ";
	cin >> gubun;
	cout << "모임인원을 입력하세요 : ";
	cin >> person;
	if (gubun == 1) {
		banquet *myworkshop = new workshop;
		myworkshop->set_people(person);
		myworkshop->calcdeco_cost();
		delete myworkshop;
	}
	else if (gubun == 2) {
		birthday mybirthday;
		cout << "케잌의 사이즈를 선택(루비/사파이어/다이아몬드)" << endl;
		cin >> kind;
		mybirthday.set_people(person);
		mybirthday.calc_cakesize(kind);
		mybirthday.calctot_cost();
	}
}
