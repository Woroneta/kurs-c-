#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	double liczba;

	cout << "podaj liczbe:";
	cin >> liczba;
	if (10 <= liczba&&liczba<=50){
		cout << "liczba jest w przedziale 10/50";
	}
	else {
		cout << "liczba nie znajduje sie w przedziale 10/50";
	}
	return 0;
}
