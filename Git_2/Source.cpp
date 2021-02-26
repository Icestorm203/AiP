#include "iostream";
#include "cmath";

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, p;
	float s, b;
	cout << "Введите длинну стороны правильного восьмиугольника" << endl;
	cin >> a;
	p = a * 8;
	b = sqrt(a);
	s = 2 * a * a*(1 + b);
	cout <<"Периметр равен="<< p << endl;
	cout <<"Площадь равна=" << s << endl;
	getchar();
	getchar();
	return 0;
}