/*Задача №2(Г)
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область. */

#include "iostream"
#include <fstream>

using namespace std;
struct Fig {
	int x, y;
};
void checkPoint(float fx, float fy);
void writeFile(float fx, float fy);
int main() {
	setlocale(LC_ALL, "Russian");
	Fig figure;
	cout << "Введите координаты точки" << endl;
	cin >> figure.x >> figure.y;

	checkPoint(figure.x, figure.y);
	writeFile(figure.x, figure.y);

	getchar();
	getchar();
	return 0;
}
void checkPoint(float fx, float fy) {
	if ((fy < fx) && (fy > ((fx * fx) - 2)) || (fy < -fx) && (fy > ((fx * fx) - 2))) {
		cout << "Точка попала в заштрихованную область";
	}
	else {
		cout << "Точка не попала в заштрихованную область";
	}
}
void writeFile(float fx, float fy) {
	ofstream f("Results.txt");
	if ((fy < fx) && (fy > ((fx * fx) - 2)) || (fy < -fx) && (fy > ((fx * fx) - 2))) {
		f << "Точка " << fx << ";" << fy << " попала в заштрихованную область" << endl;
	}
	else {
		f << "Точка " << fx << ";" << fy << " непопала в заштрихованную область" << endl;
	}
	f.close();
}