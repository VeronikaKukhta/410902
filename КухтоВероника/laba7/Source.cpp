#include<iostream>
#include<cstdlib>
#include<locale>
#include<fstream>
using namespace std;
struct STUDENT {
	string familia;
	string io;
	int hrupa;
	int uspevaemost[5];
};
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	STUDENT ucheniki[5];
	int n;
	cout << "Введите количество учеников: ";
	cin >> n;
	if (n > 5) {
		cout << "Такого количества учеников нет, введите заново количество учеников";
		cin >> n;
	}
	int i; int j;
	for ( i = 0; i < n; i++) {
		
			cout << "Введите фамилию "<<i+1<<" ученика: ";
			cin >> ucheniki[i].familia;	
	}
	for ( i = 0; i < n; i++) {
		cout << "Введите инициалы  " << i + 1 << " ученика: ";
		cin >> ucheniki[i].io;
	}
	for ( i = 0; i < n; i++) {
		cout << "Введите номер группы " << i + 1 << " ученика: ";
		cin >> ucheniki[i].hrupa;

	}
	for (i = 0; i < n; i++) {

		cout << "Введите успеваемость(5 отметок) " << i + 1 << " ученика: ";
			for ( j = 0; j < 5; j++) {
			cin >> ucheniki[i].uspevaemost[j];
		}
	}
	int dvoika= 0; 
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < 5; j++) {
			if (ucheniki[i].uspevaemost[j] == 2) {
				cout << "Ученик " << ucheniki[i].familia << " группы " << ucheniki[i].hrupa << " имеет 2" << endl;
				dvoika++; break;
			}
		}
	}
	if (dvoika == 0) {
		cout << "Двоек нет ни у одного ученика" << endl;
	}
	ofstream File;
	File.open("uchenik.txt");
	if (!File.is_open()) {
		cout << "Ошибка открытия файла";
	//	return -1;
	}
	else {
		for (i = 0; i < n; i++) {
			File << "Фамилия  " << i + 1 <<": "<< ucheniki[i].familia << endl;

			File << "Инициалы " << i + 1 << ": " << ucheniki[i].io << endl;


			File << "Группа  " << i + 1 << ": " << ucheniki[i].hrupa << endl;
			for ( j = 0; j < 5; j++) {

				File << "Успеваемость  " << i + 1 << ": " << ucheniki[i].uspevaemost[j] << endl;
				if (ucheniki[i].uspevaemost[j] == 2) {
					File << "Ученик " << ucheniki[i].familia << " группы " << ucheniki[i].hrupa << " имеет 2" << endl;
					dvoika++;
					break;

				}
			}
		}
		

		
		if (dvoika == 0) {
			File << "Двоек нет ни у одного ученика" << endl;
		}
	}
	File.close();	
	return 0;
}