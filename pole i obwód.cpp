#include<iostream>
#include<cmath>


using namespace std;

int main()
{
	double π, r, obwod, pole;
		π=3.14;
		
		cout << "podaj r:" << endl;
		cin >> r;

		obwod = 2 * π * r;

		cout << "obwod:" << obwod << endl;

		pole = π * pow(r, 2);

		cout << "pole:" << pole;






		return 0;
}
