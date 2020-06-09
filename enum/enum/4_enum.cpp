#include <iostream>
#include <cstring>
#include "string"
using namespace std;

enum test {
	JAVA, C, Python, ERROR };

class info {
public:
	void setinfo(test t, int _score) {
		switch (t) {
		case JAVA:
			subject = "JAVA";
			break;
		case C:
			subject = "C++";
			break;
		case Python:
			subject = "Python";
			break;
		case ERROR:
			subject = "ERROR";
			break;
		}
		score = _score;
	}
	void get_info() {
		cout << "과목명 : " << subject << endl;
		cout << "점수 : " << score << endl;
	}
	test change(string s) {
		if (!s.compare("java") || !s.compare("JAVA")) // compare : 틀릴 때 1을 반환, 같으면 0을 반환하기 때문에 같지않을때를 조건으로 걸음
			return JAVA;
		else if (!s.compare("c") || !s.compare("C"))
			return C;
		else if (!s.compare("python") || !s.compare("Python") || !s.compare("PYTHON"))
			return Python;
		else
			return ERROR;
	}

private:
	string subject;
	int score;
};


int main()
{
	info middle[3];
	
	string s;
	int score;
	test t;
	
	
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 학생의 과목(JAVA,C,Python)/점수를 입력하세요 : ";
		cin >> s >> score;
		t = middle[i].change(s);
		middle[i].setinfo(t, score);
	}
	for (int i = 0; i < 3; i++)
	{
		middle[i].get_info();
	}
}