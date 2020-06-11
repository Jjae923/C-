#include <iostream>
using namespace std;

class Cmydata
{
public:
	Cmydata()
	{
		cout << "Cmydata()" << endl;
	}
	Cmydata(int nparam)
	{
		cout << "Cmydata(int)" << endl;
	}
	Cmydata(double dparam)
	{
		cout << "Cmydata(double)" << endl;
	}
};

class CmydataEx :public Cmydata  // Cmydata 상속
{
public:
	CmydataEx()
	{
		cout << "CmydataEx()" << endl;
	}
	CmydataEx(int nparam)
	{
		cout << "CmydataEx(int)" << endl;
	}
	CmydataEx(double dparam)
	{
		cout << "CmydataEx(double)" << endl;
	}
};

int main()
{
	CmydataEx a;
	cout << "*********" << endl;
	CmydataEx b(5);
	cout << "*********" << endl;
	CmydataEx c(3.3);
	cout << "*********" << endl;
	return 0;
}
