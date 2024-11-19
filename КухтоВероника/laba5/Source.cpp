#include <iostream>
#include<cstdlib>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n, m;
    cout << "Введите количество строк массива: ";
    cin >> n;
    cout << "Введите количество столбцов массива: ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    cout << "Введите элементы массива: ";
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
        cout << "Минимальный элемент = 0, массив не изменяется";
    }
    else {
        cout << "Измененный массив: " << endl;
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