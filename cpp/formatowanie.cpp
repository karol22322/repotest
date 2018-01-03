
#include <iostream>
#include <cstdio> //print
#include <cmath>
#include <iomanip> // manipulatory cout


using namespace std;

int main(int argc, char **argv)
{
    int li = 14;
    float lf = 12.567;
    
    printf("Liczba Pi: %15.4f\n", M_PI);
    printf("Liczba li: %15.4f\n", (double)li);
    printf("Liczba lf: %15.4f\n", lf);
    printf("Liczba li: %15d\n", li);
    printf("Hex li: %#x\n", li);
    printf("Oct li: %#o\n", li);
    
    cout << endl;
    cout.precision(5);
    cout.width(10);
    cout << lf << endl;
    
    cout << setprecision(3) << setw(20) << setfill('*') << M_PI << endl;
    cout << setprecision(3) << setw(20) << left << M_PI << endl;
    
    cout << hex << li << endl;
    cout << oct << li << endl;
	
	return 0;
}

