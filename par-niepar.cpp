#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	int tab[10];
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 10; ++a) {

		cin >> tab[a];
	}
	cout << "o to liczby parzyste: " << endl;
	for (int i = 1; i < 10; ++i) {
		if (tab[i] %2 ==0) {
			cout << tab[i]<<endl;
		}

	}
	cout << "o to liczby nieparzyste: " << endl;
	for (int f = 1; f < 10; ++f) {
		if (tab[f] %2 != 0) {
			cout << tab[f]<<endl;
		}

	}
	return 0;
}
