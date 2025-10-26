#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tab[4][4];
	int suma = 0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 4; ++a) {
		for (int x = 0; x < 4; ++x) {
			cin >> tab[x][a];
			suma = tab[x][a] + suma;
		}
	}

	cout << "o to wpisane liczby: " << endl;
	for (int i = 0; i < 4; ++i) {
		cout << tab[i][0]<<" ";
		cout << tab[i][1] << " ";
		cout << tab[i][2] << " ";
		cout << tab[i][3] << endl;
	}
	cout << "zsumowana tabela: " << suma << endl;

	return 0;
	}
