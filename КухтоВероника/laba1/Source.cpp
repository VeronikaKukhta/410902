#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������� S:" << endl;
	int S;
	double a;
	double s;
	double d;
	cin >> S;
	a = sqrt(S);
	cout << "������� ������ �������� �����:";
	cout << a << endl;
	d = (a / sqrt(2));
	cout << "��������� ������ �������� �����:";
	cout << d << endl;
	const double pi = 3.14;
	s = pi * a * a;
	cout << "������� ���������� � ������� �����:";
	cout << s;
	return 0;
}
