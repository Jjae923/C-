#pragma once

#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

class weight
{
private:
	char customer_irum[20];
	int customer_height;
	int customer_weight;
	double customer_opt;
	int gender;

public:
	void calc_stweight(int h, int w);
	void calc_info(char *irum, int a);
	void print();
	//inline void age(); // 인라인 함수도 여기에 선언해야 함

};