/*�����-������ ����������� ��� ��������� � ������: �������� �������� �����,
������ �����, ����������� ����. �������� ������� ��� ������� ����,
����������� ������ (������������ ���� �������������).*/
#include <iostream>

using namespace std;

struct samolet {
	float s, r, k;
};

int findTraction(struct samolet param);

int main()
{
	setlocale(LC_ALL, "Russian");

	samolet param;

	cin >> param.k
		>> param.r
		>> param.s;

	int result = findTraction(param);

	cout << result;
}
int findTraction(struct samolet param) {
	int result = param.k * param.r * param.s;
	return (result);
}