#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	int liczba, reszta;
	cout << "podaj liczbe: ";
	cin >> liczba;
	reszta = liczba % 2;
	if (reszta == 0) {
		cout << "liczba jest parzysta";
	}
	else {
		cout << "liczba jest nieparzysta";
	}
	return 0;
}
