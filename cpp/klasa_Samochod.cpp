#include <iostream>

using namespace std;

class Samochod
{
	public:
	string marka;
	string model;
	int rocznik;
	int przebieg;
	
	void wczytaj()
	{
		cout << "Podaj markę: ";
		cin >> marka;
		cout << "Podaj model: ";
		cin >> model;
		cout << "Podaj rok produkcji: ";
		cin >> rocznik;
		cout << "Podaj przebieg: ";
		cin >> przebieg;		
	}
	
	void wypisz()
	{
		cout << "Marka samochodu: " << marka <<", model: " << model 
		<< ", rocznik: " << rocznik << ", przebieg: " << przebieg;	
	}
};

int main(int argc, char **argv)
{
	Samochod s1;
	s1.wczytaj();
	s1.wypisz();
	
	Samochod s2;
	s2.wczytaj();
	s2.wypisz();
	
	return 0;
}

