#include <iostream>
using namespace std;

class mammaliar {
public:
	mammaliar()
	{
		cout << "포유류 클래스 입니다" << endl;
	}
	void breath()
	{
		cout << "폐로 숨을 쉰다" << endl;
	}
	void walk()
	{
		cout << "다리로 걷는다" << endl;
	}
	void eat(int a)
	{
		teeth = a;
		cout << "이빨갯수 " << teeth << " 개로 음식을 씹는다" << endl;
	}

protected:
	int teeth;
	string haircolor;
};

class pisces {
public:
	pisces() {
		cout << "어류 클래스 입니다" << endl;
	}
	void breath()
	{
		cout << "아가미로 숨을 쉰다" << endl;
	}
	void swim(int s)
	{
		size s;
		cout << "몸길이 " << size << " cm로 헤엄을 친다" << endl;
	}
protected:
	int size;
};

// 고래
class whale :public mammaliar, public pisces
{
public:
	whale() {
		cout << "고래 클래스 입니다" << endl;
	}
};

int main()
{
	whale dolphin;
	dolphin.eat(25);
	dolphin.
}

