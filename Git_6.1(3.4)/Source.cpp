/*������ �3(A)
�������� ���������, ������� ��������� �� ������������ ���������� ����� �
����������, ������ �� ����� � �������������� �������.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
struct Fig {
	int x, y;
};
void checkPoint(float fy, float l, const float r1, const float r2);
void writeFile(float fx, float y, float l, const float r1, const float r2);
int main() {
	setlocale(LC_ALL, "Russian");

	const float r1 = 1;
	const float r2 = 2;
	Fig figure;
	cout << "������� ���������� �����" << endl;
	cin >> figure.x >> figure.y;
	float l = sqrt(figure.x * figure.x + figure.y * figure.y);

	checkPoint(figure.y, l, r1, r2);
	writeFile(figure.x, figure.y, l, r1, r2);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float fy, float l, const float r1, const float r2) {
	if ((l > r1) && (l < r2) && (fy > 0)) {
		cout << "����� ������ � �������������� �������";

	}
	else {
		cout << "����� �� ������ � �������������� �������";

	}
}
void writeFile(float fx, float fy, float l, const float r1, const float r2) {
	ofstream f("Results.txt");
	if ((l > r1) && (l < r2) && (fy > 0)) {
		f << "����� " << fx << ";" << fy << " ������ � �������������� �������" << endl;
	}
	else {
		f << "����� " << fx << ";" << fy << " �������� � �������������� �������" << endl;
	}
	f.close();
}