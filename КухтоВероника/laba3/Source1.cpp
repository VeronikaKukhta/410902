#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n; float sum = 0.0;
	cout << "¬ведите натуральное число "  << endl;
	cin >> n;
	for (double i = 1; i <= n; i=i+1)
	{
		sum +=1 /i;
	}
	cout << "—умма равна " << sum;
    return 0;
	}

	
