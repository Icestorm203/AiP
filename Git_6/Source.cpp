/*������ �10
�������� ��� ����� �����. ���������� ����� �� ��� ����������.*/


#include "iostream";


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << "������� 3 ����� \n";
	int a, b, c;
	cin >> a >> b >> c;


	if (a > b && a > c) {
		cout << "���������� ����� = "
			<< a << endl;
	}
	else {
		if (b > a && b > c) {
			cout << "���������� ����� = "
				<< b << endl;
		}
		else {
			if (c > a && c > b) {
				cout << "���������� ����� = "
					<< c << endl;
			}
		}
	} 

	getchar();
	getchar();
	return 0;
}