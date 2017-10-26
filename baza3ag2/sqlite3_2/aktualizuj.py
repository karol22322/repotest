#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zapytania.py
import sqlite3

def wyniki(dane):
    for rekord in dane:
        print(tuple(rekord))


def dodaj (cur):
    cur.execute("""
        INSERT INTO tbKlasy
        VALUES (?, ?, ?, ?)
    """, [None, '1B', 2017, 2020])
    
def aktualizuj(cur):
    cur.execute("""
        UPDATE tbklasy
        SET klasa = ?
        WHERE klasa = ? AND roknaboru = ?
    """, ['1D', '1B', 2017])


def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor()
    con.row_factory = sqlite3.Row
    
    #dodaj(cur)
    aktualizuj(cur)
    con.commit() # zatwierdzenie zmian w bazie
    wyniki(cur.execute('SELECT * FROM tbKlasy'))
    
    return 0



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
