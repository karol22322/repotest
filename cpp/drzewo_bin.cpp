/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

struct WEZEL{
    int wartosc;
    WEZEL *lewy;
    WEZEL *prawy;
} *korzen = NULL;
    
WEZEL* stworzWezel(int wartosc) {
    WEZEL *nowyWezel = new WEZEL;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void dodajWezel(WEZEL *wezel, int wartosc) {
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

void wyswietlRosnoco(WEZEL *wezel) {
    if (wezel != NULL) {
        // rekurencyjne wwyświetlenie lewego poddrzewa
        wyswietlRosnoco(wezel->lewy);
        // wypisz wartość aktualnego węzła
        cout << wezel->wartosc << ", ";
        // rekurencyjne wyświetlenie prawego poddrzewa
        wyswietlRosnoco(wezel->prawy);
    }    
}

void wyswietlMalejaco(WEZEL *wezel) {
    if (wezel != NULL) {
        // rekurencyjne wwyświetlenie prawego poddrzewa
        wyswietlMalejaco(wezel->prawy);
        // wypisz wartość aktualnego węzła
        cout << wezel->wartosc << ", ";
        // rekurencyjne wyświetlenie lewego poddrzewa
        wyswietlMalejaco(wezel->lewy);
    }    
}



int main(int argc, char **argv)
{
    dodajWezel(korzen, 8);
    dodajWezel(korzen, 3);
    dodajWezel(korzen, 10);
    dodajWezel(korzen, 1);
    dodajWezel(korzen, 6);
    dodajWezel(korzen, 4);
    dodajWezel(korzen, 7);
    dodajWezel(korzen, 14);
    dodajWezel(korzen, 13);
    
    cout << "Drzewo posortowane niemalejąco: " << endl;
    wyswietlRosnoco(korzen);
    
    cout << endl;
    
    cout << "Drzewo posortowane nierosnąco: " << endl;
    wyswietlMalejaco(korzen);
    
    
	
	return 0;
}

