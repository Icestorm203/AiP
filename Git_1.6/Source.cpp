/*Задача №10
Вводятся три целых числа. Определить какое из них наибольшее.*/


#include "iostream";
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	cout << "Введите 3 числа \n";
	int a, b, c;
	int max = 0;
	cin >> a >> b >> c;
	


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
	f << "Наибольшее число - " << max << endl;
	f.close();

	getchar();
	getchar();
	return 0;
}