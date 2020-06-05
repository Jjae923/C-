#include <iostream>
#include <string>
using namespace std;

struct student
// 구조체 멤버변수 지정
{
private:
	char classnumber[20];
	char name[20];
	int grade;
	double avg;
	void stu_avg(int a, int b);

};

void student::stu_avg(int a, int b) // student 구조체 소속 / 구조체의 메소드
{
	int c = (a + b) / 2;
	cout << "평균 : " << c << endl;
}

int main() {
		student st1 = { "7반", "홍길동", 95 };
		student st2 = { "3반", "장길산", 83 };

		cout << "st1의 정보 : class - " << st1.classnumber << "/ name : " << st1.name << "grade : " << st1.grade << endl;
		cout << "st2의 정보 : class - " << st2.classnumber << "/ name : " << st2.name << "grade : " << st2.grade << endl;
		//cout << "평   균 : " << (st1.grade + st2.grade) / 2;
		st1.stu_avg(st1.grade, st2.grade);
		cout << endl;

}
