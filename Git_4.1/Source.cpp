/*Задача №1
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).*/

#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
void writeZero(int n);
void writeFile(int n);
int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int n;
	cout << "Введите число строк" << endl;
	cin >> n;
	writeZero(n);
	writeFile(n);
	
	getchar();
	getchar();
	return 0;
}

void writeZero(int n) {
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << 0;
		}
		cout << endl;
	}
}
void writeFile(int n) {
	ofstream f("Results.txt");
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < i; j++) {
			
			f << 0;
		}
		
		f << endl;
	}
	f.close();
}
