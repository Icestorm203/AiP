/*������ �1(I)
y = 2x^2 - 3, ���� x > 7
y = 0, ���� x = 7
y = 2 * |x| + 3, ���� x < 7*/


#include "iostream"
#include "cmath"
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	float x, y;
	cout << "������� x" << endl;
	cin >> x;
	if (x > 7) {
		y = 2 * (x * x) - 3;
	}
	if (x == 7) {
		y = 0;
	}
	if (x < 7) {
		y = 2 * abs(x) + 3;
	}

	cout << "y ����� = " << y << endl;
	f << "y ����� = " << y << endl;
	f.close();
	getchar();
	getchar();
	return 0;
	
}