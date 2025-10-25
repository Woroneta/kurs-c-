#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int add(int a,int b) {
	int wynik = a + b;
	return wynik;
}

int main() {
	int a, b;
	cout << "podaj pierwsza liczbe:";
	cin >> a;
	cout << "podaj druga liczbe:";
	cin >> b;
	cout<<"suma to "<< add(a, b);
	return 0;
}
