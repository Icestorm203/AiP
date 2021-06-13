/*������ �3(c)
������������ ����� ����� n � x. ��������� y:
y= 1/2x + 1/4x + 1/6x + ... + 1/nx .*/


#include "iostream"
#include <fstream>
#include <cmath>

using namespace std; 
void countValue(int n, float x, float& y);
void writeFile(float& y);

int main() {
	setlocale(LC_ALL, "Russian");
	
	int n;
	float x;
	float y = 0;
	cin >> n >> x;
	countValue(n,x,y);
	cout << y << endl;
	writeFile(y);
	
	getchar();
	getchar();
	return 0;
}
void countValue(int n, float x, float &y) {
	for (int i = 1; i <= n; i++) {
		y += (1 / (2 * x * i));
	}
}
void writeFile(float &y) {
	ofstream f("Results.txt");
	f << y;
	f.close();
}