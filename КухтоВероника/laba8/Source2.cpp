/*.19.���� ����������� ����� P. ��������� �� ������ ����� P ����� 0, ������� ������� ������� ��������� ����.*/
#include <iostream>
#include <string>
#include <cstdlib>  
#include <locale>  

using namespace std;

string nuli(int P) {
    string number = to_string(P); 
    string P_1;
    for (char cifra : number) { 
        if (cifra != '0') { 
            P_1+= cifra; 
        }
    }
    return P_1;
}
int main() {
    setlocale(LC_ALL, "rus");
    int P;
    cout << "������� ����������� ����� P: ";
    cin >> P;
    //if (P < 0) { cout << "������� ����������� ����� P!!!: "; cin >>P; }
    cout << "����� P ��� �����: " << nuli(P) << endl;
    return 0;
}