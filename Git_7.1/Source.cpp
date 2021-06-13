/*Задача №1(с)
Сгенерировать массив со случайными числами в диапазоне:
[-10,10] */

#include <iostream>
#include <fstream>
using namespace std;
void randNum(int arr[], int n);
void writeFile(int arr[], int n);
int main() {
	setlocale(LC_ALL, "Russian");
	srand(3);
	int arr[20];

	randNum(arr, 20);
	writeFile(arr, 20);
	
	getchar();
	getchar();
	return 0;
}
void randNum(int arr[], int n) {
	for (int i = 0; i < 21; i++) {
		arr[i] = rand() % 10 - rand() % 10;
		cout << arr[i] << endl;
	}
}
void writeFile(int arr[], int n) {
	ofstream f("Results.txt");
	for (int i = 0; i < 21; i++) {
		arr[i] = rand() % 10 - rand() % 10;
		f << arr[i] << endl;
	}
	f.close();
}