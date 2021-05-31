/*Задача №3(A)
Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	
	const float r1 = 1; 
	const float r2 = 2;
	
	float x, y;
	cout << "Введите координаты точки" << endl;
	cin >> x >> y;
	float l = sqrt(x * x + y * y);
	
	if ((l > r1) && (l < r2) && (y>0)) {
		cout << "Точка попала в заштрихованную область";
		f << "Точка " << x << ";" << y << " попала в заштрихованную область" << endl;
	}	
	else { 
		cout << "Точка не попала в заштрихованную область";
		f << "Точка " << x << ";" << y << " непопала в заштрихованную область" << endl;
	}
		
	getchar();
	getchar();
	return 0;
}