#pragma once

#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

class weight
{
private:
	char customer_irum[20]; // 이름
	int customer_height; // 신장
	int customer_weight; // 몸무게
	double customer_opt; // 적정체중에서 현재 체중을 비교하기 위해
	int gender;

public:
	void calc_stweight(int h, int w);
	void calc_info(char *irum, int a);
	void print();
	//inline void age(); // 인라인 함수도 여기에 선언해야 함
	weight();  // 오버로딩을 통해 생성자에 활용 가능
	weight(const char *irum, int gen); // 배열에는 포인터로 줘야함
};
