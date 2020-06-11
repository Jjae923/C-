#include <iostream>
#include <math.h>
using namespace std;

class circle_basic {
public: // (상속 조건임)
	// 기본 생성자
	circle_basic() {
		cout << "원의 기본정보 설정" << endl;
	}
	// 메소드 (원의 넓이 구하는)
	void circle_width(int a) {
		r = a; // 변수가 다르기 때문에 참조변수 구분하는 this 붙일 필요X
		cout << "원의 넓이는 : " << pow(r, 2)*pie<< endl;

	}

protected:
	int r;
	double pie = 3.141592;
};

class circle_outside:public circle_basic // circle_basic 상속
{// 원구의 겉넓이 : 반지름 x 반지름 x 3.141592 x 4
public:
	circle_outside() {
		cout << "circle_outside 생성자" << endl;
	}
	void outside_weith(int a) {
		cout << "원구의 겉넓이 : " << 4 * pie*pow(r, 2) << endl;
	}
	

};

int main() 
{
	circle_outside mycircle;
	int a;
	cout << "원의 반지름 입력 : ";
	cin >> a;
	mycircle.circle_width(a);
	mycircle.outside_weith(a);

}