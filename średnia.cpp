#include<iostream>

using namespace std;

int main()
{


		double pierwsza_liczba,druga_liczba,trzecia_liczba,srednia;

	cout << "podaj pierwsza liczbe: ";
	cin >> pierwsza_liczba;
	cout << "podaj druga liczbe: ";
	cin >> druga_liczba;
	cout << "podaj trzecia liczbe: ";
	cin >> trzecia_liczba;
    srednia = (pierwsza_liczba + druga_liczba + trzecia_liczba) /3;
	cout << "średnia: " << srednia;

	return 0;

}
