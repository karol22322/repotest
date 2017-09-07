#include <iostream>
#include <math.h>

using namespace std;



#define ROK_TERAZ 2017
#define ROK_CPP 1983

void parzyste (int n)
{
    for(int i = 0; i <= n ; i=i+2)
    {
        cout << i << endl;
    }
    
}

int main(int argc, char **argv)
{/*
    char imie[20];
    int wiek;
    int rok_urodzenia;
    cout << "Witaj! Imię użytkownika:" << endl;
    cin >> imie;
    cout << "Witaj, " << imie << "! Ile masz lat?" << endl;
    rok_urodzenia = ROK_TERAZ-wiek;
    cin >> wiek;
    cout << "Urodziłeś się w " << ROK_TERAZ-wiek << " roku." << endl;
    if(ROK_CPP < rok_urodzenia)
    {
        cout << "Jestem starszy." << endl;
    }
    else if (ROK_CPP > rok_urodzenia)
    {
        cout << "Jesteś starszy." << endl;
    }
    else
    {
        cout << "Mamy tyle samo lat." << endl;
    }
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    parzyste(n);
    */
    
    int liczba, i, j, pierwiastek, *tablica;
    cout << "Podaj maksimum: ";
    cin >> liczba;
     
    pierwiastek = (int)sqrt((double)liczba);
    tablica = new int[liczba+1];
    for (i = 0; i <= liczba; i++)
    tablica[i] = i;
     
    for (i = 2; i <= pierwiastek; i++)
    {
    if (tablica[i] != 0)
    for (j = 2*i; j <= liczba; j+= i)
    tablica[j] = 0;
    }
     
    cout << "Liczby pierwsze z przedzialu <2," << liczba << "> to:\n";
    for (i = 2; i <= liczba; i++)
    if (tablica[i] != 0)
    cout << tablica[i] << " ";
    cout << endl;
    
	return 0;
}

