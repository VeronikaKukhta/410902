#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите площадь квадрата S:" << endl;
	int S;
	double a;
	double s;
	double d;
	cin >> S;
	a = sqrt(S);
	cout << "Сторона вашего квадрата равна:";
	cout << a << endl;
	d = (a / sqrt(2));
	cout << "Диагональ вашего квадрата равна:";
	cout << d << endl;
	const double pi = 3.14;
	s = pi * a * a;
	cout << "Площадь вписанного в квадрат круга:";
	cout << s;
	return 0;
}
