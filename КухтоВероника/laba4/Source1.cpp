#include <iostream>
#include<cstdlib>
#include <locale>
#include <algorithm>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "������� ���������� ��������� �� ����� 20: ";
    cin >> n;
    if (n > 20) {
        cout << "������� ���������� ��������� �� ����� 20: ";
        cin >> n;
    }
    float arr[20]; 
    cout << "������� �������� �������: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << "��������������� ������: ";
    float j = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > 6) {
            j = arr[i];
         
            cout << j << " ";
           

        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 6) {
            j = arr[i];
            cout << j << " ";
        }
    }
   
    /*cout << "��������������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/  
    return 0;
}
