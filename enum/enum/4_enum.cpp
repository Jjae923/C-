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
		cout << "����� : " << subject << endl;
		cout << "���� : " << score << endl;
	}
	test change(string s) {
		if (!s.compare("java") || !s.compare("JAVA")) // compare : Ʋ�� �� 1�� ��ȯ, ������ 0�� ��ȯ�ϱ� ������ ������������ �������� ����
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
		cout << i + 1 << "��° �л��� ����(JAVA,C,Python)/������ �Է��ϼ��� : ";
		cin >> s >> score;
		t = middle[i].change(s);
		middle[i].setinfo(t, score);
	}
	for (int i = 0; i < 3; i++)
	{
		middle[i].get_info();
	}
}