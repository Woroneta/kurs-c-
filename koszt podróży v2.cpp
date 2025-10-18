#include<iostream>
#include<cmath>


using namespace std;

int main()
{
	double benzyna, koszt, dystans, spalanie;

	cout << "podaj cene benzyny" << endl;
	cin >> benzyna;
	cout << "podaj dlugosc trasy" << endl;
	cin >> dystans;
		cout << "podaj spalanie" << endl;
	cin >> spalanie;


	koszt = spalanie * dystans / 100 * benzyna;

		cout << "koszto podrozy=" << koszt;









		return 0;
}
