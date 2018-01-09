/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	tab1W() {
        int *ptab = NULL;
        cout << "Ile poda liczb? ";
        int ile;
        cin >> ile;
        
        try {
            ptab = new int[ile]; // utworzenie tablicy dynamicznej
        } catch(bad_alloc) {
            cout << "Za mało pamięci!";
            return 1;
        }
}
    
    
	return 0;
}

