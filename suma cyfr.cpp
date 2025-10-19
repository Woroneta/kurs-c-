#include<iostream>      
#include<string>
#include<cmath>

using namespace std;

int main() {
    int suma = 0;
    int n;
    cout << "Podaj liczbe:" << endl;
    cin >> n;
    while (n > 0) {
        suma += n % 10; 
        n /= 10;       
    }

    cout << "wynik to: " << suma;

    return 0;
}
