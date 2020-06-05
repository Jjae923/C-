#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// 클래스 선언
class car_info {
	// 멤버 변수 선언
public:
	char car_name[30];
	char car_num[12];
	int distance;
public:
	void st_msg()
	{
		if (distance >= 80000)
			cout << car_num << " 는(은) 타이밍벨트 교체 대상입니다.\n";
		else
			cout << car_num << " 는(은) 타이밍벨트 교체 대상이 아닙니다.\n";
	}
	// 1~69 : 승용차 / 70~79 : 승합차 / 80~97 : 화물차 / 98~99 : 특수차
	void car_reg()
	{
		if(atol(car_num)>=1 && atol(car_num)<=16)
			cout << "서울 등록 차량 입니다." << endl;
		else if(atol(car_num) >= 34 && atol(car_num) <= 49)
			cout << "경기 등록 차량 입니다.\n" << endl;
	}
};

int main() {
	car_info car1;
	car_info car2;;
	/*strcpy_s(car1.car_name, "소나타");
	strcpy_s(car1.car_num, "35너6897");*/
	string str;
	cout << "차량 번호를 입력하세요 : ";
	cin >> str;
	strcpy_s(car1.car_num, str.substr(0, 2).c_str()); // str.substr(몇번째부터, 몇개) / c_str() 문자로 변환
	
	/*car1.distance = 83000;*/
	cout << "주행거리를 입력하세요 : ";
	cin >> car1.distance;
	strcpy_s(car2.car_num, str.c_str());
	car1.car_reg(); 
	car2.st_msg();
}



