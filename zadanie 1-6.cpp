/*1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans(w kilometrach) i czas podróży(w godzinach).
Oblicz średnią prędkość i wypisz wynik w km / h.*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double dystans, czas, predkosc;

	cout << "dystans" << endl;
	cin >> dystans;
	cout << "podaj czas w godzinach" << endl;
	cin >> czas;
	cout << "predkosc" << endl;

	predkosc = dystans / czas;

	cout << "srednia predkosc" << predkosc << "km/h";





	/*2. Oblicz pole prostokąta i przekątną

	Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.*/



	double a, b, pole, przekatna;

	cout << " podaj dlugosc (a)" << endl;
	cin >> a;
	cout << " podaj szerokosc (b)" << endl;
	cin >> b;

	pole = a * b;
	przekatna = sqrt(a * a + b * b);

	cout << "pole" << pole << "przekatna" << przekatna;






	/*3. Przeliczanie sekund na godziny, minuty i sekundy

	Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund.*/

	int ilosc_sekund, godziny, minuty, sekundy;

	cout << "podaj liczbe sekund" << endl;
	cin >> ilosc_sekund;
	godziny = ilosc_sekund / 3600;
	minuty = ilosc_sekund / 60;
	sekundy = ilosc_sekund - minuty * 60 - godziny * 3600;
	cout << "liczba:" << godziny << "godz" << minuty << "min" << sekundy << "sek";





	/*4. Oblicz miesięczne zużycie energii

	Program wczytuje moc urządzenia(w watach) oraz liczbę godzin pracy dziennie.
	Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.*/

	double moc, czas_p, koszt, cena;

	cout << "podaj moc w kW" << endl;
	cin >> moc;
	cout << "podaj czas_p w h" << endl;
	cin >> czas_p;
	koszt = 4;
	cena = moc * czas_p * koszt * 30;

	cout << "koszt zuzycia energii na miesiac" << cena << "zl";




	/*5. Oblicz należny podatek dochodowy

	Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru :

	jeśli dochód ≤ 30 000 zł → podatek 12 %,

	jeśli dochód > 30 000 zł → podatek 12 % od 30 000 zł + 32 % od nadwyżki.*/

	double dochod, podatek, podatek2;

	cout << "podaj dochod" << endl;
	cin >> dochod;
	podatek = dochod * 0.12;
	podatek2 = podatek + dochod - 30000 * 0.32;

	if (dochod <= 30000) {
	
	podatek = dochod * 0.12;
	cout << "podatek <= 30000 zl wynosi:" << podatek << "zl" << endl;
}
	else {
		podatek2 = podatek + dochod - 30000 * 0.32;

		cout << "podatek > 30000 zl wynosi:" << podatek2;
	}







/*6. Oblicz ilość farby potrzebnej do pomalowania pokoju

Program wczytuje długość, szerokość i wysokość pokoju(w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
Oblicz, ile litrów farby trzeba kupić.*/


	double dlugosc, ilosc, wysokosc, mkw;
	cout << "podaj dlugosc w metrach";
	cin >> dlugosc;
	cout << "podaj wysokosc w metrach";
	cin >> wysokosc;
	cout << "podaj na ile metrow kwadratowych wystarczy litr farby" << endl;
	cin >> mkw;
	ilosc = ((dlugosc + wysokosc) / mkw * 4);
	cout << "aby pomalowac pokoj potrzeba" << ilosc << "litrow farby" << endl;


	return 0;
}
