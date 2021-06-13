/*������ �3(A)
�������� ���������, ������� ��������� �� ������������ ���������� ����� �
����������, ������ �� ����� � �������������� �������.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
void checkPoint(float x, float y, float l, const float r1, const float r2);
void writeFile(float x, float y, float l, const float r1, const float r2);
int main() {
	setlocale(LC_ALL, "Russian");
	
	const float r1 = 1; 
	const float r2 = 2;
	float x, y;
	cout << "������� ���������� �����" << endl;
	cin >> x >> y;
	float l = sqrt(x * x + y * y);
	
	checkPoint(x, y, l, r1, r2);
	writeFile(x, y, l, r1, r2);
		
	getchar();
	getchar();
	return 0;
}
void checkPoint(float x, float y,float l, const float r1, const float r2) {
	if ((l > r1) && (l < r2) && (y > 0)) {
		cout << "����� ������ � �������������� �������";
		
	}
	else {
		cout << "����� �� ������ � �������������� �������";
		
	}
}
void writeFile(float x, float y, float l, const float r1, const float r2) {
	ofstream f("Results.txt");
	if ((l > r1) && (l < r2) && (y > 0)) {
		f << "����� " << x << ";" << y << " ������ � �������������� �������" << endl;
	}
	else {
		f << "����� " << x << ";" << y << " �������� � �������������� �������" << endl;
	}
	f.close();
}