#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py
import sqlite3

def wyniki(dane):
    for rekord in dane:
        print(tuple(rekord))
    

def kw_c(cur):
    cur.execute("""
        SELECT siedziba, SUM(placa) AS pensje
        FROM dzial, pracownicy
        WHERE dzial.id = pracownicy.id_dzial
        GROUP BY siedziba
        ORDER BY pensje ASC
    """)
    
    wyniki(cur.fetchall())


def kw_d(cur):
    parametr = input('Podaj nazwę działu: ')
    # parametr2 = input('Kobiety czy mężczyźni?')
    
    cur.execute("""
        SELECT dzial.id, dzial.nazwa, nazwisko, imie 
        FROM dzial, pracownicy
        WHERE dzial.id = pracownicy.id_dzial
        AND dzial.nazwa = ?
        AND imie NOT LIKE '%a'
    """, (parametr,))
    
    wyniki(cur.fetchall())
  

def kw_e(cur):
    cur.execute("""
        SELECT nazwisko, stanowisko, placa * premia.premia
        FROM pracownicy, premia
        WHERE pracownicy.stanowisko = premia.id
        ORDER BY placa * premia.premia ASC
    """)
    
    wyniki(cur.fetchall())
    
def kw_f(cur):
    #~cur.execute("""
        #~SELECT AVG(placa)
        #~FROM pracownicy
        #~WHERE imie LIKE '%a'
    #~""")
    #NOT LIKE dla mężczyzn
    cur.execute("""
        SELECT AVG(placa)
        FROM pracownicy
        GROUP BY imie LIKE '%a'
    """)
    
    wyniki(cur.fetchall())
    
def kw_g(cur):
    cur.execute("""
        SELECT imie, nazwisko, stanowisko,
        CAST((JulianDay() - JulianDay(data_zatr)) / 365 AS Integer) AS okres
        FROM pracownicy
        ORDER BY okres DESC
    """)
    
    wyniki(cur.fetchall())
    
def kw_h(cur):
    parametr = input('Podaj id działu: ')
    cur.execute("""
        SELECT imie, nazwisko, stanowisko, siedziba
        FROM pracownicy, dzial
        WHERE pracownicy.id_dzial = dzial.id
        AND id_dzial = ?
    """, (parametr,))
    
    wyniki(cur.fetchall())
    
        
def main(args):
    con = sqlite3.connect('pracownicy.sqlite3')
    cur = con.cursor()  # utworzenie kursora
    
    kw_h(cur)
   
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
