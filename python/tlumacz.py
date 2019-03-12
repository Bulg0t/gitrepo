#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tlumacz.py
from random import randint
import os
import json


def pokaz_menu():
    """Funkcja wyświetla działania dostępne dla użytkownia"""
    print("""
    Wybierz działanie:

    1. Lista słów
    2. Wprowadzanie / edycja słów
    3. Tłumaczenie
    4. Zmień język
    5. Koniec
""")

def listaSlow(dane):
    if not dane:
        print('Brak słów')
        return
    i = 1
    print()
    for slowo, znaczenia in dane.items():
        print('{}. {} – {}'.format(i, slowo, ', '.join(dane[slowo])))
        i += 1

def pobierzZnaczenia():
    znaczenia = input('Podaj znaczenie(a) oddzielone przecinkami:\n')
    znaczenia = znaczenia.split(',')
    znaczenia = [z.strip() for z in znaczenia]
    return znaczenia



def pobierzDane(dane):
    slowo = input('Podaj słowo: ').strip()
    if slowo in dane.keys():
        print('Słowo w bazie')
        print('{} – {}'.format(slowo, ','.join(dane[slowo])))
        if input('Czy chcesz zmienic znaczenia (t/n)? ').lower() == 't':
            dane[slowo] = pobierzZnaczenia()
    else:
        dane[slowo] = pobierzZnaczenia()
        
def tlumacz(dane):
    if not dane:
        print('Brak słów')
        return
    slowa = list(dane.keys())
    op = 't'
    while op == 't':
        if len(slowa) > 1:
            slowo = slowa[randint(0, len(slowa) - 1)]
        else:
            slowo = slowa[0]
        print('Przetłumacz:', slowo)
        znaczenia = pobierzZnaczenia()
        poprawne = [z for z in znaczenia if z in dane[slowo]]
        if poprawne:
            print('Poprawne:', ','.join(poprawne))
            slowa.remove(slowo)
        else:
            print('Brak poprawnych znaczeń')
        if slowa:
            op = input('Następne (t/n)? ').lower()
            print()
        else:
            print('Przetłumaczyłeś wszystko!')
            return 

def wczytaj_dane(plik, roz='.dat'):
    dane = {}
    if os.path.isfile(plik + roz):
        with open(plik + roz, "r") as f:
            dane = json.load(f)
    else:
        print('Plik {} nie istnieje.'.format(plik + roz))
    return dane

def wybierzJezyk(konf_dane):
    if konf_dane['jezyki']:
        print('Wybierz język: ')
        for i, j in enumerate(konf_dane['jezyki']):
            print('{}. {}'.format(i + 1, j))
        print('{}. nowu język'.format(i + 2))


        
def main(args):
    # dane = {'go': ['iść', 'jeździć'], 'see': ['widzieć', 'oglądać']}
    
    konf_plik = 'baza'
    konf_dane = wczytaj_dane(konf_plik)
    if 'jezyki' not in konf_dane:
        konf_dane['jezyki'] = []
    jezyk = wybierzJezyk(konf_dane)
    print(konf_dane)
    return
    
    
    operacja = 0
    while operacja != 5:
        pokaz_menu()
        operacja = int(input(" "))
        if operacja == 1:
            listaSlow(dane)
        elif operacja == 2:
            pobierzDane(dane)
        elif operacja == 3:
            tlumacz(dane)
        elif operacja == 5:
            print('\nDo zobaczenia!')
        else:
            print('Błędny wybór!')
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
