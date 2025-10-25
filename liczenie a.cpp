#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char tekst[50];
cout<<"Podaj wyraz: ";
cin >>tekst;

//cin.getline(tekst, 50); //wczytanie calej linii
int licznik =0; //zienna do zliczania wystapien liczby 'a'
int dl=strlen(tekst); //strlen zwraca dlugosc napisu bez \0

for (int i=0; i< dl; i++){
    if(tekst[i] =='a' || tekst[i] =='A')
    {
        licznik++;
    }
}
    cout<<"Litera 'a' wystepuje " <<licznik<< " razy."<<endl;

    return 0;
}
