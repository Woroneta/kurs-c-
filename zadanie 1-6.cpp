
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
//========================zmienne=================
	double time, distance, average_speed, lenght, widght, field, diagonal, power, usage, price, usage_price, usage_time, height, lenght2, paint_p, paint_l;
	int  seconds, minutes, hours, seconds2, reszta, income, tax;
//==================zadanie 1=======================

	cout << "wpisz dystans trasy w km: ";
	cin >> distance;
	cout << "wpisz czas w którym przebyto trase w godzinach: ";
	cin >> time;
	average_speed = distance / time;
	cout << "średnia prędkosc w km/h: " << average_speed << endl;
//====================zadanie 2================
	cout << "podaj dlugosc w metrach:";
	cin >> lenght;
	cout << "podaj szerokosc w m:";
	cin >> widght;
	field = lenght * widght;
	cout << "pole wynosi:" << field << endl;
	diagonal = sqrt(lenght * lenght + widght * widght);
	cout << "przekatna wynosi:" << diagonal << endl;
// ======================zadanie 3================

	cout << "podaj liczbe sekund:";
	cin >> seconds;
	hours = seconds / 3600;
	reszta = seconds % 3600;
	minutes = reszta / 60;
	seconds2 =reszta % 60;
	cout << "jest to:" << hours << "godzin," << minutes << "minut," << seconds2 << "sekund." << endl;
//===============================zadanie 4=====================

	cout << "podaj cene za kilowatogodzine:";
	cin >> price;
	cout << "podaj moc urzadzenia:";
	cin >> power;
	cout << "podaj ilosc godzin uzytkowania dziennie:";
	cin >> usage_time;
	usage = usage_time * power / 1000 * 30;
	cout << "miesieczne uzycie wynosi:" << usage << endl;
	usage_price = usage * price;
	cout << "koszt miesieczny za uzycie tego urzadzenia wynosi;" << usage_price << endl;
//===================zadanie 5========================
	cout << "wpisz swoj dochod: ";
	cin >> income;
	if (income <= 30000)
		tax = income * 0.12;
	else
		tax = 30000 * 0.12 + (income-30000)*0.32;
	cout << "twoj podatek wynosi:" << tax << endl;

//=======================zadanie 6=====================
	cout << "podaj dlugosc sciany:";
	cin >> lenght2;
	cout << "podaj wysokośc sciany:";
	cin >> height;
	cout << "podaj ile metrów kwadratowych mozna pomalowac 1m farby:";
	cin >> paint_p;
	paint_l = (lenght2 * height) / paint_p;
	cout<<"do pomalowania sciany potrzeba : " << paint_l << "litrów farby" << endl;
	return 0;
}

/*1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans(w kilometrach) i czas podróży(w godzinach).
Oblicz średnią prędkość i wypisz wynik w km / h.
*2. Oblicz pole prostokąta i przekątną

Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.

3. Przeliczanie sekund na godziny, minuty i sekundy

Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund.

4. Oblicz miesięczne zużycie energii

Program wczytuje moc urządzenia(w watach) oraz liczbę godzin pracy dziennie.
Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.

5. Oblicz należny podatek dochodowy

Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru :

jeśli dochód ≤ 30 000 zł → podatek 12 %,

jeśli dochód > 30 000 zł → podatek 12 % od 30 000 zł + 32 % od nadwyżki.
6. Oblicz ilość farby potrzebnej do pomalowania pokoju

Program wczytuje długość, szerokość pokoju(w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
Oblicz, ile litrów farby trzeba kupić.
*/
	
