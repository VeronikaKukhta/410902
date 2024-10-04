#include<iostream>//подключение библиотеки для поддержки системы ввода/вывода
#include<cstdlib>//поддержка функции задержки экрана
#include<locale>//подключение русского языка
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение х, чтобы получить значение функции f(x)" << endl;
	float x;
	cin >> x;
	if (x < 0)
	{
		cout << "значение функции=0";
	}
	else
	 if (int(x) % 2 == 0) {
		cout << "значение функции=1";
	}
	else
		cout << "значение функции=-1";
	return 0;
}