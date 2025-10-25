#include<iostream>      
#include<cstring>
#include<cmath>

using namespace std;

int main() {
	char name[20];
	char surname[20];
	cout << "podaj imie:" << endl;
	cin >> name;
	cout << "podaj nazwisko:" << endl;
	cin >> surname;
	cout << "Imie nazwisko: " << strcat(name, " ") << strcat(surname, ".");
	return 0;
}
