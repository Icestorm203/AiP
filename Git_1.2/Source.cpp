/*������ �2(i)
 ������������ ������ ��������� ������. ����� �������� � ������� �����:���������� ��������������
*/


#include "iostream";
#include "cmath";
#include "fstream";
using namespace std;
float countArea(float a, float &b, float &p, float &s);
void writeFile(float &p, float &s);
int main() {
	setlocale(LC_ALL, "Russian");
	float a,b,p,s;
	cout << "������� ������ ������� ����������� ���������������" << endl;
	cin >> a;
	countArea(a,b,p,s);
	cout << "�������� �����=" << p << endl;
	cout << "������� �����=" << s << endl;
	writeFile(p, s);
	getchar();
	getchar();
	return 0;
}

float countArea(float a, float &b, float &p, float &s) {
	p = a * 8;
	b = sqrt(a);
	s = 2 * a * a * (1 + b);
	return 0;
}
void writeFile(float &p, float &s) {
	ofstream f("Results.txt");
	f << "�������� �����=" << p << endl;
	f << "������� �����=" << s << endl;
	f.close();
}