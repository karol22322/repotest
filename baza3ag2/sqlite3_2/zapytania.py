#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py
import sqlite3

def wyniki(dane):
    for rekord in dane:
        print(tuple(rekord))
    
    
    
def kw_a(cur):
    cur.execute('''
        SELECT Imie, Nazwisko, tbKlasy.klasa
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.klasaID = tbKlasy.IDklasy
        AND tbKlasy.Klasa = '1A'
        ''')
    wyniki = cur.fetchall()
    for row in wyniki:
        print(tuple(row))
        
        
        
def kw_b(cur):
    cur.execute('''
        SELECT MAX(EgzHum)
        FROM tbUczniowie
        ''')
    wyniki = cur.fetchall()
    for row in wyniki:
        print(tuple(row))



def kw_c(cur):
    cur.execute('''
        SELECT AVG(EgzMat)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.klasaID=tbKlasy.IDklasy
        AND tbKlasy.Klasa = '1A'
        ''')
    wyniki = cur.fetchall()
    for row in wyniki:
        print(tuple(row))
        
        
        
def kw_d(cur):
    cur.execute('''
        SELECT Imie, Nazwisko, tbOceny.Ocena
        FROM tbUczniowie, tbOceny
        WHERE tbOceny.UczenID = tbUczniowie.IDucznia
        AND Imie = "Dorota" 
        AND Nazwisko = "Nowak"
        ''')
    wyniki = cur.fetchall()
    for row in wyniki:
        print(tuple(row))
        
        
def kw_e(cur):
    cur.execute('''
        SELECT AVG(Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE strftime('%m', datad) LIKE '10'
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        AND tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        ''')
    wyniki = cur.fetchall()
    for row in wyniki:
        print(tuple(row))
        
        
        
def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor()  # utworzenie kursora
    
    kw_e(cur)
   
    return 0
    
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
