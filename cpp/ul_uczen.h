#ifndef Uczen_H
#define Uczen_H

class Uczen {
private:
    char klasa;
    int oceny[5];
    char imie[15];
    char nazwisko[15];
public:
    Uczen (char, int[5], char[15], char[15]); // deklaracja konstruktora obiektu
    void zapisz(int, int); // tylko deklaracja
    void wypisz();
    int srednia();
    void ustaw_klase();
};

#endif
