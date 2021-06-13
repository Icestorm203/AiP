/*������ �4(I)
������� �� ����� ��� ����������� ����� �� m �� n � ����� h. ��������, ����
m=10, n=35, h=5, �� ����� ������ ���� �����: 10 15 20 25 30 35. �������� m, n,
h ����������� ������������� (����������� � ���������� ��� �� �����).*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
void outputNum(int m, int n, int h);
void writeFile(int m, int n, int h);
int main() {
	setlocale(LC_ALL, "Russian");
	
	int m, n, h;
	cout << "������� m, n � h" << endl;
	cin >> m >> n >> h;
	outputNum(m,n,h);
	writeFile(m, n, h);
	getchar();
	getchar();
	return 0;
}
void outputNum(int m, int n, int h) {
	for (int i = m; i < n + 1; i += h) {
		cout << m << " ";
		m += h;

	}
}
void writeFile(int m, int n, int h) {
	ofstream f("Results.txt");
	for (int i = m; i < n + 1; i += h) {
		f << m << " ";
		m += h;

	}
	f.close();
}