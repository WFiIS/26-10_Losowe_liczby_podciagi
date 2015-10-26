#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    // Zmienne poczatkowe.
    char koniec;
    time_t t;
    srand((unsigned) time(&t));
    int losoweLiczby[50];
    int liczba[50];
    char liczbaPodCiagu;

    for (int i = 0; i < 50; i++) {
        liczba[i] = 10;
    }

    // Losowanie liczb i dodanie ich do tablicy.
    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 50; i++) {
        losoweLiczby[i] = rand() % 10;
        cout << losoweLiczby[i];
        if (i != 49) {
            cout << ", ";
        }
    }
    cout << endl;

    do {
        cout << "Prosze podac kolejne liczby, n / N aby zakonczyc wpisywanie. ";
        for (int i = 0; i < 50; i++) {
            cin >> liczbaPodCiagu;

            if (liczbaPodCiagu == 'n' || liczbaPodCiagu == 'N') {
                break;
            } else {
                liczba[i] = (int)liczbaPodCiagu;
            }
        }

        int iloscWprowadzonych = 0;
        for (int i = 0; i < 50; i++) {
            if (liczba[i] == 10) {
                break;
            } else {
                iloscWprowadzonych++;
            }
        }

        for (int i = 0; i < (50 - iloscWprowadzonych); i++) {

        }

        int calc = 0;

        for(int i = 0; i < 50; i++) {
            if (liczby[i] == liczba) {
                calc++;
            }
        }

        cout << "Liczba " << liczba << " wystapila " << calc << " raczy." << endl;


        cout << "Przeszukiwac ponownie (t/T)? ";
        cin >> koniec;
    } while (koniec == 't' || koniec == 'T');
    return 0;
}
