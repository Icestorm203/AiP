/*������ �2(i)
 ������������ ������ ��������� ������. ����� �������� � ������� �����:���������� ��������������
*/


#include "iostream";
#include "cmath";

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, p;
	float s, b;
	cout << "������� ������ ������� ����������� ���������������" << endl;
	cin >> a;
	p = a * 8;
	b = sqrt(a);
	s = 2 * a * a*(1 + b);
	cout <<"�������� �����="<< p << endl;
	cout <<"������� �����=" << s << endl;
	getchar();
	getchar();
	return 0;
}