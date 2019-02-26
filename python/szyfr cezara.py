#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr cezara.py


def pobierz_klucz():
    try:
        klucz = int(input('Podaj klucz:\n'))
        return klucz % 26
    except ValueError:
        print('Błędny klucz')
        return 3

def szyfruj_1(tekst, klucz):
    szyfrogram = ''
    for znak in tekst:
        ascii = ord(znak)
        if ascii + klucz > 122:
            znak = chr(ascii+ klucz - 26)
        elif:
            
            
        else:
            znak = chr(ascii + klucz) #przeformulowac, czy znak jest spacją
        szyfrogram += znak, 
    print('Szyfrogram:\n',szyfrogram)
    

def main(args):
    tekst = input('Podaj tekst:\n').lower()
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
