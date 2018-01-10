/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;

void wprowadz(float *t, int ile) {
    for(int i = 0; i < ile; i++) {
        cout << "Podaj liczbę: " << endl;
        // cin >> t[i];
        cout << "Adres elementu: " << t + i << endl;
        cin >> *(t + i);
    }
}

void drukuj(float *t, int ile) {
    for(int i = 0; i < ile; i++) {
        cout << *(t + i);
    }
}

int tab1W() {
    cout << "Ile poda liczb? ";
    
    int ile;
    cin >> ile;
        
    cout << sizeof(ile) << endl;
        
    try {
        float *ptab = NULL;
        ptab = new float[ile]; // utworzenie tablicy dynamicznej
        wprowadz(ptab, ile);
        drukuj(ptab, ile);
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    return 0;
}

int tab2W() {
    int w, k, i, j;
    cout << "Podaj liczbę wierszy i kolumn: ";
    cin >> w >> k;
    int **tab; // deklaracja wskaźnika do wskaźnika
        
    try {
        tab = new int *[w]; // utworzenie tablicy dynamicznej
        wprowadz(ptab, ile);
        drukuj(ptab, ile);
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    return 0;
}
   

int main(int argc, char **argv)
{
    tab1W();
    
	return 0;
}

