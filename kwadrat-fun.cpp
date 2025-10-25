#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int add(int a) {
	int wynik = a * a;
	return wynik;
}

int main() {
	int a;
	cout << "podaj liczbe:";
	cin >> a;
	cout<<"kwadrat to "<< add(a);
	return 0;
}
