/*19. используя перегрузки
а) для последовательности целых чисел находит минимальный элемент;
б) для строки находит длину самого короткого слова. */
#include <iostream>
#include <cstdlib> 
#include <locale>
#include <string> 
using namespace std;
int func(int* arr, int size);
int func(string* slovo, int size);
int main() {
    setlocale(LC_ALL, "rus");
    int arr[5];
    cout << "Введи 5 целых чисел ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout <<"минимальный элемент: "<< func(arr, 5)<<endl;
    string slovo[5];
    cout << "Введи 5 слов: ";
    for (int i = 0; i < 5; i++) {
        cin >> slovo[i];
    }

    cout << "длина наименьшего слова: " << func(slovo, 5);
    return 0;
}

int func(int* arr, int size) {
    int a = arr[0];
    for (int i = 0; i < size; i++) {
        if (a > arr[i]) {
            a = arr[i];
        }
    }
    return a;
}
int func(string* slovo, int size) {
    string malenkoe_slovo = slovo[0];
    for (int i = 0; i < size; i++) {
        if (malenkoe_slovo.length() > slovo[i].length()) {
            malenkoe_slovo = slovo[i];
        }
    }
    return malenkoe_slovo.length();
}