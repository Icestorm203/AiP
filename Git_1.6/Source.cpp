/*Задача №10
Вводятся три целых числа. Определить какое из них наибольшее.*/


#include "iostream";
#include <fstream>

using namespace std;
void checkValue(int a, int b, int c, int &max);
void writeFile(int &max);
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Введите 3 числа \n";
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
		cout << "Наибольшее число - "
			<< a << endl;
	}
	else {
		if (b > a && b > c) {
			max = b;
			cout << "Наибольшее число - "
				<< b << endl;
		}
		else {
			if (c > a && c > b) {
				max = c;
				cout << "Наибольшее число - "
					<< c << endl;
			}
		}
	}
}
void writeFile(int &max) {
	ofstream f("Results.txt");
	f << "Наибольшее число - " << max << endl;
	f.close();
}