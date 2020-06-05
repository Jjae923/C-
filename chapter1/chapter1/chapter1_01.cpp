// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> // C++ 기본 입출력
#include <stdio.h> // C 기본 입출력

//void main()
//{
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n", M);
//	printf("%c\n", N);
//}

void main()
{
	//char H, S;
	//H = 65;
	//S = 97;
	//printf("%c\n", H);
	//printf("%c\n", S);
	//H = 'z';
	//S = 'Z';
	//printf("%c\n", H);
	//printf("%c\n", S);


	//float S, W;
	//S = 32.4;
	//W = 213746565.5;	
	//printf("%f\n%f\n", S, W);


	//float circum, area;
	//const float PI = 3.141592; // const : 변동없는 상수값 지정 시 사용 / 변수방 주소를 고정시켜놓기 때문에 변동X / 변수의 반댓말 = 상수
	//float radius = 25;
	//area = PI * radius * radius;
	//circum = 2 * PI * radius;
	//printf("Area of circle is %f\n", area);
	//printf("Circum of circle is %f\n", circum);


	//int i, j;
	//float k;
	//char ch;
	//i = 100;
	//j = 200;
	//k = 12.345;
	//ch = 'A';
	//printf("%d,%d\n", i, i + j);
	//printf("%f\n", k);
	//printf("%c,%d\n", ch, ch);


	//char k, b, s;
	//k = 'k';
	//b = 66;
	//s = 's';
	//printf("%c, %c, %c\n%d, %d, %d", k, b, s, k, b, s);


	//const float PI = 3.141592;
	//printf("%15f\n", PI);
	//printf("%-15f\n", PI);
	//printf("%15.3f\n", PI);


	//char ch = 'A';
	//printf("character = %c, ASCII = %d\n", ch, ch);

	//printf("%12d\n", 123456789);
	//printf("%-3d%-3d%-3d\n", 12, 34, 56);
	//printf("%3d%3d\n", 12, 34);
	//printf("%03d%3d\n", 3, 160);
	//printf("%05d0\n", 316);
	//printf("%-4s%4s\n", "the", "end");
	//printf("the  " "end \n");
	

	//int java, c, tot;
	//printf("JAVA : ");
	//scanf_s("%d", &java); // scanf_s : 표준 입력 / & : 메모리에 접근
	//printf("C : ");
	//scanf_s("%d", &c);
	//tot = java + c;
	//printf("총점은 %d 입니다\n", tot);
	

	//int width, height;
	//char name[20];
	//printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	//scanf_s("%d %d", &width, &height);
	//printf("사각형 넓이 = %d\n", width*height);
	//printf("이름을 입력하세요 : ");
	//scanf_s("%s", name, sizeof(name)); //scanf_s에서 배열 입력 받으려면 변수명 뒤에 그 배열의 size를 지정해줘야한다고 합니다~
	//printf("%s", name);
	

	/* scanf_s */
	// double -> lf / float -> f / int -> d / 문자열 -> s */

	float mit, no, dol;
	double area;
	printf("밑변을 입력하시오 : ");
	scanf_s("%lf", &mit);               // ★ 실수형 입력받을 때는 lf로 받기
	printf("높이를 입력하시오 : ");
	scanf_s("%lf", &no);
	area = ( mit * no ) / 2;
	printf("삼각형 넓이 = %0.2f", area);


	printf("이름을 입력하세요 : ");
	char irum[10];
	scanf_s("%s\n", irum, sizeof(irum)); // sizeof : 메모리의 사이즈만큼 받겠다 / & 대신 sizeof / %s -> char배열 여러개가 올거라서 string으로 받음
	printf("성명 : %s\n", irum);

}



