#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  losuj.py
from random import randint


def pobierz_liczbe(k='Podaj liczbę: '):
    a = input(k)
    if a.isdecimal():
        return int(a)
    return False

def losuj(liczby, ile, zakres):
    while ile:
        liczba = randint(0, zakres)
        if not liczby.count(liczba):
            liczby.append(liczba)
            ile -= 1
    
    
def pobierz_typy(typy, ile, zakres):
    while ile:
        a = pobierz_liczbe('Podaj typ: ')
        if type(a) == bool or a > zakres:
            print("Błędne dane!")
            continue
        if a not in typy:
            typy.add(a)
            ile -= 1

def main(args):
    ile = pobierz_liczbe('Ile liczb? ')
    zakres = pobierz_liczbe('Górny zakres? ')
    if type(ile) == bool or type(zakres) == bool:
        print("Błędne dane!")
        return 0
    liczby = []  #definicja pustej listy
    typy = set() #definicja pustego zbioru
    
    losuj(liczby, ile, zakres)
    pobierz_typy(typy, ile, zakres)
    
    wynik = set(liczby) & typy
    print("Odgadnięto: {}" .format(len(wynik)))
    print(typy)
    
    return 0
    
    


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
