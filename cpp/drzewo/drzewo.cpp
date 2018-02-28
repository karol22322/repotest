#include <iostream>
#include "drzewo.hpp"
using namespace std;

WEZEL* Drzewo::stworzWezel(int wartosc) {
    WEZEL *nowyWezel = new WEZEL;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void Drzewo::dodajWezel(WEZEL *wezel, int wartosc) {
    if (korzen == NULL) {
        korzen = stworzWezel(wartosc);
    } else {
        if (wartosc < wezel->wartosc) {
            if (wezel-> lewy != NULL) {
                dodajWezel(wezel->lewy, wartosc);
            } else {
                wezel->lewy = stworzWezel(wartosc);
            }
        } else {
            if (wezel-> prawy != NULL) {
                dodajWezel(wezel->prawy, wartosc);
            } else {
                wezel->prawy = stworzWezel(wartosc);
            }
        }
    }
}

void Drzewo::wyswietlRosnoco(WEZEL *wezel) {
    if (wezel != NULL) {
        // rekurencyjne wwyświetlenie lewego poddrzewa
        wyswietlRosnoco(wezel->lewy);
        // wypisz wartość aktualnego węzła
        cout << wezel->wartosc << ", ";
        // rekurencyjne wyświetlenie prawego poddrzewa
        wyswietlRosnoco(wezel->prawy);
    }    
}

void Drzewo::wyswietlMalejaco(WEZEL *wezel) {
    if (wezel != NULL) {
        // rekurencyjne wwyświetlenie prawego poddrzewa
        wyswietlMalejaco(wezel->prawy);
        // wypisz wartość aktualnego węzła
        cout << wezel->wartosc << ", ";
        // rekurencyjne wyświetlenie lewego poddrzewa
        wyswietlMalejaco(wezel->lewy);
    }    
}

