#include "iostream";
#include "cmath";

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b , c;
	float s, p;
	cout << "������� ��� �����" << endl;
	cin >> a >> b >> c;
	p = (a + b + c) / 3;
	s = 2 * (a + c) - 3 * b;
	cout << "������� �������������� ����� �����=" << p << endl;
	cout << "�������� ��������� ����� ������� � �������� ����� � ���������� ������� ����� �����=" << s << endl;
	getchar();
	getchar();
	return 0;
}