/*Задача №9
Имеется товар в ящиках по 16,17,21 кг. Как получить 185 кг этого товара, не
вскрывая ящики.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;
void countBox();
void writeFile();
int main() {
	setlocale(LC_ALL, "Russian");
	
	countBox();
	writeFile();
	
	getchar();
	getchar();
	return 0;
}
void countBox() {
	for (int i = 0; i < 186; i++) {
		for (int j = 0; j < 186; j++) {
			for (int k = 0; k < 186; k++) {
				if (i * 16 + j * 17 + k * 21 == 185) {
					cout << i << " " << j << " " << k << " " << endl;
				}
			}
		}
	}
}
void writeFile() {
	ofstream f("Results.txt");
	for (int i = 0; i < 186; i++) {
		for (int j = 0; j < 186; j++) {
			for (int k = 0; k < 186; k++) {
				if (i * 16 + j * 17 + k * 21 == 185) {
					f << i << " " << j << " " << k << " " << endl;
				}
			}
		}
	}
	f.close();
}