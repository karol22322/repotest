#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py

ROK_TERAZ = 2017
ROK_PYTHON = 1991

def parzyste(n):
    ile = list(range(0, n+1, 2))
    print(ile)
    return len(ile)
        

def main(args):
    imie = input("Imię? ")
    print ("Witaj,", imie)
    wiek = int(input("Wiek? "))
    rok_urodzenia = ROK_TERAZ - wiek
    print ("Urodziłeś się w", ROK_TERAZ - wiek, "roku.")
    
    if (ROK_PYTHON < rok_urodzenia):
        print ("Jestem starszy.")
    elif (ROK_PYTHON > rok_urodzenia):
        print ("Jesteś starszy.")
    else:
        print ("Mamy tyle samo lat.")
    
    n = int(input("Podaj liczbę naturalną: "))
    print("Ilość parzystych: ", parzyste(n))
    
    return 0
    
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
