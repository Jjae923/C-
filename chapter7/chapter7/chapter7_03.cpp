#include <iostream>
using namespace std;

class books {
public:
	void print_info() {
		cout << "기본도서 정보" << endl;
	}
};
class cartoon_book :public books {
public:
	void sale_info(int a) {
		price = a;
		cout << "할인가 : " << price * 0.8 << endl;
	}

private:
	int price;
};
class st_book :public cartoon_book {
public:
	void notice_info() {
		cout << "스터디셀러 한정판매" << endl;
	}
};

int main() {
	//books basic_book;
	//cartoon_book mybook;
	//basic_book = mybook; // 대입 가능
	////mybook = basic_book; // 자식클래스에서 부모클래스를 받을 수 없음
	//basic_book.print_info();

	books *basic_book = new books;
	cartoon_book *b2 = new cartoon_book;
	st_book *b3 = new st_book;
	// st_book *b4 = new cartoon_book; // 부모는 자식을 참조할 수 없음

	basic_book->print_info();
	b2->print_info();
	b3->sale_info(12000);
}
