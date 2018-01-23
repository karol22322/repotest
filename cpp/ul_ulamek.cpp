#include <iostream>
#include "ul_ulamek.h"

using namespace std;

Ulamek::Ulamek(int l, int m) {
    licznik = l;
    if (m != 0) mianownik = m;
    else {
        std::cout << "Mianownik nie może być zerem!" << std::endl;
        exit(1);
    }
}


void Ulamek::zapisz(int l, int m) {
    licznik = l;
    if (m != 0) mianownik = m;
    else {
        std::cout << "Mianownik nie może być zerem!" << std::endl;
        exit(1);
    }
}

void Ulamek::wypisz() {
        std::cout << licznik << "/" << mianownik;
    }
    int Ulamek::get_l() {
        return licznik;
    }
    int Ulamek::get_m() {
        return mianownik;
    }
    void Ulamek::skracaj() {
    
        ;
    }
