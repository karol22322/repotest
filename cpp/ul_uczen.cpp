#include <iostream>
#include "ul_uczen.h"

using namespace std;

Uczen::Uczen(char k, int o[5], char i[15], char n[15]) {
    klasa = k;
    oceny = o[];
    imie = i[];
    nazwisko = n[];
}


void Uczen::zapisz(char k, int o[5], char i[15], char n[15]) {
    klasa = k;
    oceny = o[];
    imie = i[];
    nazwisko = n[];
}

void Uczen::wypisz() {
        std::cout << licznik << "/" << mianownik;
    }
    int Uczen::get_k() {
        return klasa;
    }
    int Uczen::get_o() {
        return oceny;
    }
    int Uczen::get_i() {
        return imie;
    }
    int Uczen::get_n() {
        return nazwisko;
    }
    void Uczen::ustaw_klase() {
        ;
    }
    int Uczen::srednia(){
     ;   
    }
}
