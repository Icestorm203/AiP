/*Задача №3(A)
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
struct Fig {
	int x, y;
};
void checkPoint(float fy, float l, const float r1, const float r2);
void writeFile(float fx, float y, float l, const float r1, const float r2);
int main() {
	setlocale(LC_ALL, "Russian");

	const float r1 = 1;
	const float r2 = 2;
	Fig figure;
	cout << "Введите координаты точки" << endl;
	cin >> figure.x >> figure.y;
	float l = sqrt(figure.x * figure.x + figure.y * figure.y);

	checkPoint(figure.y, l, r1, r2);
	writeFile(figure.x, figure.y, l, r1, r2);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float fy, float l, const float r1, const float r2) {
	if ((l > r1) && (l < r2) && (fy > 0)) {
		cout << "Точка попала в заштрихованную область";

	}
	else {
		cout << "Точка не попала в заштрихованную область";

	}
}
void writeFile(float fx, float fy, float l, const float r1, const float r2) {
	ofstream f("Results.txt");
	if ((l > r1) && (l < r2) && (fy > 0)) {
		f << "Точка " << fx << ";" << fy << " попала в заштрихованную область" << endl;
	}
	else {
		f << "Точка " << fx << ";" << fy << " непопала в заштрихованную область" << endl;
	}
	f.close();
}