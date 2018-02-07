/*
 *
 *
 */


#include <iostream>
#include <string>
using namespace std;

class Uczen {
public:
    string imie; //deklaracja składowej właściwości.
    string nazwisko;
    string klasa;
    int * oceny;
    int o_max;	
	int p = 0;
    Uczen(string, string, string,int);	
    Uczen(string, string, int);
	void dodajocene(int);
	void srednia();
	void ustawKlase(string);
 };
	
Uczen::Uczen(string i, string n, string k,int max) {
	imie = i;
	nazwisko = n;
	klasa=k;
	o_max=max;
	
	oceny = new int[o_max];
}	


void Uczen::ustawKlase(string k){
	klasa = k;
}

void Uczen::dodajocene(int ocena) {
	if(p < o_max){
		oceny[p] = ocena;
		p++;}
	else{
		cout << "Brak miejsca dla nowych ocen!" << endl;
	}
}
	
void Uczen::srednia(){
    int suma =0;
    for (int i =0; i < p; i++){
        suma += oceny[i];}
    cout << "Srednia ocen to: " << float(suma)/float(p);
    }


int main(int argc, char **argv)
{
	Uczen u1("Andrzej","Michałowski","3A",5);
	
	cout << "Imię ucznia: " << u1.imie << endl;
	cout << "Nazwisko ucznia: " << u1.nazwisko << endl;
	cout << "Klasa ucznia: " << u1.klasa << endl;
	
	
	u1.dodajocene(3);
	u1.dodajocene(5);
	u1.dodajocene(2);
	u1.dodajocene(6);
	u1.dodajocene(1);
	u1.dodajocene(6);
	u1.srednia();
	
	return 0;
}
