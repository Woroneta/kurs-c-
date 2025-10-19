#include<iostream>      
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	double l1, l2, l3;
	cout << "wpisz liczbe pierwsza:";
	cin >> l1;
	cout << "wpisz liczbe druga:";
	cin >> l2;
	cout << "wpisz liczbe trzecia:";
	cin >> l3;
	if (l1 < l2 && l2 < l3) {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l1 << "<" << l2 << "<" << l3;
	}
	else if (l2 < l1 && l1 < l3) {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l2 << "<" << l1 << "<" << l3;
	}
	else if (l3 < l1 && l1 < l2) {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l3 << "<" << l1 << "<" << l2;
	}
	else if (l3 < l2 && l2 < l1) {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l3 << "<" << l2 << "<" << l1;
	}
	else if (l2 < l3 && l3 < l1) {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l2 << "<" << l3 << "<" << l1;
	}
	else {
		cout << "oto liczby ulozone od najmniejszej do najwiekszej:" << l1 << "<" << l3 << "<" << l2;
	}
	return 0;
}
