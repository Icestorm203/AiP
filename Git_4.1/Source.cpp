/*Задача №1
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).*/

#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int n,i;
	cout << "Введите число строк" << endl;
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < i; j++) {
			cout << 0;
			f << 0;
		}
		cout << endl;
		f << endl;
	}
	
	getchar();
	getchar();
	return 0;
}

