/*������ 2
 �������� ��������� ��� �������� ����������� �����. ��������� ������ ����� 2
��������: ������������ ����� � ������. �������� ��� ����� � �������� ��
�������� �� ������������.
a. �������� �������, ������� ����� ������� ������ ������������ �����.
 */
#include <iostream>
#include <cmath>

using namespace std;

struct complex
{
	float p, q;
};

float findModule(complex a);

int main() {
	setlocale(LC_ALL, "Russian");

	complex a;
	cout << "������� p � q" << endl;
	cin >> a.p;
	cin >> a.q;

	float b = findModule(a);

	cout << b;

	getchar();
	getchar();
	return 0;
}

float findModule(complex a) {
	float z;
	z = sqrt(a.p * a.p + a.q * a.q);
	return(z);
}

