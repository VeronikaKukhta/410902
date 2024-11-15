#include <iostream>
#include<cstdlib>
#include <locale>
#include <algorithm>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "¬ведите количество элементов не более 20: ";
    cin >> n;
    if (n > 20) {
        cout << "¬ведите количество элементов не более 20: ";
        cin >> n;
    }
    float arr[20]; 
    cout << "¬ведите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << "ќтсортированный массив: ";
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
   
    /*cout << "ќтсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/  
    return 0;
}
