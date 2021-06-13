/*������ �2(�)
�������� ���������, ������� ��������� �� ������������ ���������� ����� �
����������, ������ �� ����� � �������������� �������. */

#include "iostream"
#include <fstream>

using namespace std;
void checkPoint(float x, float y);
void writeFile(float x, float y);
int main() {
	setlocale(LC_ALL, "Russian");

	float x, y;
	cout << "������� ���������� �����" << endl;
	cin >> x >> y;
	
	checkPoint(x, y);
	writeFile(x, y);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float x, float y) {
	if ((y < x) && (y > ((x * x) - 2)) || (y < -x) && (y > ((x * x) - 2))) {
		cout << "����� ������ � �������������� �������";
	}
	else {
		cout << "����� �� ������ � �������������� �������";
	}
}
void writeFile(float x, float y) {
	ofstream f("Results.txt");
	if ((y < x) && (y > ((x * x) - 2)) || (y < -x) && (y > ((x * x) - 2))) {
		f << "����� " << x << ";" << y << " ������ � �������������� �������" << endl;
	}
	else {
		f << "����� " << x << ";" << y << " �������� � �������������� �������" << endl;
	}
	f.close();
}