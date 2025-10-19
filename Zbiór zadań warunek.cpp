#include<iostream>      
#include<string>
#include<cmath>
 
using namespace std;

int main()
{
	//===================DANE====================
	double age, procent, section, l11, l12, l13;
	int number;
	//==================ZADANIE 1=================
	cout << "podaj sówj wiek:" << endl;
	cin >> age;
	if (age >= 18) {
		cout << " Masz prawo do głosowania" << endl;
	}
	else {
		cout << "Nie masz prawa do głosowania" << endl;

	}
	//======================ZADANIE 2==================
	cout << "=================================" << endl;
	cout << "podaj wynik w procentach:" << endl;
	cin >> procent;
	if (procent <= 100 && procent >= 90) {
		cout << "Ocena: celujący" << endl;
	}
	else if (procent < 90 && procent >= 75) {
		cout << "Ocena: bardzo dobry" << endl;
	}
	else if (procent < 75 && procent >= 50) {
		cout << "Ocena: dobry" << endl;
	}
	else if (procent < 50 && procent >= 00) {
		cout << "Ocena: niedostateczny" << endl;
	}
	else {
		cout << "niepoprawny procent" << endl;
	}
	//===================ZADANIE 3====================
	cout << "=================================" << endl;
	cout << "podaj liczbe:" << endl;
	cin >> number;
	if (number> 0) {
		cout << "liczba jest dodatnia" << endl;
	}
	else if (number < 0) {
		cout << "liczbna jest ujemna" << endl;
	}
	else {
		cout << "liczba jest rowna zeru" << endl;
	}
	//================ZADANIE 4==================
	cout << "=================================" << endl;
	cout << "podaj liczbe:" << endl;
	cin >> section;
	if (section <= 200 && section >= 100) {
		cout << "liczba znajduje sie w przedziale" << endl;
	}
	else {
		cout << "liczba nie znajduje sie w przedziale" << endl;
	}
	//==============ZADANIE 5===================
	cout << "================================" << endl;
	cout << "podaj liczbe pierwsza: " << endl;
	cin >> l11;
	cout << "podaj liczeb druga:" << endl;
	cin >> l12;
	cout << "podaj liczbe trzecia:" << endl;
	cin >> l13;
	if (l11 > l12 && l11 > l13) {
		cout << "liczba " << l11 << " jest najwieksza." << endl;
	}
	else if (l12 > l11 && l12 > l13) {
		cout << "liczba " << l12 << "jest najwieksza." << endl;
	}
	else {
		cout << "liczba " << l13 << " jest najwieksza." << endl;
	}
	cout << "Wszystek progamy zakonczyly dzialanie.";
	return 0;
}
/*1. Sprawdzenie wieku i prawo do głosowania.
Wczytaj wiek użytkownika.
Jeśli >= 18 - "Masz prawo do głosowania".
Jeśli < 18 "Nie masz prawa do głosowania”.

	2. Ocena szkolna na podstawie wyniku procentowego
	Wczytaj wynik procentowy z testu(0–100).
	90–100 - „Ocena: celujący”,
	75–89 - „Ocena : bardzo dobry”,
	50–74 - „Ocena : dobry”,
	< 50 - „Ocena : niedostateczny”.

	3. Sprawdzenie liczby dodatniej lub ujemnej
	Wczytaj liczbę całkowitą.
	Jeśli dodatnia - „Liczba dodatnia”,
	jeśli ujemna - „Liczba ujemna”,
	jeśli 0 - „Liczba równa zero”.

	4. Sprawdzenie czy liczba mieści się w zakresie 100–200 lub poza nim
	Wczytaj liczbę.
	Jeśli >= 100 i <= 200 - "Liczba w przedziale 100–200"
	w przeciwnym razie - "Liczba poza przedziałem"

	5. Sprawdzenie największej liczby z trzech wprowadzonych
	Wczytaj trzy liczby.
	Program wypisze, która jest największa.*/
