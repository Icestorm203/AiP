/*Задача №8(А)
Вычислите значение выражения:
(a+4b)(a−3b)+a^2
при a=2 и b=3. Ответ: -94*/


#include "iostream";


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	float a,b;

	cout << "Введите 2 числа \n";
	cin >> a >> b;
	float c = (a + (4 * b)) * (a - (3 * b)) + (a * a);
	cout << "(a + 4*b)*(a - 3*b) + a * a = " << c << endl;

	getchar();
	getchar();
	return 0;
}