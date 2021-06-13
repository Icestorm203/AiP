/*������ �2(�)
�������� ���������, ������� ��������� �� ������������ ���������� ����� �
����������, ������ �� ����� � �������������� �������. */

#include "iostream"
#include <fstream>

using namespace std;
struct Fig {
	int x, y;
};
void checkPoint(float fx, float fy);
void writeFile(float fx, float fy);
int main() {
	setlocale(LC_ALL, "Russian");
	Fig figure;
	cout << "������� ���������� �����" << endl;
	cin >> figure.x >> figure.y;

	checkPoint(figure.x, figure.y);
	writeFile(figure.x, figure.y);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float fx, float fy) {
	if ((fy < fx) && (fy > ((fx * fx) - 2)) || (fy < -fx) && (fy > ((fx * fx) - 2))) {
		cout << "����� ������ � �������������� �������";
	}
	else {
		cout << "����� �� ������ � �������������� �������";
	}
}
void writeFile(float fx, float fy) {
	ofstream f("Results.txt");
	if ((fy < fx) && (fy > ((fx * fx) - 2)) || (fy < -fx) && (fy > ((fx * fx) - 2))) {
		f << "����� " << fx << ";" << fy << " ������ � �������������� �������" << endl;
	}
	else {
		f << "����� " << fx << ";" << fy << " �������� � �������������� �������" << endl;
	}
	f.close();
}