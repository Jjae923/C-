c

class people {
public:
	people() { cout << "일반 정보 실행" << endl; }
	// 일반함수
	//void set_info() { cout << "개인 정보 출력" << endl; }
	// 순수함수
	//virtual void set_info() = 0;
	// 가상함수
	virtual void set_info() { cout << "개인 정보 출력" << endl; }
};

class child :public people {
public:
	child() {
		cout << "어린이 정보 실행" << endl;
	}
	
	void set_info() {
		cout << "14세 미만 어린이 정보 출력" << endl;
	}
};

int main() {
	// 자식클래스의 객체
	//child mychild;
	//mychild.set_info();

	// 부모클래스의 객체
	//people mypeople;
	//mypeople.set_info();

	// 포인터 객체 활용
	//people *mychild = new child;
	//mychild->set_info();

	people *mychid;
	child c;
	mychid = &c;
	mychid->set_info();
}
