/*
 * lista.cpp
 * 
 */


#include <iostream>
#include "lista.hpp"

Lista::Lista(){
    head = NULL;
    tail = NULL;
}

Lista::~Lista(){
    while(Usun()) {;}; // usunięcie wszystkich elementów z listy
}

void Lista::Dodaj(int wartosc) {
    ELEMENT *el = new ELEMENT;
    el->wartosc = wartosc;
    el->nastepny = NULL;
    if (head == NULL) { // lista była pusta
        head = el;
        tail = el;
    } else {
        tail->nastepny = el;// ustawienie wskaznika nastepny 
        // dotychczasowego ostatniego elementu na adres nowego elementu
        tail = el; // aktualizacja wskaznika do ostatniego elementu
    }
}

void Lista::Wyswietl(){
    ELEMENT *el = head;
    while (el != NULL) {
        std::cout << el->wartosc << " ";
        el = el->nastepny;
    }
}

bool Lista::Usun(){
    if (head != NULL) { // lista zawiera elementy!
        if (head == tail) { // usuwamy ostatni element
            delete head; // usuwamy zmienną wskazywaną przez head
            head = NULL;
            tail = NULL;
        } else { // usuwamy ostatni element z listy
            ELEMENT *el = head;
            while (el->nastepny != tail) { // szukam przedostatniego elementu
                el = el->nastepny;
            }
            delete el->nastepny;
            el->nastepny = NULL;
            tail = el;
        }
        return true;
    }
    return false;
}

//~ void Lista::Wstaw(int pozycja, int wartosc) {
    //~ ;
//~ }

void Lista::Wstaw(int pozycja, int wartosc) { 
    ELEMENT *el = new ELEMENT;
    el->wartosc = pozycja;
    el->nastepny = el;
    if(pozycja > int(tail->nastepny)) {
        tail->nastepny = el;// ustawienie wskaznika nastepny 
        // dotychczasowego ostatniego elementu na adres nowego elementu
        tail = el; // aktualizacja wskaznika do ostatniego elementu
    }
}
