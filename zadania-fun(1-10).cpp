#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int roznica(int a, int b) {
	int roz = a - b;
	return roz;
}
int iloczyn(int a, int b) {
	int ilo = a * b;
	return ilo;
}
float srednia(float a, float b) {
	float sre = (a + b) / 2;
	return sre;
}
bool czy_parzysta(int n) {
	if (n % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
int wartosc_bez(int a) {
	if (a > 0) {
		int wart = a * 1;
		return wart;
	}
	else {
		int wart = a * -1;
		return wart;
	}
}
int pole(int a, int b) {
		int pol = a * b;
		return pol;
	}
float pole_kola(float r) {
	float pi = 3.14;
	float pole_k = 2 * pi * r;
	return pole_k;
}
float obowd(float a) {
	float obw = a * 4;
	return obw;
}
int minimum(int a, int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}
int maximum(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}



int main() {
	int a, b, ilo1 , ilo2,par,bezwgl,p1,p2,min1,min2,max1,max2;
	float sre1, sre2,r, bok;
	cout << "=========zadanie 1==========" << endl;
	cout << "podaj pierwsza liczbe:" << endl;
	cin >> a;
	cout << "podaj druga liczbe:" << endl;
	cin >> b;
	cout << "roznica to: " << roznica(a, b) << endl;
	cout << "=========zadanie 2==========" << endl;
	cout << "podaj pierwsza liczbe:" << endl;
	cin >> ilo1;
	cout << "podaj druga liczbe:" << endl;
	cin >> ilo2;
	cout << "iloraz to: " << iloczyn(ilo1, ilo2) << endl;
	cout << "=========zadanie 3==========" << endl;
	cout << "podaj pierwsza liczbe:" << endl;
	cin >> sre1;
	cout << "podaj druga liczbe:" << endl;
	cin >> sre2;
	cout << "srednia wynosi:" << srednia(sre1, sre2) << endl;
	cout << "=========zadanie 4==========" << endl;
	cout << "podaj liczbe:" << endl;
	cin >> par;
	cout << "czy liczba jest parzysta?" << endl;
	if (czy_parzysta(par) == 0) {
		cout << "nie jest patrzysta" << endl;
	}
	else {
		cout << "jest parzysta" << endl;
	}
	cout << "=========zadanie 5==========" << endl;
	cout << "wpisz liczbe:" << endl;
	cin >> bezwgl;
	cout << wartosc_bez(bezwgl) << endl;
	cout << "=========zadanie 6==========" << endl;
	cout << "podaj pierwszy  bok:" << endl;
	cin >> p1;
	cout << "podaj drugi bok:" << endl;
	cin >> p2;
	cout << "pole prostokota wynosi: " << pole(p1,p2)<< endl;
	cout << "=========zadanie 7==========" << endl;
	cout << "podaj promien:" << endl;
	cin >> r;
	cout << "pole kola wynosi:" << pole_kola(r) << endl;
	cout << "=========zadanie 8==========" << endl;
	cout << "podaj bok kwadratu:" << endl;
	cin >> bok;
	cout << "obwod kwadratu wynosi:" << obowd(bok) << endl;
	cout << "=========zadanie 9==========" << endl;
	cout << "podaj pierwsza liczbe: " << endl;
	cin >> min1;
	cout << "podaj druga liczbe:" << endl;
	cin >> min2;
	cout << "mniejsza liczba jest:" << minimum(min1,min2) << endl;
	cout << "=========zadanie 10==========" << endl;
	cout << "podaj pierwsza liczbe: " << endl;
	cin >> max1;
	cout << "podaj druga liczbe:" << endl;
	cin >> max2;
	cout << "wieksza liczba jest:" << maximum(max1, max2) << endl;
	cout << "===================================================" << endl;
	cout << "WSZYSKITE ZADANIA ZOSTALY UKONCZONE";
	return 0;
}

/*1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.

2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.

3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.

4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.

5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.

6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.

7. Napisz funkcję double pole_kola, która zwraca pole koła.

8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.

9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.

10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.*/
