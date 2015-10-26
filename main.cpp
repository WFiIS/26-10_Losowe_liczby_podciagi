#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba() {
    if (tutaj szatana znalezc)
    return 0;
}

int main()
{
    // Zmienne poczatkowe.
    char koniec;
    time_t t;
    srand((unsigned) time(&t));
    int losoweLiczby[50];
    int liczba[50];
    char liczbaPodCiagu;

    // Losowanie liczb i dodanie ich do tablicy.
    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 50; i++) {
        losoweLiczby[i] = rand() % 10;
        cout << losoweLiczby[i];
        if (i < 49) {
            cout << ", ";
        }
    }
    cout << endl;

    do {
        // Wprowadzenie liczby w postaci znaku. Ewentualnie zakonczenie wprowadzania n'em.
        cout << "Prosze podac kolejne liczby, n / N aby zakonczyc wpisywanie." << endl;
        int iloscWprowadzonych = -1;
        while (true) {
            cin >> liczbaPodCiagu;

            if (liczbaPodCiagu == 'n' || liczbaPodCiagu == 'N') {
                break;
            }

            iloscWprowadzonych++;
            switch (liczbaPodCiagu) {
            case '0':
                liczba[iloscWprowadzonych] = 0;
                break;
            case '1':
                liczba[iloscWprowadzonych] = 1;
                break;
            case '2':
                liczba[iloscWprowadzonych] = 2;
                break;
            case '3':
                liczba[iloscWprowadzonych] = 3;
                break;
            case '4':
                liczba[iloscWprowadzonych] = 4;
                break;
            case '5':
                liczba[iloscWprowadzonych] = 5;
                break;
            case '6':
                liczba[iloscWprowadzonych] = 6;
                break;
            case '7':
                liczba[iloscWprowadzonych] = 7;
                break;
            case '8':
                liczba[iloscWprowadzonych] = 8;
                break;
            case '9':
                liczba[iloscWprowadzonych] = 9;
                break;
            default:
                iloscWprowadzonych--;
                cout << "Wprowadzna liczba jest nieprawidlowa." << endl;
                break;
            }
        }
        iloscWprowadzonych++;

        // Policzenie ilosci podciagow.
        int calc = 0;
        for (int i = 0; i < (50 - iloscWprowadzonych); i++) {
            for (int k = 0; k < iloscWprowadzonych; k++) {

            }
        }

        // Wyswietlenie wyniku.
        cout << "Podciag ";
        for (int i = 0; i < iloscWprowadzonych; i++) {
            cout << liczba[i];
            if (i < iloscWprowadzonych - 1) {
                cout << ", ";
            }
        }
        cout << " wystapil " << calc << " razy." << endl;

        cout << "Przeszukiwac ponownie (t/T)? ";
        cin >> koniec;
    } while (koniec == 't' || koniec == 'T');
    return 0;
}
