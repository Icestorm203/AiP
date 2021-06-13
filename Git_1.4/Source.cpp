/*Задача №8(А)
Вычислите значение выражения:
(a+4b)(a−3b)+a^2
при a=2 и b=3. Ответ: -94*/


#include "iostream";
#include "fstream";

using namespace std;
float countValue(float a, float b, float &y);
void writeFile(float a, float b, float &y);
int main() {
	setlocale(LC_ALL, "Russian");

	float a,b,y;
	cout << "Введите 2 числа a и b \n";
	cin >> a >> b;
	countValue(a,b,y);
	cout << "(a + 4*b)*(a - 3*b) + a * a = " << y << endl;
	writeFile(a,b,y);
	
	getchar();
	getchar();
	return 0;
}
float countValue(float a, float b, float &y) {
	y = (a + (4 * b)) * (a - (3 * b)) + (a * a);
	return 0;

}
void writeFile(float a, float b, float  &y) {
	ofstream f("Results.txt");
	f << "a= " << a << endl << "b= " << b << endl;
	f << "(a + 4*b)*(a - 3*b) + a * a = " << y << endl;
	f.close();
}