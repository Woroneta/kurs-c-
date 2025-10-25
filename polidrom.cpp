#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	char name[20];
	char name2[20];
	cout << "wpisz zdanie:";
	cin.getline(name, 20);

	int len = strlen(name);
	for (int i = 0; i < len; ++i) {
		name2[i] = name[len - 1 - i];
	}
	name2[len] = '\0';
	int cmp = strcmp(name, name2);
	if (cmp == 0) {
		cout << "wyraz jest palindromem.";
	}
	else {
		cout << "wyraz nie jest palindromem.";
	}
	return 0;
}
