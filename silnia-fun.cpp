#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

long long add(int a) {
	long long m = 1;
	for (int n = 1; n <= a; n++) {
		m *= n; // m = m * n
	}
	return m;
}

int main() {
	int a;
	cout << "podaj liczbe:";
	cin >> a;
	cout<<"silnia to "<< add(a);
	return 0;
}
