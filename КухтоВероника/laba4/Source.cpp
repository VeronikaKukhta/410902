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
    if (n > 20 || m > 20) {
        cout << "������� ����������  ����� � �������� �� 20" << endl;
        cout << "������� ���������� ����� �������: " << endl;
        cin >> n;
        cout << "������� ���������� �������� �������: " << endl;
        cin >> m;
    }
        int arr[20][20];

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

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i][j] = arr[i][j] / a;
                    cout << arr[i][j] << " ";
                }
            }
            
            
    }  

   
    
    
    return 0;
}