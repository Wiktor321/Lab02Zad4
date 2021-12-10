#include <iostream>

using namespace std;

int main() {


	int liczba, Dodatnie = 0, Ujemne = 0;

	for (int i = 1; i <= 10; i++) {

		cout << "Wprowadz liczbe " << i << ": ";

		cin >> liczba;

		if (liczba >= 0) {

			Dodatnie += liczba;

		}

		else {

			Ujemne += liczba;

		}
	}
	cout << endl;

	cout << "Suma dodatnich: " << Dodatnie << endl;

	cout << "Suma ujemnych: " << Ujemne << endl;

}