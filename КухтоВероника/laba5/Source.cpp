#include <iostream>
#include<cstdlib>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n, m;
    cout << "������� ���������� ����� �������: ";
    cin >> n;
    cout << "������� ���������� �������� �������: ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    cout << "������� �������� �������: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int a = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < a) {
                a = arr[i][j];
            }
        }
    }
    if (a == 0) {
        cout << "����������� ������� = 0, ������ �� ����������";
    }
    else {
        cout << "���������� ������: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = arr[i][j] / a;
                cout << arr[i][j] << " ";
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[]arr;
    arr = nullptr;
    return 0;
}