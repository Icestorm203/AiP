/*������ �3(A)
�������� ���������, ������� ��������� �� ������������ ���������� ����� �
����������, ������ �� ����� � �������������� �������.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	
	const float r1 = 1; 
	const float r2 = 2;
	
	float x, y;
	cout << "������� ���������� �����" << endl;
	cin >> x >> y;
	float l = sqrt(x * x + y * y);
	
	if ((l > r1) && (l < r2) && (y>0)) {
		cout << "����� ������ � �������������� �������";
		f << "����� " << x << ";" << y << " ������ � �������������� �������" << endl;
	}	
	else { 
		cout << "����� �� ������ � �������������� �������";
		f << "����� " << x << ";" << y << " �������� � �������������� �������" << endl;
	}
		
	getchar();
	getchar();
	return 0;
}