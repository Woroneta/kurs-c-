#include<iostream>      
#include<string>
#include<cmath>

using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
       int x;
       x = i * n; 
       cout << "liczba " << n << " razy " << i << " rowna sie " << x << endl; ;

    }
    return 0;
}
