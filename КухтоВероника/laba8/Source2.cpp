/*.19.Дано натуральное число P. Выбросите из записи числа P цифры 0, оставив прежним порядок остальных цифр.*/
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
    cout << "Введите натуральное число P: ";
    cin >> P;
    //if (P < 0) { cout << "Введите натуральное число P!!!: "; cin >>P; }
    cout << "Число P без нулей: " << nuli(P) << endl;
    return 0;
}