/*������ �4(I)
������� �� ����� ��� ����������� ����� �� � �� � � ����� �. ��������, ����
m=10, n=35, h=5, �� ����� ������ ���� �����: 10 15 20 25 30 35. �������� m, n,
h ����������� ������������� (����������� � ���������� ��� �� �����).*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int m, n, h, i;
	cin >> m >> n >> h;
	for (i = m; i < n+1; i+=h) {
		cout << m << " ";
		f << m << " ";
		m += h;
		
	}
	f.close();
	getchar();
	getchar();
	return 0;
}