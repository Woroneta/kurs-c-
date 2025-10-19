#include<iostream>      
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	int x = 2;
	while (x <= 20) {
		if (x % 2==0) {
			cout << x<< " ";
			x++;
		}
		else {
			cout << " " << endl;
			x++;
		}
		

	}
	

	return 0;
}

