#ifndef DRZEWO_HPP
#define DRZEWO_HPP
#include <iostream>

struct WEZEL{
    int wartosc;
    WEZEL *lewy;
    WEZEL *prawy;
}*korzen = NULL;

class Drzewo {
    private: // hermetyzacja
        *korzen = NULL;
        
    public: // interfejs publiczny klasy - API klasy
        WEZEL* stworzWezel(int);
        void dodajWezel(WEZEL *wezel, int);
        void wyswietlRosnoco(WEZEL *wezel);
        void wyswietlMalejaco(WEZEL *wezel);
        
    
};
#endif
