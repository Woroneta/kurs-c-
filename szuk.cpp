#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
    int tab[10];
    int szuk;
    int licz=0;
    cout << "daj liczbe do tabeli:" << endl;
    for (int a = 0; a < 10; ++a) {

        cin >> tab[a];
    }
    cout << "podaj szukana:" << endl;
    cin >> szuk;
    for (int i = 0; i < 10; ++i) {
        if (szuk == tab[i]) {
            licz = licz + 1;
        }
    }
    cout << "liczba wystepuje: " << licz << " razy," << endl;
    return 0;
}
