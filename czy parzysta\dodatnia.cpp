#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	int liczba, reszta;

	cout << "podaj liczbe:";
	cin >> liczba;
	if (liczba == 0){
		cout << "liczba wynosi 0";
	}
	else if (liczba < 0) {
		cout << "liczba jest ujemna";
	}
	else if (liczba > 0) {
		cout << "liczba jest dodatnia" << endl;
		reszta = liczba %2;
		if (reszta == 0) {
			cout << "liczba jest parzysta";
		}
		else {
			cout << "liczba jest niepatrzysta";
		}
	}
	return 0;
}
