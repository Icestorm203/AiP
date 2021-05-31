/*Задача №3(g)
Пользователь задаёт число n и x. Посчитать y:
y= -1/x + 1/2x - 1/3x + ... + 1/nx .*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int n, i;
	float y = 0;
	float x;
	cin >> n >> x;
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			y -= (1 / (x * i));
		}
		else {
			y += (1 / (x * i));
		}
	}
	cout << y;
	f << y;

	f.close();
	getchar();
	getchar();
	return 0;
}