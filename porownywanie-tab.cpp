#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
    int tab[5];
    int ppl[5];

    cout << "Daj liczby do pierwszej tabeli:" << endl;
    for (int a = 0; a < 5; ++a) {
        cin >> tab[a];
    }

    cout << "Daj liczby do drugiej tabeli:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> ppl[i];
    }

    bool takieSame = true;

    for (int c = 0; c < 5; ++c) {
        if (tab[c] != ppl[c]) {
            takieSame = false;
            break; // nie ma sensu dalej sprawdzać
        }
    }

    if (takieSame)
        cout << "Tabele są takie same." << endl;
    else
        cout << "Tabele są różne." << endl;

    return 0;
}
