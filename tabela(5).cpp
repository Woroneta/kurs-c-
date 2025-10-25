#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tab[5];
	cout << "daj liczbe do tabeli:" << endl;
		for (int a = 0;a < 5; ++a) {
		
		cin >>tab[a];
		}
		cout << "o to wpisane liczby: " << endl;
	for (int i = 0; i < 5; ++i) {
		cout << tab[i] << endl;
	}



}
