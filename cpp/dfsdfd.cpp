#include <iostream>

struct ELEMENT {
    int wartosc;
    ELEMENT *nastepny;
};

class Lista {
    private: // hermetyzacja
        ELEMENT *head;
        ELEMENT *tail;
    public: // interfejs publiczny klasy - API klasy
        Lista(); // konstruktor
        ~Lista(); // dekonstruktor
        void Dodaj(int);
        void Wyswietl();
        bool Usun();
        void Wstaw(int, int);
    
};

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

//~ void Lista::Wstaw(int pozycja, int wartosc) { 
    //~ ELEMENT *el = new ELEMENT;
    //~ el = head + pozycja;
    //~ el->wartosc = wartosc;
    //~ el->nastepny = el;
    //~ if(el->nastepny <= tail) {
        //~ tail->nastepny = el;// ustawienie wskaznika nastepny 
        //~ // dotychczasowego ostatniego elementu na adres nowego elementu
        //~ tail = el; // aktualizacja wskaznika do ostatniego elementu
    //~ }
//~ }

void Lista::Wstaw(int pozycja, int wartosc) {
    ELEMENT *el = head;
    for (int i = 0; i < pozycja; i++){
		el = el->nastepny;
	}
	
	el = NULL;
	el->wartosc = wartosc;
	
	while (el->nastepny != NULL) {
		el = el->nastepny;
	}
	el = tail;
	
    
    
    
    
    
    //~ while(el->wartosc != pozycja) {
    //~ el = el->nastepny;
    //~ } //szukamy t
    //~ el->nastepny = new ELEMENT;
    //~ el->nastepny->nastepny->wartosc = pozycja;
    //~ el->nastepny->wartosc = wartosc;
  
}
    //~ el->wartosc = wartosc;
    //~ el->nastepny = el;
    //~ while(el->nastepny != tail){
        //~ el = el->nastepny;
        
        //~ }// ustawienie wskaznika nastepny 
        // dotychczasowego ostatniego elementu na adres nowego elementu
         // aktualizacja wskaznika do ostatniego elementu
      
         
    


using namespace std;

int main(int argc, char **argv)
{	
	int a, b;
	cout << "Na którym miejscu listy wstawić wartość i jaką wartość? ";
	
	cin >> a >> b;
    Lista lista;
    lista.Dodaj(1);
    lista.Dodaj(3);
    lista.Dodaj(5);
    lista.Wyswietl();
    lista.Usun();
    lista.Usun();
    cout << endl;
    lista.Wyswietl();
    cout << endl;
    lista.Dodaj(2);
    lista.Dodaj(4);
    lista.Dodaj(6);
    lista.Dodaj(8);
    lista.Dodaj(10);
    lista.Wstaw(a, b);
    cout << endl;
    lista.Wyswietl();
	
	return 0;
}

