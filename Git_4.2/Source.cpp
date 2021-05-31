/*������ �2(M)
y = sqrt(2 + 4x^2) + 6x + sin(8x+11)
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
		y = sqrt(2 + 4*(x * x)) + 6*x + sin(8*x + 11);
		cout << "\t" << x << "\t\t" << y << endl;
		f << "\t" << x << "\t\t" << y << endl;
		x += dx;
	}
	getchar();
	getchar();
	return 0;
}