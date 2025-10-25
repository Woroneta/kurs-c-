#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	char name[100];
	cout << "wpisz zdanie:";
	cin >> name;
	for(int i = 0; name[i]; ++i) {
		name[i] = toupper(name[i]);
	}
	cout << name;

}
