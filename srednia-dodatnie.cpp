#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	float tab[5];
	float sre;
	float suma=0;
	int n=0;
	cout << "daj liczbe do tabeli:" << endl;
	for (int a = 0; a < 5; ++a) {

		cin >> tab[a];
		if (tab[a] > 0) {
			n = n + 1;
			suma = tab[a] + suma;
		}
	}
	if (suma == 0) {
		cout << "nie ma dodatnich liczb.";
	}
	sre = suma / n;
	cout << "średnia z dodatnich liczb wynosi: " << sre<<endl;
	
	ret
