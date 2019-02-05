#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py
from math import sin , cos, pi

def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          l – pokaż listę
          ''')


def pobierz_liczbe(komunikat='Pobierz liczbę: '):
    a = input(komunikat)
    if a.isdigit():
        return int(a)
    return False
    
def dziel(a, b):
    if b != 0:
        return a / b
    else:
        print("Błąd dzielenia przez zero!")
        return False
        
def sinus(stopien):
    if -1 < stopien < 361:
        
        return sin(stopien * pi / 180)
    print("Błędny zakres stopni!")
    return False
    
def cosinus(stopien):
    if -1 < stopien < 361:
        return cos(stopien * pi / 180)
    print("Błędny zakres stopni!")
    return False

def main(args):
    pokaz_liste()
    while True:
        d = input(''' Wybierz działanie ''')
        if d == '+':
            a = pobierz_liczbe( 'Podaj składnik: ')
            b = pobierz_liczbe( 'Podaj składnik: ')
            if a and b:
                wynik = a + b
                if wynik:
                    print('{} + {} = {}' .format(a, b, wynik))
        elif d == '-':
            a = pobierz_liczbe( 'Podaj odejmną: ')
            b = pobierz_liczbe( 'Podaj odejmnik: ')
            if a and b:
                wynik = a - b
                if wynik:
                    print('{} - {} = {}' .format(a, b, wynik))
        elif d == '*':
            a = pobierz_liczbe( 'Podaj czynnik: ')
            b = pobierz_liczbe( 'Podaj czynnik: ')
            if a and b:
                wynik = a * b
                if wynik:
                    print('{} * {} = {}' .format(a, b, wynik))
        elif d == '/':
            a = pobierz_liczbe( 'Podaj dzielną: ')
            b = pobierz_liczbe( 'Podaj dzielnik: ') 
            if a and b:
                wynik = dziel(a, b)
                if wynik:
                    print('{} / {} = {}' .format(a ,b, wynik))
        elif d == '//':
            pass
        elif d == '%':
            pass 
        elif d == '^':
            pass 
        elif d == '!':
            pass 
        elif d == 'sin':
            a = pobierz_liczbe('Podaj kąt w stopniach: ')
            if not isinstance(a, (bool)):
                print('sin({}) = {}' .format(a, sinus(a)))
        elif d == 'cos':
            a = pobierz_liczbe('Podaj kąt w stopniach: ')
            if not isinstance(a, (bool)):
                print('cos({}) = {}' .format(a, cosinus(a)))
        elif d == 'l':
            pokaz_liste()
        elif d == 'koniec':
            pass
        else:
            print('Błędny wybór!')



    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
