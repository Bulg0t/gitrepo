#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle.py

def cw1():
    suma = 0
    liczba = int(input('Podaj liczbę: '))
    while suma <= 75:
        suma += liczba
        print(suma)
        liczba = int(input('Podaj liczbę: '))
    print()
    print('Suma liczb : ', suma)
        
    return " "

def cw2():
    n = int(input('Podaj zakres liczb dolny: '))
    m = int(input('Podaj zakres liczb górny: '))
    liczba = 0
    for i in range(n, m+1):
        liczba = liczba + 1 
        print(i, end=' ')
    return " "

def cw3():
    n = 0 
    m = int(input('Podaj ostatnią liczbę: '))
    for i in range(m + 1):
        print(i*i)
    return " "


def main(args):
    print(cw3())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
