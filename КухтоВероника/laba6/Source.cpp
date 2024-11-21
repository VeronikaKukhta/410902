
#include <iostream>
#include <string>
#include<locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    string stroka;
    cout << "¬веди несколько слов на латинском €зыке: ";
    getline(cin, stroka);
    int count = 0;
    int oCount = 0;
    for (const char c : stroka) {
        if (c == 'o') {
            oCount++;
        }
        else if (c == ' ') {
            if (oCount == 3) {
                count++;
            }
            oCount = 0;
        }
    }
    if (oCount == 3) {
        count++;
    }
    cout << "«десь встречаетс€: " << count << " таких слова";
    return 0;
}