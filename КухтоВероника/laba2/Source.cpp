#include<iostream>//����������� ���������� ��� ��������� ������� �����/������
#include<cstdlib>//��������� ������� �������� ������
#include<locale>//����������� �������� �����
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� �������� �, ����� �������� �������� ������� f(x)" << endl;
	float x;
	cin >> x;
	if (x < 0)
	{
		cout << "�������� �������=0";
	}
	else
	 if (int(x) % 2 == 0) {
		cout << "�������� �������=1";
	}
	else
		cout << "�������� �������=-1";
	return 0;
}