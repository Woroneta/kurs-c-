#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	int tab[8];
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 8; ++a) {

		cin >> tab[a];
	}
	cout << "o to wpisane liczby: " << endl;
	for (int i = 7; i >= 0; --i) {
		cout << tab[i] << endl;
	}
	return 0;
}
