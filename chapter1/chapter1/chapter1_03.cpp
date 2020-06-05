#include <stdio.h> /* C 표준입출력 */ // 헤더는 순서가 있음 stdio는 맨 위에 해주는게 좋음
#include <iostream> /* C++ 표준입출력 */
#include <string> // 문자열 // #include <string.h>와 차이는 c or c++인데 string은 string.h를 포함
#include <sstream> // 클래스형 객체를 만듬
#include <iomanip>
#include <conio.h> // _getch() 메소드를 위해 필요


using namespace std; // #include <iostream> 에 std(스탠다드?스코프연산자?) 탑재

//void main()
//{
//	/* using namespace std; 미사용 시 접두어(std::) 첨부
//	std::cout << "Hello c++" << std::endl; // endl = \n */
//	
//	/* using namespace std; 사용 시
//	cout << "Hello c++" << endl; */
//
//
//	char name[] = "jeong jae hee";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	//c 출력
//	printf("***************c언어 출력 함수***************\n");
//	printf("     name      kor eng mat tot   avg\n");
//	printf("%11s%4d%4d%4d%5d%7.1f\n",name,kor,eng,mat,tot,avg);
//
//	//c++ 출력
//	cout << endl << "***************c++언어 출력 객체***************" << endl;
//	cout << "     name      kor eng mat tot   avg" << endl;
//	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat 
//		<< setw(5) << tot << setw(7) << setprecision(3) << avg << endl; // setprecision : 소수점
//}


//void main()
//{
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number; // 입력받는 값(cin)을 number에 담아줘
//	cout << "출력 : " << number << endl;
//
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 0을 누르세요!";
//	_getch(); // _getch() 메소드 사용하려면 #include <conio.h> 헤더파일 필요 / _getch() : 입력받는 문자 화면에 입력되지 않도록 하는 메소드
//	cout << endl;
//}


//int main() {
//	
//int n;
//stringstream ss; // #include <sstream>이 끌고 들어오는 stringstream 클래스 안에 많은 메소드가 있음, 사용하려면 객체가 필요
//ss.str("12 345 6789 0 -12"); // c에서는 공백이 메모리를 차지해서 에러가 날 수 있으나 str함수는 공백을 알아서 걸러줌☆
//
//for (int i = 0; i < 5; i++) {
//	ss >> n; // ss는 string, n은 int임에도 형변환없이 받을 수 있음
//	cout << n << endl;
//}
//return 0;
//}


//void main()
//{
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << setiosflags(ios::left); // 왼쪽 정렬
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6); // setprecision : 소수점 / 소수점 포함 갯수
//	cout << setw(10) << setiosflags(ios::showpoint) // 소수점 자릿수까지 공백 0으로 채워줌
//		<< 3.14 << endl;
//	cout << resetiosflags(ios::left); // 왼쪽 정렬 해제
//	cout << setw(10) << "World" << "|" << endl;
//	// 왼쪽 정렬
//	cout << setiosflags(ios::left) << setw(10)
//		<< "World" << "|" << endl;
//}


//void main()
//{
//	char Name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	cin.get(Name, 15); // name을 메모리 15까지 받아줘 // cin.get() 공백 인지 / 대신 enter를 인식X 
//	cin.ignore(); // 주석 처리 시 오류남 (enter를 무시하여 연속 입력이 가능하도록 해주는 아이)
//	cout << "address : ";
//	cin.get(address, 20); 
//	cout << "\nName; : " << Name << endl;
//	cout << "address : " << address << endl;
//}


















//void main()
//{
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	s = ++h + ++h;
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}


void main()
{
	//int h, s;
	//h = 3;
	//s = h > 2;
	//cout << s << endl;
	//s = h < 2;
	//cout << s << endl;
	//s = 2 == 3;
	//cout << s << endl;

	//int h, s;
	//h = 2 != 4 && 5 > 3;
	//s = !1 || !0;
	//cout << h << endl;
	//cout << s << endl;

	//int a, b, c;
	//printf("두 값을 입력하세요 : ");
	//scanf_s("%d %d", &a, &b);
	//c = a > b;
	//printf("C 결과 : %d\n", c);
	//printf("a > b 결과 : %d\n", a > b);
	//a++;
	//printf("a와 b가 같다 : %d\n", a == b);
	//printf("a와 b가 같지 않다 : %d\n", a != b);

	int a = 3, b = 2, c;
	c = a == ++b; /* 관계연산자 */
	printf("결과 : %d\n", (a == b) && (--b == c)); /* 논리연산자 */
	printf("결과 : %d\n", (a != b) || (b == c));
	printf("결과 : %d\n", !((a != b) || (b == c)));



}