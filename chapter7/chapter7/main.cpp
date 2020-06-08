#include "weightmanage.h"

int main()
{
	//weight wa; // 클래스화 객체
	//char irum[20];
	//int b;
	//cout << "고객의 성명과 성별을 입력하세요(1또는 3 :남자, 2또는 4 ; 여자)\n " << endl;
	//cin >> irum >> b;
	//wa.calc_info(irum, b);
	//int h, w;
	//cout << "신장과 체중을 입력하세요 : ";
	//cin >> h >> w;
	//wa.calc_info.calc_stweight(h, w); // 객체 wa에서 함수 호출
	//wa.print();

	//weight man;
	//int h, w;
	//cout << "남성분의 신장과 체중을 입력하세요 : \n";
	//cin >> h >> w;
	//man.calc_stweight(h, w);
	//man.print();
	//cout << "------------------------------------\n";

	//weight woman("Guest", 2);
	//int H, W;
	//cout << "여성분의 신장과 체중을 입력하세요 : \n";
	//cin >> H >> W;
	//man.calc_stweight(H, W);
	//man.print();
	//cout << "------------------------------------\n";

	weight *wman;
	wman = new weight;
	int h, w;
	cout << "신장과 체중을 입력하세요 : \n";
	cin >> h >> w;
	wman->calc_stweight(h, w);
	wman->print();
	delete 

}