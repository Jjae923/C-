#include <iostream>
#include "string"
using namespace std;

class banquet {
public:
	banquet() {
		cout << "��ȸ ���� ���� ����" << endl;
	}
	void set_people(int inwon) {
		perpeople = inwon;
	}
	virtual long calcdeco_cost() {
		return perpeople * deco_basic;
	}
	virtual void calctot_cost() {
		long tot = calcdeco_cost() + (perpeople*perpeople_cost);
		cout << "�� �ݾ� : " << tot << endl;
	}
	virtual ~banquet() {
		cout << "�Ҹ��ڸ� �����մϴ�." << endl;
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
		cout << "��ũ�� ���̳� ����" << endl;
	}

	long calcdeco_cost() {
		long drinkpay = perpeople * (perpeople_drinkcost + deco_basic);
		cout << "��ũ�� ���̺� ���ڷ��̼Ǻ�(�����������)" << drink_pay << endl;
		return drink_pay;
	}

private:
	const int perpeople_drinkcost = 7500;
};

class birthday :public banquet {
	enum class cake { ��� = 15, �����̾� = 18, ���̾Ƹ�� = 21 };
public:
	birthday() {
		cout << "������Ƽ ����" << endl;
	}
	void calc_cakesize(string const &str) {
		if (str == "���")cakekind = cake::���;
		else if (str == "�����̾�")cakekind = cake::�����̾�;
		else if (str == "���̾Ƹ��")cakekind = cake::���̾Ƹ��;
	}

	long calcdeco_cost() {
		int cake_cost, calcdeco_cost;
		cake_cost = persize_cake * static_cast<int>(cakekind);
		calcdeco_cost = cake_cost + (perpeople * deco_basic);
		cout << "������Ƽ ���̺� ���ڷ��̼Ǻ�(����ũ����)" << calcdeco_cost << endl;
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
	cout << "��ȸ�� ������ ����(���ũ��, �������Ƽ �� ����) : ";
	cin >> gubun;
	cout << "�����ο��� �Է��ϼ��� : ";
	cin >> person;
	if (gubun == 1) {
		banquet *myworkshop = new workshop;
		myworkshop->set_people(person);
		myworkshop->calcdeco_cost();
		delete myworkshop;
	}
	else if (gubun == 2) {
		birthday mybirthday;
		cout << "�ɟ��� ����� ����(���/�����̾�/���̾Ƹ��)" << endl;
		cin >> kind;
		mybirthday.set_people(person);
		mybirthday.calc_cakesize(kind);
		mybirthday.calctot_cost();
	}
}
