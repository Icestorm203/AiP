/*Задача №10
Вводятся три целых числа. Определить какое из них наибольшее.*/


#include "iostream";


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << "Введите 3 числа \n";
	int a, b, c;
	cin >> a >> b >> c;


	if (a > b && a > c) {
		cout << "Наибольшее число = "
			<< a << endl;
	}
	else {
		if (b > a && b > c) {
			cout << "Наибольшее число = "
				<< b << endl;
		}
		else {
			if (c > a && c > b) {
				cout << "Наибольшее число = "
					<< c << endl;
			}
		}
	} 

	getchar();
	getchar();
	return 0;
}