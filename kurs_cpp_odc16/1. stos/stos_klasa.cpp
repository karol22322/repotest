#include <iostream>

using namespace std;

class Stos {
public:
	int dane[6];
	int rozmiar;
	void wyswietl();
	void push();
	void pop();
	void size();
};

void Stos::wyswietl()
{
    cout<<"Zawartość stosu: "<<endl;

    for (int i = rozmiar; i >= 1; i--)
    {
        cout<<dane[i]<<endl;
    }

    if (rozmiar==0) cout<<"pusty"<<endl;
}

void Stos::push()
{
    if (rozmiar>=5)
    {
        cout << "Stos pelny!";
    }
    else
    {
        cout << endl << "Jaką liczbę położyć na stosie?: ";

        rozmiar = rozmiar  + 1;
        cin >> dane[rozmiar];
    }
}




int main(int argc, char **argv)
{
	Stos stos;
	stos.push();
	//~ stos.wyswietl();
	
	return 0;
}

