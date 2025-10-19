#include<iostream>      
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	int x;
	long long m = 1;
		cout << "podaj silnie:";

	cin >> x;
	for(int n=1;n<=x;n++){
		m = n * m;
			cout << "silnia:" << n << " wynosi:" << m << endl;
	
	
	}

	return 0;
}
