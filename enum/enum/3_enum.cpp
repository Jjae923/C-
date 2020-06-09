#include <iostream>
#include "string"
using namespace std;

enum test{J=1,C_,P};

class info {
public:
	void setinfo(test t, int jum) {
		switch (t) {
		case J:
			subject = "JAVA";
			break;
		case C:
			subject = "C++";
			break;
		case P:
			subject = "Python";
			break;
		}
		jumsu = jum;
	}
	void get_info() {
		cout << "과목명 : " << subject << endl;
		cout << "점수 : " << jumsu << endl;
	}

private:
	string subject;
	int jumsu;
};


int main()
{
	info middle[3];
	int num;
	test t;
	int j;
	cout << "1.JAVA, 2.C_, 3.Python" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "번째 학생의 과목/점수를 입력하세요 : ";
		cin >> num >> j;
		middle[i].setinfo(static_cast<test>(num), j);
	}
	for (int i = 0; i < 3; i++)
	{
		middle[i].get_info();
	}
}

