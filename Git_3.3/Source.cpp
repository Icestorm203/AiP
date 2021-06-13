/*Задача №2(Г)
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область. */

#include "iostream"
#include <fstream>

using namespace std;
void checkPoint(float x, float y);
void writeFile(float x, float y);
int main() {
	setlocale(LC_ALL, "Russian");

	float x, y;
	cout << "Введите координаты точки" << endl;
	cin >> x >> y;
	
	checkPoint(x, y);
	writeFile(x, y);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float x, float y) {
	if ((y < x) && (y > ((x * x) - 2)) || (y < -x) && (y > ((x * x) - 2))) {
		cout << "Точка попала в заштрихованную область";
	}
	else {
		cout << "Точка не попала в заштрихованную область";
	}
}
void writeFile(float x, float y) {
	ofstream f("Results.txt");
	if ((y < x) && (y > ((x * x) - 2)) || (y < -x) && (y > ((x * x) - 2))) {
		f << "Точка " << x << ";" << y << " попала в заштрихованную область" << endl;
	}
	else {
		f << "Точка " << x << ";" << y << " непопала в заштрихованную область" << endl;
	}
	f.close();
}