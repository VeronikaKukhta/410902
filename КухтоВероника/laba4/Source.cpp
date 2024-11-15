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
    if (n > 20 || m > 20) {
        cout << "Введите количество  строк и столбцов до 20" << endl;
        cout << "Введите количество строк массива: " << endl;
        cin >> n;
        cout << "Введите количество столбцов массива: " << endl;
        cin >> m;
    }
        int arr[20][20];

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

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i][j] = arr[i][j] / a;
                    cout << arr[i][j] << " ";
                }
            }
            
            
    }  

   
    
    
    return 0;
}