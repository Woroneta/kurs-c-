#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
    int tab[10];
    cout << "daj liczbe do tabeli:" << endl;
    for (int a = 0; a < 10; ++a) {

        cin >> tab[a];
    }
    int n = sizeof(tab) / sizeof(tab[0]);

    int min = tab[0];
    int max = tab[0];

    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    cout << "Najmniejszy element: " << min << endl;
    cout << "Najwiekszy element: " << max << endl;

    return 0;
}
