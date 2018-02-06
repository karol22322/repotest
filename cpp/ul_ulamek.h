#ifndef ULAMEK_H
#define ULAMEK_H

class Ulamek {
private:
    int licznik;
    int mianownik;
public:
    Ulamek (int, int); // deklaracja konstruktora obiektu
    void zapisz(int, int); // tylko deklaracja
    void wypisz();
    int get_l();
    int get_m();
    void skracaj();
};

#endif
