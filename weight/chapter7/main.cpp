#include "weightmanage.h"

int main()
{
	//weight wa; // Ŭ����ȭ ��ü
	//char irum[20];
	//int b;
	//cout << "���� ����� ������ �Է��ϼ���(1�Ǵ� 3 :����, 2�Ǵ� 4 ; ����)\n " << endl;
	//cin >> irum >> b;
	//wa.calc_info(irum, b);
	//int h, w;
	//cout << "����� ü���� �Է��ϼ��� : ";
	//cin >> h >> w;
	//wa.calc_info.calc_stweight(h, w); // ��ü wa���� �Լ� ȣ��
	//wa.print();

	//weight man;
	//int h, w;
	//cout << "�������� ����� ü���� �Է��ϼ��� : \n";
	//cin >> h >> w;
	//man.calc_stweight(h, w);
	//man.print();
	//cout << "------------------------------------\n";

	//weight woman("Guest", 2);
	//int H, W;
	//cout << "�������� ����� ü���� �Է��ϼ��� : \n";
	//cin >> H >> W;
	//man.calc_stweight(H, W);
	//man.print();
	//cout << "------------------------------------\n";

	weight *wman;
	wman = new weight;
	int h, w;
	cout << "����� ü���� �Է��ϼ��� : \n";
	cin >> h >> w;
	wman->calc_stweight(h, w);
	wman->print();
	delete 

}