/*������ �2(D)
y = (-3+x)^2 + 2x+5
��������������� ������� (��� � �������� ����� ������������):*/


#include "iostream"
#include <fstream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	float dx, xf, x;
	float y;
	cout << "������� dx: ";
	cin >> dx;
	cout << "������� x0: ";
	cin >> x;
	cout << "������� xf: ";
	cin >> xf;
	cout << "\tx\t\ty" << std::endl;
	cout.precision(5);
	f << "\tx\t\ty" << std::endl;

	while (x < xf) {
		y = y = ((-3 + x) * (-3 + x)) + 2*x + 5;
		cout << "\t" << x << "\t\t" << y << endl;
		f << "\t" << x << "\t\t" << y << endl;
		x += dx;
	}
	getchar();
	getchar();
	return 0;
}