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
	cout << "������� ���������� ��������: ";
	cin >> n;
	if (n > 5) {
		cout << "������ ���������� �������� ���, ������� ������ ���������� ��������";
		cin >> n;
	}
	int i; int j;
	for ( i = 0; i < n; i++) {
		
			cout << "������� ������� "<<i+1<<" �������: ";
			cin >> ucheniki[i].familia;	
	}
	for ( i = 0; i < n; i++) {
		cout << "������� ��������  " << i + 1 << " �������: ";
		cin >> ucheniki[i].io;
	}
	for ( i = 0; i < n; i++) {
		cout << "������� ����� ������ " << i + 1 << " �������: ";
		cin >> ucheniki[i].hrupa;

	}
	for (i = 0; i < n; i++) {

		cout << "������� ������������(5 �������) " << i + 1 << " �������: ";
			for ( j = 0; j < 5; j++) {
			cin >> ucheniki[i].uspevaemost[j];
		}
	}
	int dvoika= 0; 
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < 5; j++) {
			if (ucheniki[i].uspevaemost[j] == 2) {
				cout << "������ " << ucheniki[i].familia << " ������ " << ucheniki[i].hrupa << " ����� 2" << endl;
				dvoika++; break;
			}
		}
	}
	if (dvoika == 0) {
		cout << "����� ��� �� � ������ �������" << endl;
	}
	ofstream File;
	File.open("uchenik.txt");
	if (!File.is_open()) {
		cout << "������ �������� �����";
	//	return -1;
	}
	else {
		for (i = 0; i < n; i++) {
			File << "�������  " << i + 1 <<": "<< ucheniki[i].familia << endl;

			File << "�������� " << i + 1 << ": " << ucheniki[i].io << endl;


			File << "������  " << i + 1 << ": " << ucheniki[i].hrupa << endl;
			for ( j = 0; j < 5; j++) {

				File << "������������  " << i + 1 << ": " << ucheniki[i].uspevaemost[j] << endl;
				if (ucheniki[i].uspevaemost[j] == 2) {
					File << "������ " << ucheniki[i].familia << " ������ " << ucheniki[i].hrupa << " ����� 2" << endl;
					dvoika++;
					break;

				}
			}
		}
		

		
		if (dvoika == 0) {
			File << "����� ��� �� � ������ �������" << endl;
		}
	}
	File.close();	
	return 0;
}