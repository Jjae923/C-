#include <iostream>
#include <math.h>
using namespace std;

class circle_basic {
public: // (��� ������)
	// �⺻ ������
	circle_basic() {
		cout << "���� �⺻���� ����" << endl;
	}
	// �޼ҵ� (���� ���� ���ϴ�)
	void circle_width(int a) {
		r = a; // ������ �ٸ��� ������ �������� �����ϴ� this ���� �ʿ�X
		cout << "���� ���̴� : " << pow(r, 2)*pie<< endl;

	}

protected:
	int r;
	double pie = 3.141592;
};

class circle_outside:public circle_basic // circle_basic ���
{// ������ �ѳ��� : ������ x ������ x 3.141592 x 4
public:
	circle_outside() {
		cout << "circle_outside ������" << endl;
	}
	void outside_weith(int a) {
		cout << "������ �ѳ��� : " << 4 * pie*pow(r, 2) << endl;
	}
	

};

int main() 
{
	circle_outside mycircle;
	int a;
	cout << "���� ������ �Է� : ";
	cin >> a;
	mycircle.circle_width(a);
	mycircle.outside_weith(a);

}