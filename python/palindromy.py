#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
import os


def czy_palindrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        if tekst[i] != tekst[-i -1]:
            return False
    return True
    
    
def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny!')
        return False
    teksty = []
    with open(plik, "r") as f:
        for wiersz in f:
            teksty.append(wiersz.strip())
    return teksty
            
            
def main(args):
    # tekst = input('Podaj tekst: ')
    teksty = czytaj_dane('dane01.txt')
    print(teksty)
    ile = 0
    for i in range (len(teksty)):
        if czy_palindrom(teksty[i]):
            ile += 1
        else:
            continue

    print(ile)

    
    # ~if czy_palindrom(tekst):
        # ~print('To palindrom')
    # ~else:
        # ~print('To nie jest palindrom')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
