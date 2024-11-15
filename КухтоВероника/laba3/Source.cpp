#include<iostream>
#include<cstdlib>
#include<cmath>
#include<locale>
using namespace std;
int main() { 
	setlocale(LC_ALL, "RUS");
	int n;
	float sum_1 = 0.0;
	float sum_2 = 0.0;
	float sum = 0.0;
	int i=1;
	cout << "¬ведите количество: ";
	cin >> n;
	sum_1= pow(-1, 0) * 1 / ((pow(3, 0) + 1) );	 
	while (i <= n)
	{
		sum_2 += pow(-1, i) * 1 / ((pow(3, i) + 1) * i);
		i++;

	}
	sum = round((sum_1+sum_2) * 1000) / 1000;
	cout<< sum;
	return 0;
}