/*������ �10
�������� ��� ����� �����. ���������� ����� �� ��� ����������.*/


#include "iostream";
#include <fstream>

using namespace std;
void checkValue(int a, int b, int c, int &max);
void writeFile(int &max);
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "������� 3 ����� \n";
	int a, b, c;
	int max = 0;
	cin >> a >> b >> c;
	checkValue(a, b, c, max);
	writeFile(max);

	getchar();
	getchar();
	return 0;
}
void checkValue(int a, int b, int c, int &max) {
	if (a > b && a > c) {
		max = a;
		cout << "���������� ����� - "
			<< a << endl;
	}
	else {
		if (b > a && b > c) {
			max = b;
			cout << "���������� ����� - "
				<< b << endl;
		}
		else {
			if (c > a && c > b) {
				max = c;
				cout << "���������� ����� - "
					<< c << endl;
			}
		}
	}
}
void writeFile(int &max) {
	ofstream f("Results.txt");
	f << "���������� ����� - " << max << endl;
	f.close();
}