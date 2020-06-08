#include <iostream>
#include <cstring>
using namespace std;

class Product {
public:
	Product(int pin_num) : p_id(pin_num) {	}
	void print_info() {
		// p_id = 1000;
		cout << "제품고유번호 : " << p_id << endl;
	}
private:
	const int p_id;
};

int main()
{
	Product p1(3127);
	p1.print_info();
}
