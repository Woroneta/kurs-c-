#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	float tab[5];
	float sre;
	float suma = 0;
	int n = 0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 5; ++a) {

		cin >> tab[a];
		if (tab[a] > 0) {
			n = n + 1;
			suma = tab[a] + suma;
		}
	}
	sre = suma / n;
	cout << "średnia liczb wynosi: " << sre << endl;
	cout << "liczby wieksze od sredniej: " << endl;

	for (int i = 0; i < 10; i++) {
		if (tab[i] > sre) {
			cout << tab[i]<<endl;
		}
	}

	return 0;

}
