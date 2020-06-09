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
	if (s == "��")
		return gender::male;
	else if (s == "��")
		return gender::female;
}

// ���� ������
double health_scan::avg_weight() 
{
	double avg = (height / 100)*(height / 100)*static_cast<int>(g);
	return avg;
}

// �� ���� = (������/����������)*100
double health_scan::bmi_process() 
{
	double avg_w = avg_weight();
	double bmi_value = ( weight / avg_w ) * 100;
	cout.precision(1);
	cout << name << "���� ������ ü����" << fixed << avg_w << "kg�Դϴ�." << endl;
	return bmi_value;
}

void bmi_result(double bmi);

int main()
{
	string irum, gubun;
	int nai;
	double myh, myw, bmi;
	health_scan healthcare;
	cout << "ȸ������ �̸�, ����, ����(��,�� ����), Ű, ������ �Է�" << endl;
	cin >> irum >> nai >> gubun >> myh >> myw;
	healthcare.set_info(irum, nai, gubun, myh, myw);
	bmi = healthcare.bmi_process();
	bmi_result(bmi);
}

void bmi_result(double bmi)
{
	string mag;
	if (bmi >= 90 && bmi <= 110)
		msg = "��� �������� ���� ü�� ����";
	else if (bmi >110 && bmi <= 120)
		msg = "Ȳ�� �������� ��ü��, ���� �ʿ�";
	else if (bmi > 120)
		msg = "���� �������� ��!! �Ļ�Ȱ ���� ���α׷� ���� ���";
	cout.precision(1);
	cout << name << "���� ������ ü����" << fixed << bmi << "%" << endl;
	cout << "�� ��� = " << msg << endl;
}