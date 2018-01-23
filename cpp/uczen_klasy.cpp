/*
 * ulamek.cpp
 * 
 */


#include <iostream>


using namespace std;

class Uczen {
private:
    string klasa;
    string oceny;
    string imie;
    string nazwisko;
    
public:
    Uczen (string, string, string, string); // deklaracja konstruktora obiektu
    void zapisz(string, string, string, string); // tylko deklaracja
    void wypisz() {
        cout << "klasa: " << klasa << ", oceny: " << oceny << ", imię: " << imie << ", nazwisko: " << nazwisko;
    }
    void get_kl() {
        cout << klasa;
    }
    void get_o() {
        cout << oceny;
    }
    void get_i() {
        cout << imie;
    }
    void get_naz() {
        cout << nazwisko;
    }
    void set_kl(string a) {
		cout << "Wybierz klasę dla ucznia: ";
		cin >> a;
		klasa = a;
		cout << klasa;
		
	}
    void srednia() {
		;
	}
}; // koniec definicji klasy

void Uczen::zapisz(string kl, string o, string i, string naz) {
    klasa = kl;
    oceny = o;
    imie = i;
    nazwisko = naz;
}


Uczen::Uczen(string kl, string o, string i, string naz) {
    klasa = kl;
    oceny = o;
    imie = i;
    nazwisko = naz;
}


int main(int argc, char **argv)
{   
	string wybierz;
	Uczen u1({wybierz}, {"3, 6, 2"}, {"Kuba"}, {"Nowak"});
	Uczen u2({wybierz}, {"4, 2"}, {"Tomek"}, {"Nowak"});
	
	

    u1.set_kl(wybierz);
    cout << "1 uczeń: ";
    u1.wypisz();
    cout << endl;
    
    u2.set_kl(wybierz);
    cout << endl << "2 uczeń: ";
    u2.wypisz();
    
    cout << endl; u1.get_o();
//cout << ul1.get_m() << endl;
    
   //// int licznik = ul1.get_l();
   //// int mianownik = ul1.get_m();
	//cout << ul1.skracaj(licznik, mianownik);

	return 0;
}
