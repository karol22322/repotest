
#include <iostream>

using namespace std;

void szyfruj(char tekst[], int klucz){
    int i = 0; // indeks
    klucz = klucz % 26;
    while (tekst[i] != '\0') {
        if ((int)tekst[i] + klucz > 122)
            tekst[i] = (char)((int)tekst[i] + klucz - 26);
        else
            tekst[i] = (char)((int)tekst[i] + klucz);
        i++;
        // (int)tekst[i] - rzutowanie na kod ASCII
        // (char)((int)tekst[i]) - zamiania kodu ASCII na znak
    }
    cout << tekst;
}

int main(int argc, char **argv) {
    char tekst[100];
    int klucz = 3;
    cout << "Podaj tekst do zaszyfrowania" << endl;
    //cin >> tekst;
    cin.getline(tekst, 100);
    cout << "Podaj klucz: " << endl;
    cin >> klucz;
    szyfruj(tekst, klucz);


	return 0;
}

