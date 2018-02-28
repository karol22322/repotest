#include <iostream>
#include "drzewo.hpp"

using namespace std;

int main(int argc, char **argv)

{
    Drzewo drzewo;
    drzewo.dodajWezel(8);
    drzewo.dodajWezel(3);
    drzewo.dodajWezel(0);
    drzewo.dodajWezel(1);
    drzewo.dodajWezel(6);
    drzewo.dodajWezel(4);
    drzewo.dodajWezel(7);
    drzewo.dodajWezel(14);
    drzewo.dodajWezel(13);
    
    cout << "Drzewo posortowane niemalejąco: " << endl;
    drzewo.wyswietlRosnoco(korzen);
    
    cout << endl;
    
    cout << "Drzewo posortowane nierosnąco: " << endl;
    drzewo.wyswietlMalejaco(korzen);
	
	return 0;
}

