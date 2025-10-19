#include<iostream>      
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	
	for (int x = 1,suma=0; x <= 100; ++x) {
		suma = suma + x;
		if (x == 100) {
			cout << suma;
		}
	}

	return 0;
}
