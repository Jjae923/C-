#pragma once

#include <iostream>
#include <cstring>
using namespace std;

class sawon
{
private:
	char irum[20];
	int age;
	char part[20];
public:
	sawon();
	~sawon();
	void set_in(char* _irum, int _a, char* _job);
	void get_out();
};
