c

class people {
public:
	people() { cout << "�Ϲ� ���� ����" << endl; }
	// �Ϲ��Լ�
	//void set_info() { cout << "���� ���� ���" << endl; }
	// �����Լ�
	//virtual void set_info() = 0;
	// �����Լ�
	virtual void set_info() { cout << "���� ���� ���" << endl; }
};

class child :public people {
public:
	child() {
		cout << "��� ���� ����" << endl;
	}
	
	void set_info() {
		cout << "14�� �̸� ��� ���� ���" << endl;
	}
};

int main() {
	// �ڽ�Ŭ������ ��ü
	//child mychild;
	//mychild.set_info();

	// �θ�Ŭ������ ��ü
	//people mypeople;
	//mypeople.set_info();

	// ������ ��ü Ȱ��
	//people *mychild = new child;
	//mychild->set_info();

	people *mychid;
	child c;
	mychid = &c;
	mychid->set_info();
}
