#include <iostream>
#include <cstring>
#include "string"
using namespace std;

enum class gender { male = 22, female = 21 };
class health_scan {
public:
	void set_info(string irum, int a, string str, double h, double w);
	gender convert_val(string s) const;
	double avg_weight();
	double bmi_process();

private:
	string name;
	gender g;
	int nai;
	double height, weight;

};

void health_scan::set_info(string irum, int a, string str, double h, double w) 
{
	name = irum;
	nai = a;
	height = h;
	weight = w;
	g = convert_val(str);
}

gender health_scan::convert_val(string s) const
{
	if (s == "남")
		return gender::male;
	else if (s == "여")
		return gender::female;
}

// 적정 몸무게
double health_scan::avg_weight() 
{
	double avg = (height / 100)*(height / 100)*static_cast<int>(g);
	return avg;
}

// 비만 지수 = (몸무게/적정몸무게)*100
double health_scan::bmi_process() 
{
	double avg_w = avg_weight();
	double bmi_value = ( weight / avg_w ) * 100;
	cout.precision(1);
	cout << name << "님의 적정한 체중은" << fixed << avg_w << "kg입니다." << endl;
	return bmi_value;
}

void bmi_result(double bmi);

int main()
{
	string irum, gubun;
	int nai;
	double myh, myw, bmi;
	health_scan healthcare;
	cout << "회원님의 이름, 나이, 성별(남,여 선택), 키, 몸무게 입력" << endl;
	cin >> irum >> nai >> gubun >> myh >> myw;
	healthcare.set_info(irum, nai, gubun, myh, myw);
	bmi = healthcare.bmi_process();
	bmi_result(bmi);
}

void bmi_result(double bmi)
{
	string mag;
	if (bmi >= 90 && bmi <= 110)
		msg = "녹색 구간으로 적정 체중 유지";
	else if (bmi >110 && bmi <= 120)
		msg = "황색 구간으로 과체중, 관리 필요";
	else if (bmi > 120)
		msg = "적색 구간으로 비만!! 식생활 개선 프로그램 참가 대상";
	cout.precision(1);
	cout << name << "님의 적정한 체중은" << fixed << bmi << "%" << endl;
	cout << "평가 결과 = " << msg << endl;
}