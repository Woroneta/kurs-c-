#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tab[10];
	int suma=0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 10; ++a) {

		cin >> tab[a];
	}
	for (int c = 0; c < 10; ++c) {
		suma = suma + tab[c];
	}
	cout << "suma podanych liczby to:" << suma << endl;
	return 0;

}
