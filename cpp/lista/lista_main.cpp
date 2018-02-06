/*
 * lista_main.cpp
 * 
 * 
 */


#include <iostream>
#include "lista.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Lista lista;
    lista.Dodaj(1);
    lista.Dodaj(3);
    lista.Dodaj(5);
    lista.Dodaj(7);
    lista.Dodaj(9);
    lista.Wyswietl();
    lista.Usun();
    cout << endl;
	
	return 0;
}

