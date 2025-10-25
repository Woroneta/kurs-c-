#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	char name[20];
	char fyp[20];
	cout << "wpisz zdanie:";
	cin >> name;
	cout << "wpisz zdanie drugie:";
	cin >> fyp;
	if (strcmp(name, fyp) < 0) {
		cout << name << " jest wiekszy niz " << fyp << " leksygraficznie." << endl;
	}
	else if (strcmp(name, fyp) > 0) {
		cout << fyp << " jest mniejszy niż" << name << " leksygraficznie." << endl;
	}
	else if (strcmp(name,fyp) == 0) {
		cout << name << " jest taki sam jak " << fyp << " leksygraficznie." << endl;
	}
	return 0;
