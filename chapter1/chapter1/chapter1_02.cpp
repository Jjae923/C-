#include <stdio.h> // C 기본 입출력
#include <stdlib.h> 
#include <string.h>


/* 형변환 */
// * atoi : ascii코드(문자열)를 int(정수형)로 변환
// double atof(const char* str); -> 문자열을 double
// long atol(const char* str); -> 문자열을 long
// * itoa : int(정수형)를 ascii코드(문자열)로 변환


int main() {
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = { 0, };
	printf("a+str = %d\n", a + atoi(str)); // 문자열 -> 정수형 변환
	printf("b+str = %.2f\n", b + atof(str)); // 문자열 -> 실수형 변환
	_itoa_s(a, tmp, 10); // 정수형 -> 문자열 변환
	printf("%s\n", str); return 0;
}

//void main() {
//	int a, b;
//	printf("첫번째 값을 입력하세요 : ");
//	scanf_s("%d", &a);
//	printf("두번째 값을 입력하세요 : ");
//	scanf_s("%d", &b);
//	printf("덧셈결과 = %d\n", a+b );
//	printf("나머지결과 = %d\n", a%b);
//	printf("음수덧셈결과 = %d\n", -a +b);
//	printf("a의 증가값 = %d", a+1);
//}
