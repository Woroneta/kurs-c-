#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include <iomanip>

using namespace std;

int main() {
	float tab[8];
	float suma=0;
	float sre = 0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 8; ++a) {

		cin >> tab[a];
	}
	for (int c = 0; c < 8; ++c) {
		suma = suma + tab[c];
	}
	sre = suma / 8;
	cout << fixed <<setprecision(2);
	cout << "średnia podanych liczby to:" << sre << endl;
	return 0;

}
