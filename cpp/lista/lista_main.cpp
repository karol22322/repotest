/*
 * lista_main.cpp
 * 
 * 
 */


#include <iostream>
#include "lista.hpp"

using namespace std;

int main(int argc, char **argv)
<<<<<<< HEAD
{
    int a, b;
    cout << "Podaj numer miejsca i liczbę: " << endl;
    cin >> a >> b;
=======
{	
	int a, b;
	cout << "Na którym miejscu listy wstawić wartość i jaką wartość? ";
	cin >> a >> b;
>>>>>>> 9eb0838393213c0137de8ef4f6d8ac7776830fd0
    Lista lista;
    lista.Dodaj(1);
    lista.Dodaj(3);
    lista.Dodaj(5);
    lista.Dodaj(7);
    lista.Dodaj(9);
    lista.Wyswietl();
    lista.Usun();
    cout << endl;
<<<<<<< HEAD
    lista.Wstaw(a, b);
=======
    lista.Wyswietl();
    lista.Dodaj(2);
    lista.Dodaj(4);
    lista.Dodaj(6);
    lista.Dodaj(8);
    lista.Dodaj(10);
    lista.Wstaw(a, b);
    cout << endl;
>>>>>>> 9eb0838393213c0137de8ef4f6d8ac7776830fd0
    lista.Wyswietl();
	
	return 0;
}

