/*������ �10
�������� ��� ����� �����. ���������� ����� �� ��� ����������.*/


#include "iostream";
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	cout << "������� 3 ����� \n";
	int a, b, c;
	int max = 0;
	cin >> a >> b >> c;
	


	if (a > b && a > c) {
		max = a;
		cout << "���������� ����� - "
			<< a << endl;
	}
	else {
		if (b > a && b > c) {
			max = b;
			cout << "���������� ����� - "
				<< b << endl;
		}
		else {
			if (c > a && c > b) {
				max = c;
				cout << "���������� ����� - "
					<< c << endl;
			}
		}
	} 
	f << "���������� ����� - " << max << endl;
	f.close();

	getchar();
	getchar();
	return 0;
}