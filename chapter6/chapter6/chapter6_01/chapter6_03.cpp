#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Ŭ���� ����
class car_info {
	// ��� ���� ����
public:
	char car_name[30];
	char car_num[12];
	int distance;
public:
	void st_msg()
	{
		if (distance >= 80000)
			cout << car_num << " ��(��) Ÿ�ֺ̹�Ʈ ��ü ����Դϴ�.\n";
		else
			cout << car_num << " ��(��) Ÿ�ֺ̹�Ʈ ��ü ����� �ƴմϴ�.\n";
	}
	// 1~69 : �¿��� / 70~79 : ������ / 80~97 : ȭ���� / 98~99 : Ư����
	void car_reg()
	{
		if(atol(car_num)>=1 && atol(car_num)<=16)
			cout << "���� ��� ���� �Դϴ�." << endl;
		else if(atol(car_num) >= 34 && atol(car_num) <= 49)
			cout << "��� ��� ���� �Դϴ�.\n" << endl;
	}
};

int main() {
	car_info car1;
	car_info car2;;
	/*strcpy_s(car1.car_name, "�ҳ�Ÿ");
	strcpy_s(car1.car_num, "35��6897");*/
	string str;
	cout << "���� ��ȣ�� �Է��ϼ��� : ";
	cin >> str;
	strcpy_s(car1.car_num, str.substr(0, 2).c_str()); // str.substr(���°����, �) / c_str() ���ڷ� ��ȯ
	
	/*car1.distance = 83000;*/
	cout << "����Ÿ��� �Է��ϼ��� : ";
	cin >> car1.distance;
	strcpy_s(car2.car_num, str.c_str());
	car1.car_reg(); 
	car2.st_msg();
}



