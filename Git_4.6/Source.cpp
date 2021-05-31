/*Задача №3(c)
Пользователь задаёт число n и x. Посчитать y:
y= 1/2x + 1/4x + 1/6x + ... + 1/nx .*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std; 

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int n, i;
	float y=0;
	float x;
	cin >> n >> x;
	for (i = 1; i <= n; i++) {
		y += (1 / (2 * x * i));
	}
	cout << y;
	f << y;

	f.close();
	getchar();
	getchar();
	return 0;
}