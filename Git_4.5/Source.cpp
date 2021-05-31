/*Задача №9
Имеется товар в ящиках по 16,17,21 кг. Как получить 185 кг этого товара, не
вскрывая ящики.*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	int i, j, k;
	

	for (i = 0; i < 186; i++){
		for (j = 0; j < 186; j++) {
			for (k = 0; k < 186; k++) {
				if (i * 16 + j * 17 + k * 21 == 185) {
					cout << i << " " << j << " " << k << " " << endl;
					f << i << " " << j << " " << k << " " << endl;
				}
			}
		}
	}
	f.close();

	getchar();
	getchar();
	return 0;
}