#include <iostream>
using namespace std;

class books {
public:
	void print_info() {
		cout << "�⺻���� ����" << endl;
	}
};
class cartoon_book :public books {
public:
	void sale_info(int a) {
		price = a;
		cout << "���ΰ� : " << price * 0.8 << endl;
	}

private:
	int price;
};
class st_book :public cartoon_book {
public:
	void notice_info() {
		cout << "���͵𼿷� �����Ǹ�" << endl;
	}
};

int main() {
	//books basic_book;
	//cartoon_book mybook;
	//basic_book = mybook; // ���� ����
	////mybook = basic_book; // �ڽ�Ŭ�������� �θ�Ŭ������ ���� �� ����
	//basic_book.print_info();

	books *basic_book = new books;
	cartoon_book *b2 = new cartoon_book;
	st_book *b3 = new st_book;
	// st_book *b4 = new cartoon_book; // �θ�� �ڽ��� ������ �� ����

	basic_book->print_info();
	b2->print_info();
	b3->sale_info(12000);
}
