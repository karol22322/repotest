#include <iostream>
#include <cctype>
using namespace std;


void lower(char tekst[]){
    if( isupper( tekst) )
	{
		t1 = tolower( tekst );
		cout << t1 << endl;
	}
	else
		cout << tekst << endl;
}

void szyfruj(char tekst[], int klucz) {
    int i = 0; // indeks
    klucz = klucz % 26;
    while (tekst[i] != '\0'){
        if ((int)tekst[i] + klucz > 122)
            tekst[i] = (char)((int)tekst[i] + klucz-26);
        else
             tekst[i] = (char)((int)tekst[i] + klucz);
       // (int)tekst[i]
       // ((char)((int)tekst[i])
    i++;
    }
    cout << tekst;
}


int main(int argc, char **argv){
    char tekst[100];
    int klucz = 3;
    cout<< "Podaj tekst do zaszyfrowania: " << endl;
    // cin >> tekst;
    cin.getline(tekst, 100);
    cout << "Podaj klucz: " << endl;
    cin >> klucz;
    szyfruj(tekst, klucz);
    lower(tekst);
    return 0;
}
